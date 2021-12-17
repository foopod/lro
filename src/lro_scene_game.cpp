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
#include "bn_regular_bg_items_dialog.h"
#include "bn_sprite_items_done.h"

namespace lro
{
    Game::Game(bn::sprite_text_generator& text_generator)
    : _text_generator(&text_generator){}

    int Game::execute(int level)
    {
        State state;
        bn::regular_bg_ptr bg = bn::regular_bg_items::dialog.create_bg(0, 0);

        bn::vector<DialogLine, 32> dialog_lines = lro::DialogLines().get_dialog_lines(level);
        bn::optional<Dialog> dialog = lro::Dialog(dialog_lines, *_text_generator);
        dialog.value().set_visible(true);

        while (!dialog.value().done() && state.get_last_completed_level() < level && level <=50){ // remove dialog for completed levels
            dialog.value().update();
            bn::core::update();
        }
        dialog.reset();

        lro::Player player = lro::Player(level);

        if(level <=50){
            bg = bn::regular_bg_items::bg.create_bg(0, 0);
        } else {
            bg = bn::regular_bg_items::bg_academy.create_bg(0, 0);
        }
        bn::sprite_ptr done = bn::sprite_items::done.create_sprite(72, 30);

        bool animation_ended = false;
        done.set_visible(false);
        int count_after_finish = 0;
        int best_moves = 99;
        if(level > 50){
            best_moves = state.get_best_min_moves_list().at(level - 50);
        }

        lro::Levels levels;

        bn::vector<bn::sprite_ptr, 8> moves_counter;
        if(level > 50){
            _text_generator->set_center_alignment();
            _text_generator->generate(60, 64,
                        bn::to_string<8>(player.moves()), 
                        moves_counter);
            _text_generator->generate(80, 64,
                        bn::to_string<8>(levels.get_min_move_count(level)), 
                        moves_counter);
        }

        bn::core::update();

        while (true)
        {
            if (!done.visible() && player.has_finished(level))
            {
                done.set_visible(true);
            }

            if(done.visible()){
                if(count_after_finish > 120){
                    animation_ended = true;
                }
                ++count_after_finish;
            }

            if(animation_ended){
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

            if(bn::keypad::select_held() && bn::keypad::l_held()){
                return level;
            }
            bn::core::update();
        }
    }
}