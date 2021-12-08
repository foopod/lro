#include "lro_scene_game.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_log.h"

#include "bn_regular_bg_items_bg.h"

namespace lro
{

    namespace
    {
        [[nodiscard]] bn::vector<Luggage, 16> get_luggage(int level)
        {
            bn::vector<Luggage, 16> luggage_list = {};

            switch (level)
            {
            case 1:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 2:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 3:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 4:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 3));
                return luggage_list;
            case 5:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 6:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 7:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 8:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 9));
                return luggage_list;
            case 9:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 10:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 11:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 12:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 13:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 9));
                return luggage_list;
            case 14:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 10));
                return luggage_list;
            case 15:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            case 16:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 17:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 3));
                return luggage_list;
            case 18:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 19:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                return luggage_list;
            case 20:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 21:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 22:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 23:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 24:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 25:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            case 26:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 27:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 28:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 29:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 30:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 2));
                return luggage_list;
            case 31:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 32:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 33:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 34:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 35:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 36:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 3));
                return luggage_list;
            case 37:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 38:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 39:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            }

            return luggage_list;
        }
    }

    Game::Game() {}

    Scene Game::execute(int level)
    {

        bn::vector<Luggage, 16> luggage_list = get_luggage(level);

        bn::regular_bg_ptr bg = bn::regular_bg_items::bg.create_bg(0, 0);

        lro::Player player = lro::Player(luggage_list);

        while (true)
        {
            if (player.has_finished(level))
            {
                if (level < 11)
                {
                    return Scene::SelectTraining;
                }
                else if (level < 21)
                {
                    return Scene::SelectRecruit;
                }
                else if (level < 31)
                {
                    return Scene::SelectSenior;
                }
                else if (level < 41)
                {
                    return Scene::SelectExpert;
                }
                else
                {
                    return Scene::SelectOfficer;
                }
            }
            player.update();
            bn::core::update();
        }
    }
}