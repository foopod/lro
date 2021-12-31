#include "lro_scene_game.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"
#include "lro_levels.h"
#include "lro_dialog.h"
#include "lro_dialog_lines.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_log.h"
#include "bn_string.h"
#include "bn_optional.h"

#include "bn_regular_bg_items_bg.h"
#include "bn_regular_bg_items_bg_academy.h"
#include "bn_regular_bg_items_pause_bg.h"
#include "bn_regular_bg_items_dialog.h"
#include "bn_sprite_items_done.h"

#include "bn_sound_items.h"

namespace lro
{
    Game::Game(bn::sprite_text_generator& text_generator, State& state)
    : _text_generator(&text_generator), _state(&state){}

    void Game::fade_out()
    {
        bn::blending::set_fade_alpha(0);
        bn::blending::set_fade_color(bn::blending::fade_color_type:: WHITE);
        _fade_action = bn::blending_fade_alpha_to_action(15, 1);
        while(!_fade_action.value().done()){
            _fade_action.value().update();
            bn::core::update();
        }
        bn::blending::set_fade_alpha(1);
    }

    bool Game::pause_to_exit(){
        bn::regular_bg_ptr pause_bg = bn::regular_bg_items::pause_bg.create_bg(0, 0);
        pause_bg.put_above();
        pause_bg.set_priority(0);
        pause_bg.set_blending_enabled(true);
        int held_count = 0;
        while(true){
            if(bn::keypad::a_pressed()){
                return false;
            }
            if(bn::keypad::b_held()){
                held_count+=1;
                if(held_count > 30){
                    fade_out();
                    return true;
                }
            } else {
                held_count = 0;
            }
            bn::core::update();
        }

    }

    int Game::execute(int level)
    {
        bn::regular_bg_ptr bg = bn::regular_bg_items::dialog.create_bg(0, 0);

        bn::vector<DialogLine, 32> dialog_lines = lro::DialogLines().get_dialog_lines(level);
        bn::optional<Dialog> dialog = lro::Dialog(dialog_lines, *_text_generator);
        dialog.value().set_visible(true);

        while (!dialog.value().done() && _state->get_last_completed_level() < level && level <=50){ // remove dialog for completed levels
            dialog.value().update();
            bn::core::update();
        }
        dialog.reset();

        lro::Player player = lro::Player(level, *_state);

        if(level <=50){
            bg = bn::regular_bg_items::bg.create_bg(0, 0);
        } else {
            bg = bn::regular_bg_items::bg_academy.create_bg(0, 0);
        }
        bg.set_blending_enabled(true);
        bn::sprite_ptr done = bn::sprite_items::done.create_sprite(72, 30);
        done.set_blending_enabled(true);

        bool animation_ended = false;
        done.set_visible(false);
        int count_after_finish = 0;
        int best_moves = 99;
        if(level > 50){
            best_moves = _state->get_best_min_moves_list().at(level - 51);
        }

        lro::Levels levels;

        bn::vector<bn::sprite_ptr, 8> moves_counter;
        if(level > 50){
            _text_generator->set_center_alignment();
            _text_generator->generate(58, 63,
                        bn::to_string<8>(player.moves()), 
                        moves_counter);
            _text_generator->generate(88, 63,
                        bn::to_string<8>(levels.get_min_move_count(level)), 
                        moves_counter);

            for(bn::sprite_ptr sprite: moves_counter){
                sprite.set_blending_enabled(true);
            }
        }

        //fade in
        bn::blending::set_fade_alpha(1);
        bn::blending::set_fade_color(bn::blending::fade_color_type::BLACK);
        _fade_action = bn::blending_fade_alpha_to_action(30, 0);
        while(!_fade_action.value().done()){
            _fade_action.value().update();
            bn::core::update();
        }
        bn::blending::set_fade_alpha(0);

        // bn::fixed max_cpu_usage;
        // int counter = 1;

        while (true)
        {
            // max_cpu_usage = bn::max(max_cpu_usage, bn::core::last_cpu_usage());
            // --counter;
            // if(! counter)
            // {
            //     BN_LOG("cpu:" + bn::to_string<32>((max_cpu_usage * 100).right_shift_integer()));
            //     max_cpu_usage = 0;
            //     counter = 60;
            // }

            if (!done.visible() && player.has_finished(level))
            {
                done.set_visible(true);
                bn::sound_items::success.play();
            }

            if(done.visible()){
                if(count_after_finish > 140){
                    animation_ended = true;
                }
                ++count_after_finish;
            }

            if(animation_ended){
                fade_out();
                return level;
            }
            player.update();
            if(level > 50){
                moves_counter.clear();
                _text_generator->generate(58, 63,
                        bn::to_string<8>(player.moves()), 
                        moves_counter);
                _text_generator->generate(88, 63,
                        bn::to_string<8>(levels.get_min_move_count(level)), 
                        moves_counter);
            }

            if(bn::keypad::start_pressed()){
                if(pause_to_exit()){
                    return level;
                }
            }
            bn::core::update();
        }
    }
}