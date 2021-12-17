#include "lro_scene_academy.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"
#include "lro_scene.h"
#include "lro_state.h"
#include "lro_levels.h"

#include "bn_core.h"
#include "bn_string.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_academy.h"

namespace lro {
    namespace{
    [[nodiscard]] bn::string<4> move_count_adjust(int number)
    {
        if(number == 0){
            return bn::string<4>("NA");
        } else {
            return bn::to_string<4>(number);
        }
    }

    [[nodiscard]] bn::string<4> get_grade(int moves_behind)
    {
        if(moves_behind < 0){
            return "NA";
        } else if(moves_behind == 0){
            return "A+";
        } else if(moves_behind <= 2){
            return "A";
        } else if(moves_behind <= 4){
            return "A-";
        } else if(moves_behind <= 6){
            return "B+";
        } else if(moves_behind <= 8){
            return "B";
        } else if(moves_behind <= 10){
            return "B-";
        } else if(moves_behind <= 12){
            return "C+";
        } else if(moves_behind <= 14){
            return "C";
        } else if(moves_behind <= 16){
            return "C-";
        } else {
            return "D";
        }
    }
    }

    Academy::Academy(bn::sprite_text_generator& text_generator)
    : _text_generator(&text_generator){}

    int Academy::execute(int last_level){
        bn::regular_bg_ptr bg = bn::regular_bg_items::academy.create_bg(0, 0);
        lro::State state;

        int current_level = 1;
        if(last_level>50){
            current_level = last_level-50;
        }
        int max_level = 500;
        Levels levels;

        bn::vector<int, 500> best_min_moves = state.get_best_min_moves_list();

        bn::vector<bn::sprite_ptr, 20> nav_labels;
        _text_generator->set_left_alignment();
        _text_generator->generate(-112, 72, "β Back", nav_labels);
        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", nav_labels);

        bn::vector<bn::sprite_ptr, 32> labels;
        // bn::vector<bn::sprite_ptr, 8> min_move_count;
        // bn::vector<bn::sprite_ptr, 8> best_count;
        _text_generator->set_center_alignment();
        _text_generator->generate(-41, -20, "#" + bn::to_string<8>(current_level), labels);
        _text_generator->set_left_alignment();
        _text_generator->generate(34, 4, bn::to_string<8>(levels.get_min_move_count(current_level+50)), labels);
        _text_generator->generate(34, 20, move_count_adjust(best_min_moves.at(current_level-1)), labels);
        _text_generator->generate(34, 36, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)), labels);

        int held_for = 0;

        while(true){
            if(bn::keypad::right_pressed() || (bn::keypad::right_held() && held_for > 30)){
                current_level+=1;
                if(current_level > max_level){
                    current_level = max_level;
                }
                labels.clear();
                _text_generator->set_center_alignment();
                _text_generator->generate(-41, -20, "#" + bn::to_string<8>(current_level), labels);
                _text_generator->set_left_alignment();
                _text_generator->generate(34, 4, bn::to_string<8>(levels.get_min_move_count(current_level+50)), labels);
                _text_generator->generate(34, 20, move_count_adjust(best_min_moves.at(current_level-1)), labels);
                _text_generator->generate(34, 36, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)), labels);
            }
            if(bn::keypad::left_pressed() || (bn::keypad::left_held() && held_for > 30)){
                current_level-=1;
                if(current_level < 1){
                    current_level = 1;
                }
                labels.clear();
                _text_generator->set_center_alignment();
                _text_generator->generate(-41, -20, "#" + bn::to_string<8>(current_level), labels);
                _text_generator->set_left_alignment();
                _text_generator->generate(34, 4, bn::to_string<8>(levels.get_min_move_count(current_level+50)), labels);
                _text_generator->generate(34, 20, move_count_adjust(best_min_moves.at(current_level-1)), labels);
                _text_generator->generate(34, 36, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)), labels);
            }

            if(bn::keypad::right_held() || bn::keypad::left_held()){
                held_for += 1;
            } else {
                held_for = 0;
            }

            if(bn::keypad::a_pressed()){
                return current_level+50;
            }

            if(bn::keypad::b_pressed()){
                return 0;
            }

            bn::core::update();
        }
    }
}