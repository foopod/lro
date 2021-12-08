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

    Scene Selector::execute(Rank rank){
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
        

        bn::sprite_ptr cursor = bn::sprite_items::cursor.create_sprite(80, -30,1);

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

        _text_generator->set_center_alignment();

        // get state from sram
        int done_levels = state.get_last_completed_level();

        // draw boxes and labels
        for (int i = startingLevel; i < (startingLevel + 5); i++){
            if(done_levels + 1 >= i){
                boxes.push_back(bn::sprite_items::box.create_sprite((i-1)%10 * 32 - 64, 0+1, 1));
            } else {
                boxes.push_back(bn::sprite_items::box.create_sprite((i-1)%10 * 32 - 64, 0+1, 0));
            }
            _text_generator->generate((i-1)%10 * 32 - 64, 0, bn::to_string<4>(i), labels);
        }
        for (int i = (startingLevel + 5); i < (startingLevel+10); i++){
            if(done_levels + 1 >= i){
                boxes.push_back(bn::sprite_items::box.create_sprite(((i-1)%10-5) * 32 - 64, 30+1, 1));
            } else {
                boxes.push_back(bn::sprite_items::box.create_sprite(((i-1)%10-5) * 32 - 64, 30+1, 0));
            }
            _text_generator->generate(((i-1)%10-5) * 32 - 64, 30, bn::to_string<4>(i), labels);
        }

        _text_generator->set_left_alignment();
        _text_generator->generate(-112, 72, "β Back", labels);
        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", labels);

        while(true){
            if(bn::keypad::a_pressed()){
                if(selected+startingLevel-1 < state.get_last_completed_level() + 1 || true){ //todo remove true block levels
                    switch(selected+startingLevel-1){
                        case 0 : return Scene::LEVEL1;
                        case 1 : return Scene::LEVEL2;
                        case 2 : return Scene::LEVEL3;
                        case 3 : return Scene::LEVEL4;
                        case 4 : return Scene::LEVEL5;
                        case 5 : return Scene::LEVEL6;
                        case 6 : return Scene::LEVEL7;
                        case 7 : return Scene::LEVEL8;
                        case 8 : return Scene::LEVEL9;
                        case 9 : return Scene::LEVEL10;
                        case 10 : return Scene::LEVEL11;
                        case 11 : return Scene::LEVEL12;
                        case 12 : return Scene::LEVEL13;
                        case 13 : return Scene::LEVEL14;
                        case 14 : return Scene::LEVEL15;
                        case 15 : return Scene::LEVEL16;
                        case 16 : return Scene::LEVEL17;
                        case 17 : return Scene::LEVEL18;
                        case 18 : return Scene::LEVEL19;
                        case 19 : return Scene::LEVEL20;
                        case 20 : return Scene::LEVEL21;
                        case 21 : return Scene::LEVEL22;
                        case 22 : return Scene::LEVEL23;
                        case 23 : return Scene::LEVEL24;
                        case 24 : return Scene::LEVEL25;
                        case 25 : return Scene::LEVEL26;
                        case 26 : return Scene::LEVEL27;
                        case 27 : return Scene::LEVEL28;
                        case 28 : return Scene::LEVEL29;
                        case 29 : return Scene::LEVEL30;
                        case 30 : return Scene::LEVEL31;
                        case 31 : return Scene::LEVEL32;
                        case 32 : return Scene::LEVEL33;
                        case 33 : return Scene::LEVEL34;
                        case 34 : return Scene::LEVEL35;
                        case 35 : return Scene::LEVEL36;
                        case 36 : return Scene::LEVEL37;
                        case 37 : return Scene::LEVEL38;
                        case 38 : return Scene::LEVEL39;
                        case 39 : return Scene::LEVEL40;
                        case 40 : return Scene::LEVEL41;
                        case 41 : return Scene::LEVEL42;
                        case 42 : return Scene::LEVEL43;
                        case 43 : return Scene::LEVEL44;
                        case 44 : return Scene::LEVEL45;
                        case 45 : return Scene::LEVEL46;
                        case 46 : return Scene::LEVEL47;
                        case 47 : return Scene::LEVEL48;
                        case 48 : return Scene::LEVEL49;
                        case 49 : return Scene::LEVEL50;
                        default : return Scene::LEVEL1;
                    }
                }
            }

            if(bn::keypad::up_pressed()){
                if(selected > 4){
                    selected -=5;
                }
            }

            if(bn::keypad::down_pressed()){
                if(selected <=4){
                    selected +=5;
                }
            }

            if(bn::keypad::left_pressed()){
                if(selected != 0 && selected !=5){
                    --selected;
                }
            }

            if(bn::keypad::right_pressed()){
                if(selected != 4 && selected !=9){
                    ++selected;
                }
            }

            cursor.set_position(get_cursor_pos(selected));

            if(bn::keypad::b_pressed()){
                return Scene::LevelSelect;
            }

            bn::core::update();
        }
    }
}