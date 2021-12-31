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
#include "bn_log.h"
#include "bn_sprite_ptr.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"

#include "bn_sound_items.h"
#include "bn_sprite_items_grade.h"
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

    [[nodiscard]] int get_grade(int moves_behind)
    {
        if(moves_behind < 0){
            return 0;
        } else if(moves_behind == 0){
            return 1;
        } else if(moves_behind <= 2){
            return 2;
        } else if(moves_behind <= 4){
            return 3;
        } else if(moves_behind <= 6){
            return 4;
        } else if(moves_behind <= 8){
            return 5;
        } else if(moves_behind <= 10){
            return 6;
        } else if(moves_behind <= 12){
            return 7;
        } else if(moves_behind <= 14){
            return 8;
        } else if(moves_behind <= 16){
            return 9;
        } else {
            return 10;
        }
    }
    }

    Academy::Academy(bn::sprite_text_generator& text_generator, State& state)
    : _text_generator(&text_generator), _state(&state){}

    void Academy::fade_out(bn::blending::fade_color_type color)
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

    int Academy::execute(int last_level){
        bn::regular_bg_ptr bg = bn::regular_bg_items::academy.create_bg(0, 0);
        bg.set_blending_enabled(true);

        int current_level = 1;
        if(last_level>50){
            current_level = last_level-50;
        }
        int max_level = 500;
        Levels levels;

        bn::vector<int, 500> best_min_moves = _state->get_best_min_moves_list();

        bn::vector<bn::sprite_ptr, 20> nav_labels;
        _text_generator->set_left_alignment();
        _text_generator->generate(-112, 72, "β Back", nav_labels);
        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", nav_labels);

        for(bn::sprite_ptr sprite: nav_labels){
            sprite.set_blending_enabled(true);
        }

        bn::vector<bn::sprite_ptr, 32> labels;
        _text_generator->set_center_alignment();
        _text_generator->generate(-41, -18, "#" + bn::to_string<8>(current_level), labels);
        _text_generator->set_left_alignment();
        _text_generator->generate(34, 4+16, bn::to_string<8>(levels.get_min_move_count(current_level+50)), labels);
        _text_generator->generate(34, 20+16, move_count_adjust(best_min_moves.at(current_level-1)), labels);
        // _text_generator->generate(34, 36, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)), labels);
        bn::sprite_ptr grade = bn::sprite_items::grade.create_sprite(48, -8, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)));
        grade.set_blending_enabled(true);

        for(bn::sprite_ptr sprite: labels){
            sprite.set_blending_enabled(true);
        }

        int held_for = 0;

        //fade in
        bn::blending::set_fade_alpha(1);
        bn::blending::set_fade_color(bn::blending::fade_color_type::WHITE);
        _fade_action = bn::blending_fade_alpha_to_action(30, 0);
        while(!_fade_action.value().done()){
            _fade_action.value().update();
            bn::core::update();
        }
        bn::blending::set_fade_alpha(0);

        int sound_timeout = 0;

        while(true){
            ++sound_timeout;
            if(bn::keypad::right_pressed() || (bn::keypad::right_held() && held_for > 30)){
                current_level+=1;
                if(current_level > max_level){
                    current_level = max_level;
                } else {
                    if(sound_timeout > 6){
                        bn::sound_items::luggage_2.play();
                        sound_timeout = 0;
                    }
                }
                labels.clear();
                _text_generator->set_center_alignment();
                _text_generator->generate(-41, -18, "#" + bn::to_string<8>(current_level), labels);
                _text_generator->set_left_alignment();
                _text_generator->generate(34, 4+16, bn::to_string<8>(levels.get_min_move_count(current_level+50)), labels);
                _text_generator->generate(34, 20+16, move_count_adjust(best_min_moves.at(current_level-1)), labels);
                // _text_generator->generate(34, 36, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)), labels);
                grade = bn::sprite_items::grade.create_sprite(48, -8, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)));
                grade.set_blending_enabled(true);
                for(bn::sprite_ptr sprite: labels){
                    sprite.set_blending_enabled(true);
                }
            }
            if(bn::keypad::left_pressed() || (bn::keypad::left_held() && held_for > 30)){
                current_level-=1;
                if(current_level < 1){
                    current_level = 1;
                } else {
                    if(sound_timeout > 6){
                        bn::sound_items::luggage_2.play();
                        sound_timeout = 0;
                    }
                }
                labels.clear();
                _text_generator->set_center_alignment();
                _text_generator->generate(-41, -18, "#" + bn::to_string<8>(current_level), labels);
                _text_generator->set_left_alignment();
                _text_generator->generate(34, 4+16, bn::to_string<8>(levels.get_min_move_count(current_level+50)), labels);
                _text_generator->generate(34, 20+16, move_count_adjust(best_min_moves.at(current_level-1)), labels);
                // _text_generator->generate(34, 36, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)), labels);
                grade = bn::sprite_items::grade.create_sprite(48, -8, get_grade(best_min_moves.at(current_level-1) - levels.get_min_move_count(current_level+50)));
                grade.set_blending_enabled(true);
                for(bn::sprite_ptr sprite: labels){
                    sprite.set_blending_enabled(true);
                }
            }

            if(bn::keypad::right_held() || bn::keypad::left_held()){
                held_for += 1;
            } else {
                held_for = 0;
            }

            if(bn::keypad::a_pressed()){
                bn::sound_items::luggage_2.play();
                fade_out(bn::blending::fade_color_type::BLACK);
                return current_level+50;
            }

            if(bn::keypad::b_pressed()){
                bn::sound_items::luggage_2.play();
                fade_out(bn::blending::fade_color_type::WHITE);
                return 0;
            }

            bn::core::update();
        }
    }
}