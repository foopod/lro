#include "lro_scene_level_select.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprite_text_generator.h"

#include "bn_sprite_items_cursor.h"
#include "bn_regular_bg_items_blank_bg.h"

namespace lro {

    [[nodiscard]] bn::fixed_point get_cursor_pos(int selected)
    {
        int sx = -10;
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

        

        bn::vector<bn::sprite_ptr, 32> labels;

        _text_generator->set_left_alignment();
        _text_generator->generate(10, -16, "Trainee", labels);
        _text_generator->generate(10, 0, "Recruit", labels);
        _text_generator->generate(10, 16, "Senior", labels);
        _text_generator->generate(10, 32, "Expert", labels);
        _text_generator->generate(10, 48, "Officer", labels);

        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", labels);

        bn::sprite_ptr cursor = bn::sprite_items::cursor.create_sprite(80, -30);;

        while(true){

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
                    case 1 : return Scene::SelectRecruit;
                    case 2 : return Scene::SelectSenior;
                    case 3 : return Scene::SelectExpert;
                    case 4 : return Scene::SelectOfficer;
                }
            }

            cursor.set_position(get_cursor_pos(selected));
            
            bn::core::update();
        }
    }
}