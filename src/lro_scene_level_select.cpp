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
#include "bn_regular_bg_items_blank_bg.h"

namespace lro {

    [[nodiscard]] bn::fixed_point get_cursor_pos(int selected)
    {
        int sx = -14;
        int sy = -17;

        sy += selected * 16;

        return bn::fixed_point(sx, sy);
    }

    LevelSelect::LevelSelect(bn::sprite_text_generator& text_generator)
    : _text_generator(&text_generator){}
    
    Scene LevelSelect::execute(){
        bn::regular_bg_ptr bg = bn::regular_bg_items::blank_bg.create_bg(0, 0);

        int selected = 0;
        int max_levels = 5;

        State state;
        

        bn::vector<bn::sprite_ptr, 32> labels;

        _text_generator->set_left_alignment();
        _text_generator->generate(10, -16, "Trainee", labels);
        _text_generator->generate(10, 0, "Recruit", labels);
        _text_generator->generate(10, 16, "Senior", labels);
        _text_generator->generate(10, 32, "Expert", labels);
        _text_generator->generate(10, 48, "Officer", labels);

        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", labels);

        bn::sprite_ptr cursor = bn::sprite_items::cursor.create_sprite(80, -30);

        bn::sprite_ptr trainee_lock = bn::sprite_items::lock.create_sprite(0, -16,0);
        bn::sprite_ptr recruit_lock = bn::sprite_items::lock.create_sprite(0, 0,1);
        bn::sprite_ptr senior_lock = bn::sprite_items::lock.create_sprite(0, 16,1);
        bn::sprite_ptr expert_lock = bn::sprite_items::lock.create_sprite(0, 32,1);
        bn::sprite_ptr officer_lock = bn::sprite_items::lock.create_sprite(0, 48,1);

        bn::sprite_ptr red3d = bn::sprite_items::red3d.create_sprite(-66, 8,0);
        bn::sprite_animate_action<64> action = bn::create_sprite_animate_action_forever(red3d, 4, bn::sprite_items::red3d.tiles_item(), 0, 1, 2, 3,4,5,6,7,8,9,10,
                    11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,
                    35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,
                    59,60,61,62,63);

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
        } else if (max_level < 40){
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

            action.update();

            if(bn::keypad::up_pressed()){
                --selected;
                if(selected < 0){
                    selected = 0;
                }
            }

            if(bn::keypad::down_pressed()){
                ++selected;
                if(selected == max_levels){
                    selected = max_levels - 1;
                }
            }

            if(bn::keypad::a_pressed()){
                switch(selected){
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
                }
            }

            cursor.set_position(get_cursor_pos(selected));
            
            bn::core::update();
        }
    }
}