#ifndef LRO_PLAYER_H
#define LRO_PLAYER_H

#include "lro_luggage.h"
#include "lro_state.h"

#include "bn_optional.h"
#include "bn_vector.h"
#include "bn_sprite_actions.h"

#include "bn_sprite_items_box_cursor.h"

namespace lro
{
    class Player
    {
        private :
            bn::optional<bn::vector<Luggage,16>*> _luggage_list;
            int _selected = 0;
            bn::sprite_ptr _cursor_sprite = bn::sprite_items::box_cursor.create_sprite(0, 0);
            bn::fixed_point _cursor_pos = bn::fixed_point(0,0);
            bool _has_finished = false; // level finished
            bool _done = false; // puzzle solved, but level outro animation playing
            State _state;

            bn::optional<bn::sprite_move_to_action> _slide_action;

        public : 
            Player(bn::vector<Luggage,16>& luggage_list);
            void update();
            bool has_finished(int level);
    };
}

#endif
