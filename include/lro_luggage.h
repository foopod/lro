#ifndef LRO_LUGGAGE_H
#define LRO_LUGGAGE_H

#include "bn_fixed_point.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_item.h"

#include "lro_orientation.h"

namespace lro {

    class Luggage {

        private :
            bn::fixed_point _pos;
            lro::Orientation _orientation;
            int _length;
            bool _is_target = false;

            bn::sprite_ptr _sprite;
            bn::sprite_item _sprite_item;
            
        public :
            Luggage(bn::fixed_point pos, lro::Orientation orientation, int length, int palette);
            Luggage(bn::fixed_point pos, bool isTarget);
            bn::fixed_point pos();
            lro::Orientation orientation();
            int length();
            bool is_target();

            void moveLeft();
            void moveRight();
            void moveUp();
            void moveDown();

            void hightlight(bool is_highlighted);
    };
}

#endif