#include "lro_scene_selector.h"
#include "lro_scene.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_string.h"
#include "bn_optional.h"
#include "bn_fixed_point.h"
#include "bn_keypad.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"

#include "bn_sprite_items_box.h"
#include "bn_sprite_items_cursor.h"
#include "bn_regular_bg_items_training.h"
#include "bn_regular_bg_items_recruit.h"
#include "bn_regular_bg_items_senior.h"
#include "bn_regular_bg_items_expert.h"
#include "bn_regular_bg_items_officer.h"

#include "bn_sound_items.h"

namespace lro {
    Selector::Selector(bn::sprite_text_generator& text_generator)
    : _text_generator(&text_generator){}

    namespace{
    [[nodiscard]] bn::fixed_point get_cursor_pos(int selected)
    {
        int sx = -63;
        int sy = -14;

        sx += selected%5 * 32;
        if(selected >= 5){
            sy+=30;
        }

        return bn::fixed_point(sx, sy);
    }
    }

    void Selector::fade_out(bn::blending::fade_color_type color)
    {
        bn::blending::set_fade_alpha(0);
        bn::blending::set_fade_color(color);
        _fade_action = bn::blending_fade_alpha_to_action(15, 1);
        while(!_fade_action.value().done()){
            _fade_action.value().update();
            bn::core::update();
        }
        bn::blending::set_fade_alpha(1);
    }

    int Selector::execute(Rank rank){
        bn::optional<bn::regular_bg_ptr> bg;
        int startingLevel = 1;
        switch (rank)
        {
            case Rank::Trainee :
                bg = bn::regular_bg_items::training.create_bg(0, 0);
                startingLevel = 1;
                break;
            case Rank::Recruit :
                bg = bn::regular_bg_items::recruit.create_bg(0, 0);
                startingLevel = 11;
                break;
            case Rank::Senior :
                bg = bn::regular_bg_items::senior.create_bg(0, 0);
                startingLevel = 21;
                break;
            case Rank::Expert :
                bg = bn::regular_bg_items::expert.create_bg(0, 0);
                startingLevel = 31;
                break;
            case Rank::Officer :
                bg = bn::regular_bg_items::officer.create_bg(0, 0);
                startingLevel = 41;
                break;
        }
        bg.value().set_blending_enabled(true);
        

        State state;
        int selected = 0;
        int current = state.get_last_completed_level();
        if(current >=startingLevel && current < startingLevel + 10){
            selected = current % 10;
        } else if(current < startingLevel){
            selected = 0;
        } else if(current > startingLevel+9){
            selected = 9;
        }

        bn::vector<bn::sprite_ptr, 32> labels;
        bn::vector<bn::sprite_ptr, 10> boxes;

        bn::sprite_ptr cursor = bn::sprite_items::cursor.create_sprite(80, -30,1);
        cursor.set_blending_enabled(true);
        cursor.set_position(get_cursor_pos(selected));

        _text_generator->set_center_alignment();

        // get state from sram
        int done_levels = state.get_last_completed_level();
        int difficulty_sprite = 1 + startingLevel/10;

        // draw boxes and labels
        for (int i = startingLevel; i < (startingLevel + 5); i++){
            if(done_levels + 1 >= i){
                boxes.push_back(bn::sprite_items::box.create_sprite((i-1)%10 * 32 - 64, 0+1, difficulty_sprite));
            } else {
                boxes.push_back(bn::sprite_items::box.create_sprite((i-1)%10 * 32 - 64, 0+1, 0));
            }
            _text_generator->generate((i-1)%10 * 32 - 64, 0, bn::to_string<4>(i), labels);
        }
        for (int i = (startingLevel + 5); i < (startingLevel+10); i++){
            if(done_levels + 1 >= i){
                boxes.push_back(bn::sprite_items::box.create_sprite(((i-1)%10-5) * 32 - 64, 30+1, difficulty_sprite));
            } else {
                boxes.push_back(bn::sprite_items::box.create_sprite(((i-1)%10-5) * 32 - 64, 30+1, 0));
            }
            _text_generator->generate(((i-1)%10-5) * 32 - 64, 30, bn::to_string<4>(i), labels);
        }

        _text_generator->set_left_alignment();
        _text_generator->generate(-112, 72, "β Back", labels);
        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", labels);

        for(bn::sprite_ptr sprite: labels){
            sprite.set_blending_enabled(true);
        }
        for(bn::sprite_ptr sprite: boxes){
            sprite.set_blending_enabled(true);
        }

        //fade in
        bn::blending::set_fade_alpha(1);
        bn::blending::set_fade_color(bn::blending::fade_color_type::WHITE);
        _fade_action = bn::blending_fade_alpha_to_action(30, 0);

        while(true){

            if(!_fade_action.value().done()){
                _fade_action.value().update();
            } else {
                bn::blending::set_fade_alpha(0);
            }

            if(bn::keypad::a_pressed()){
                if(selected+startingLevel-1 < state.get_last_completed_level() + 1){ //todo remove true block levels
                    bn::sound_items::luggage_2.play();
                    fade_out(bn::blending::fade_color_type::BLACK);
                    return selected+startingLevel;
                } else {
                    bn::sound_items::no_move.play();
                }
            }

            if(bn::keypad::up_pressed()){
                if(selected > 4){
                    selected -=5;
                    bn::sound_items::luggage_2.play();
                }
            }

            if(bn::keypad::down_pressed()){
                if(selected <=4){
                    selected +=5;
                    bn::sound_items::luggage_2.play();
                }
            }

            if(bn::keypad::left_pressed()){
                if(selected != 0 && selected !=5){
                    --selected;
                    bn::sound_items::luggage_2.play();
                }
            }

            if(bn::keypad::right_pressed()){
                if(selected != 4 && selected !=9){
                    ++selected;
                    bn::sound_items::luggage_2.play();
                }
            }

            cursor.set_position(get_cursor_pos(selected));

            if(bn::keypad::b_pressed()){
                bn::sound_items::luggage_2.play();
                fade_out(bn::blending::fade_color_type::WHITE);
                return 0;
            }

            bn::core::update();
        }
    }
}