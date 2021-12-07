#ifndef LRO_PLAYER_H
#define LRO_PLAYER_H

#include "lro_luggage.h"

#include "bn_optional.h"
#include "bn_vector.h"

namespace lro
{
    class Player
    {
        private :
            bn::optional<bn::vector<Luggage,16>*> _luggage_list;
            int _selected = 0;
            bool _has_finished = false;

        public : 
            Player(bn::vector<Luggage,16>& luggage_list);
            void update();
            bool has_finished();
    };
}

#endif
