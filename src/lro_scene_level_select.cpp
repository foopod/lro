#include "lro_scene_level_select.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprite_text_generator.h"
#include "bn_sprite_animate_actions.h"

#include "bn_sprite_items_cursor.h"
#include "bn_sprite_items_lock.h"
#include "bn_sprite_items_red3d.h"
#include "bn_sprite_items_black3d.h"
#include "bn_regular_bg_items_blank_bg.h"

namespace lro {

    [[nodiscard]] bn::fixed_point get_cursor_pos(int selected, int offset)
    {
        int sx = -14;
        int sy = -11 + offset;

        sy += selected * 12;

        return bn::fixed_point(sx, sy);
    }

    LevelSelect::LevelSelect(bn::sprite_text_generator& text_generator)
    : _text_generator(&text_generator){}
    
    Scene LevelSelect::execute(){
        bn::regular_bg_ptr bg = bn::regular_bg_items::blank_bg.create_bg(0, 0);

        int selected = 0;
        int max_levels = 5+1;

        State state;
        int offset = 0;

        bn::vector<bn::sprite_ptr, 32> labels;

        _text_generator->set_left_alignment();
        if(state.get_last_completed_level() >= 50){
            _text_generator->generate(10, -22, "Academy", labels);
            max_levels+=1;
            offset = -12;
        }
        _text_generator->generate(10, -10, "Trainee", labels);
        _text_generator->generate(10, 2, "Recruit", labels);
        _text_generator->generate(10, 14, "Senior", labels);
        _text_generator->generate(10, 26, "Expert", labels);
        _text_generator->generate(10, 38, "Officer", labels);
        _text_generator->generate(10, 50, "Help", labels);

        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", labels);

        bn::sprite_ptr cursor = bn::sprite_items::cursor.create_sprite(80, -30);

        bn::sprite_ptr trainee_lock = bn::sprite_items::lock.create_sprite(0, -10,0);
        bn::sprite_ptr recruit_lock = bn::sprite_items::lock.create_sprite(0, 2,1);
        bn::sprite_ptr senior_lock = bn::sprite_items::lock.create_sprite(0, 14,1);
        bn::sprite_ptr expert_lock = bn::sprite_items::lock.create_sprite(0, 26,1);
        bn::sprite_ptr officer_lock = bn::sprite_items::lock.create_sprite(0, 38,1);

        bn::sprite_ptr red_suitcase = bn::sprite_items::red3d.create_sprite(-66, 8,0);
        bn::sprite_animate_action<64> red_action = bn::create_sprite_animate_action_forever(red_suitcase, 4, bn::sprite_items::red3d.tiles_item(), 0, 1, 2, 3,4,5,6,7,8,9,10,
                    11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,
                    35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,
                    59,60,61,62,63);
        bn::sprite_ptr black_suitcase = bn::sprite_items::black3d.create_sprite(-66, 8,0);
        bn::sprite_animate_action<64> black_action = bn::create_sprite_animate_action_forever(black_suitcase, 4, bn::sprite_items::black3d.tiles_item(), 0, 1, 2, 3,4,5,6,7,8,9,10,
                    11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,
                    35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,
                    59,60,61,62,63);
        black_suitcase.set_visible(false);

        int max_level = state.get_last_completed_level();

        if( max_level < 10){

        } else if (max_level < 20){
            trainee_lock.set_item(bn::sprite_items::lock, 2);
            recruit_lock.set_item(bn::sprite_items::lock, 0);
        } else if (max_level < 30){
            trainee_lock.set_item(bn::sprite_items::lock, 2);
            recruit_lock.set_item(bn::sprite_items::lock, 2);
            senior_lock.set_item(bn::sprite_items::lock, 0);
        } else if (max_level < 40){
            trainee_lock.set_item(bn::sprite_items::lock, 2);
            recruit_lock.set_item(bn::sprite_items::lock, 2);
            senior_lock.set_item(bn::sprite_items::lock, 2);
            expert_lock.set_item(bn::sprite_items::lock, 0);
        } else if (max_level < 50){
            trainee_lock.set_item(bn::sprite_items::lock, 2);
            recruit_lock.set_item(bn::sprite_items::lock, 2);
            senior_lock.set_item(bn::sprite_items::lock, 2);
            expert_lock.set_item(bn::sprite_items::lock, 2);
            officer_lock.set_item(bn::sprite_items::lock, 0);
        } else {
            trainee_lock.set_item(bn::sprite_items::lock, 2);
            recruit_lock.set_item(bn::sprite_items::lock, 2);
            senior_lock.set_item(bn::sprite_items::lock, 2);
            expert_lock.set_item(bn::sprite_items::lock, 2);
            officer_lock.set_item(bn::sprite_items::lock, 2);
        }

        while(true){
            
            red_action.update();
            black_action.update();
            
            if(bn::keypad::up_pressed()){
                --selected;
                if(selected < 0){
                    selected = 0;
                }
                int temp = selected;
                if(state.get_last_completed_level() >= 50){
                    temp-= 1;
                }
                if(temp == 4){
                    black_suitcase.set_visible(true);
                    red_suitcase.set_visible(false);
                } else if(temp == 5){
                    black_suitcase.set_visible(false);
                    red_suitcase.set_visible(false);
                } else {
                    black_suitcase.set_visible(false);
                    red_suitcase.set_visible(true);
                }
            }

            if(bn::keypad::down_pressed()){
                ++selected;
                if(selected == max_levels){
                    selected = max_levels - 1;
                }
                int temp = selected;
                if(state.get_last_completed_level() >= 50){
                    temp-= 1;
                }
                if(temp == 4){
                    black_suitcase.set_visible(true);
                    red_suitcase.set_visible(false);
                } else if(temp == 5){
                    black_suitcase.set_visible(false);
                    red_suitcase.set_visible(false);
                } else {
                    black_suitcase.set_visible(false);
                    red_suitcase.set_visible(true);
                }
            }

            if(bn::keypad::a_pressed()){
                int temp = selected;
                if(state.get_last_completed_level() >= 50){
                    temp-= 1;
                }
                switch(temp){
                    case -1 : return Scene::Academy;
                    case 0 : return Scene::SelectTraining;
                    case 1 : 
                        if(max_level > 9){
                            return Scene::SelectRecruit;
                        }
                        break;
                    case 2 : 
                        if(max_level > 19){
                            return Scene::SelectSenior;
                        }
                        break;
                    case 3 : 
                        if(max_level > 29){
                            return Scene::SelectExpert;
                        }
                        break;
                    case 4 : 
                        if(max_level > 39){
                            return Scene::SelectOfficer;
                        }
                        break;
                    case 5 : return Scene::Tutorial;
                }
            }

            cursor.set_position(get_cursor_pos(selected, offset));
            
            bn::core::update();
        }
    }
}