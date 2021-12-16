#ifndef LRO_LEVELS_H
#define LRO_LEVELS_H

#include "bn_vector.h"

namespace lro
{
    class Levels
    {
    public:
        [[nodiscard]] bn::vector<Luggage, 16> get_luggage(int level)
        {
            bn::vector<Luggage, 16> luggage_list = {};

            switch (level)
            {
            case 1:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 2));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 2:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 3));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 4));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                // luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
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
            case 40:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            case 41:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 10));
                return luggage_list;
            case 42:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                return luggage_list;
            case 43:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            case 44:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            case 45:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 2));
                return luggage_list;
            case 46:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 11));
                return luggage_list;
            case 47:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 6));
                return luggage_list;
            case 48:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 49:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 50:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), false));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            // https://www.michaelfogleman.com/rush/
            // 41 - GoIKBBGHIKoMGHAALMCCJoLNooJDDNEEFFFN
            // 42 - BBHooKGoHJoKGAAJooCCIJDDooIEELFFFooL
            // 43 - GIBBoLGICCoLHAAKoMHoJKoMHoJDDDEEEFFo
            // 44 - BBCCCLGoHooLGoHAALDDEEKoooIJKoooIJFF
            // 45 - GIBBLMGICCLMHAAKoNHoJKoNHoJDDDEEFFFo
            // 46 - BBJLCCDDJLoMAAKooMIoKoEEIFFooNIGGHHN
            // 47 - GBBBooGCCCoKAAHIoKDDHIoKoooJEEoFFJoo
            // 48 - BBJCCoDDJoLoIAAoLoIEEELoIooKFFGGoKHH
            // 49 - BBICCoHoIoKoHAAoKLHDDDKLoooJEEFFoJGG
            // 50 - GBBoLoGHIoLMGHIAAMCCCKoMooJKDDEEJFFo
            case 51:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 52:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 53:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 54:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 55:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 56:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 57:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 58:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 59:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 60:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 61:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 62:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 63:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 64:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 65:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 66:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 67:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 68:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 69:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 70:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 71:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 72:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 73:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 74:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 75:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 76:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 77:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 78:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 79:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 80:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 81:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 12));
                return luggage_list;
            case 82:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 83:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 84:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 85:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 86:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 87:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 88:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 89:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 90:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 91:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 92:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 93:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 94:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 95:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 96:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 97:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 98:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 99:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 100:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 101:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 102:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 103:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 104:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 105:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 106:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 107:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 108:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 109:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 110:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 111:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 112:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 113:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 114:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 115:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 116:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 117:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 118:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 119:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 120:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 121:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 122:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 123:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 124:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 125:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 126:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 127:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 128:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 129:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 130:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 131:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 132:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 133:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 134:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 135:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 136:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 137:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 138:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 139:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 140:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 141:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 142:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 143:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 144:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 145:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 146:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 147:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 148:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 149:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 150:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 151:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 152:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 153:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 154:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 155:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 156:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 157:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 158:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 159:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 160:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 161:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 162:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 163:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 164:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 165:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 166:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 167:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 168:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 169:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 170:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 171:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 172:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 173:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 174:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 175:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 176:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 177:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 178:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 179:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 180:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 181:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 182:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 183:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 184:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 12));
                return luggage_list;
            case 185:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 186:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 187:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 188:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 189:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 190:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 191:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 192:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 193:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 194:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 195:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 196:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 197:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 198:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 199:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 200:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 201:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 202:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 203:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 204:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 205:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 206:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 207:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 208:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 209:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 210:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 211:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 212:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 213:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 214:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 215:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 216:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 217:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 218:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 219:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 220:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 221:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 222:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 223:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 224:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 225:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 226:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 227:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 228:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 229:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 230:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 231:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 5));
                return luggage_list;
            case 232:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 233:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 234:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 235:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 236:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 237:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 238:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 239:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 240:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 241:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 242:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 243:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 244:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 245:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 246:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 247:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 248:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 249:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 250:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 251:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 252:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 253:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 254:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 255:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 256:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 257:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 258:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 259:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 260:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 261:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 262:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 263:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                return luggage_list;
            case 264:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 265:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 266:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 267:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 268:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 269:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 270:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 271:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 272:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 273:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 274:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 275:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 276:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 277:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 278:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 279:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 280:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 281:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 282:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 283:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 284:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 285:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 286:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 287:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 288:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 289:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 290:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 291:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 292:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 293:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 294:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 295:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 296:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 297:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 298:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 299:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 300:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 301:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 302:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 303:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 304:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 305:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 306:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 307:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 308:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 309:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 310:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 311:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 312:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 313:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 314:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 315:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 316:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 317:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 318:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 319:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 12));
                return luggage_list;
            case 320:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 321:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 322:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 323:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 324:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 325:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 326:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 327:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 328:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 329:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 330:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 331:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 332:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 333:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 334:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 335:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 336:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 337:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 338:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 339:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 340:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 341:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 342:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 343:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 344:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 345:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 346:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 347:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 348:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 349:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 12));
                return luggage_list;
            case 350:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 351:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 352:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 353:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 354:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 355:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 356:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 357:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 358:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 359:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 360:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 361:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 362:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 363:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 364:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 365:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 12));
                return luggage_list;
            case 366:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 367:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 368:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 369:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 370:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 371:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 372:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 373:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 374:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 375:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 376:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 377:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 378:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 379:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 380:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 381:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 382:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 383:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 384:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 385:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 386:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 387:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 388:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 389:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 390:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 391:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 392:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 393:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 394:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 395:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 396:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 397:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 398:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 399:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 400:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 401:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 402:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 403:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 404:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 405:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 406:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 5));
                return luggage_list;
            case 407:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 408:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 409:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 410:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 411:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 412:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 413:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 414:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 415:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 5));
                return luggage_list;
            case 416:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 417:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 418:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 419:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 420:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 421:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 422:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 423:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 424:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 425:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 426:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 427:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 428:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 429:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 430:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 431:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 432:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 433:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 434:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 435:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 436:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 437:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 438:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 439:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 440:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 441:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 442:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 443:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 444:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 445:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 446:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 447:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 448:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 449:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 450:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 451:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 452:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 453:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 454:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 455:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 456:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 457:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 458:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 459:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 460:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 461:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 462:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 463:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 464:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 465:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 466:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                return luggage_list;
            case 467:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 468:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 3));
                return luggage_list;
            case 469:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 470:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 471:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 472:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 473:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 474:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 475:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 11));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 476:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 477:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 478:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 479:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 480:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 481:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 482:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 483:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 484:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 485:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 486:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 487:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 488:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 489:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 490:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 491:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 492:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 493:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 494:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 6));
                return luggage_list;
            case 495:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 496:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 497:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 498:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 499:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 500:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 501:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 502:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 503:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 504:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 505:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 506:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 507:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 508:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 509:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 510:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 511:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 512:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 513:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 514:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 515:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 5));
                return luggage_list;
            case 516:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 517:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 518:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 519:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 520:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 521:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 522:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 523:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 524:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 525:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 526:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 527:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 11));
                return luggage_list;
            case 528:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 529:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            case 530:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 531:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 532:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 533:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 534:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 535:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 536:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 537:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 538:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 539:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 540:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 3), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 10));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 0));
                return luggage_list;
            case 541:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 8));
                return luggage_list;
            case 542:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 5), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 543:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                return luggage_list;
            case 544:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 545:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 3), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 3, 2));
                return luggage_list;
            case 546:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 4), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 3), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 547:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 1), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 5), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 4), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 1), lro::Orientation::Vertical, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 3, 1));
                return luggage_list;
            case 548:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 1), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 4), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 0), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 5), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Horizontal, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 3), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Vertical, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 1), lro::Orientation::Vertical, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 4), lro::Orientation::Vertical, 2, 9));
                return luggage_list;
            case 549:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 3), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 3), lro::Orientation::Horizontal, 3, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Vertical, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 0), lro::Orientation::Horizontal, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 1), lro::Orientation::Horizontal, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 7));
                return luggage_list;
            case 550:
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 0), lro::Orientation::Vertical, 2, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(0, 2), true));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(1, 0), lro::Orientation::Horizontal, 3, 0));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 1), lro::Orientation::Horizontal, 2, 1));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(2, 2), lro::Orientation::Vertical, 2, 2));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 2), lro::Orientation::Vertical, 2, 3));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(3, 4), lro::Orientation::Vertical, 2, 4));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 0), lro::Orientation::Vertical, 2, 5));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 2), lro::Orientation::Vertical, 2, 6));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 4), lro::Orientation::Horizontal, 2, 7));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(4, 5), lro::Orientation::Horizontal, 2, 8));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 0), lro::Orientation::Vertical, 2, 9));
                luggage_list.push_back(lro::Luggage(bn::fixed_point(5, 2), lro::Orientation::Vertical, 2, 10));
                return luggage_list;
            }

            return luggage_list;
        }

        [[nodiscard]] int get_min_move_count(int level)
        {
            switch (level)
            {
            case 51:
                return 30;
            case 52:
                return 30;
            case 53:
                return 31;
            case 54:
                return 30;
            case 55:
                return 31;
            case 56:
                return 30;
            case 57:
                return 32;
            case 58:
                return 31;
            case 59:
                return 32;
            case 60:
                return 29;
            case 61:
                return 33;
            case 62:
                return 30;
            case 63:
                return 31;
            case 64:
                return 29;
            case 65:
                return 30;
            case 66:
                return 29;
            case 67:
                return 32;
            case 68:
                return 33;
            case 69:
                return 30;
            case 70:
                return 29;
            case 71:
                return 29;
            case 72:
                return 34;
            case 73:
                return 36;
            case 74:
                return 31;
            case 75:
                return 31;
            case 76:
                return 30;
            case 77:
                return 30;
            case 78:
                return 29;
            case 79:
                return 38;
            case 80:
                return 33;
            case 81:
                return 29;
            case 82:
                return 29;
            case 83:
                return 40;
            case 84:
                return 32;
            case 85:
                return 31;
            case 86:
                return 32;
            case 87:
                return 33;
            case 88:
                return 33;
            case 89:
                return 32;
            case 90:
                return 32;
            case 91:
                return 32;
            case 92:
                return 33;
            case 93:
                return 31;
            case 94:
                return 29;
            case 95:
                return 29;
            case 96:
                return 45;
            case 97:
                return 29;
            case 98:
                return 33;
            case 99:
                return 29;
            case 100:
                return 29;
            case 101:
                return 30;
            case 102:
                return 38;
            case 103:
                return 30;
            case 104:
                return 38;
            case 105:
                return 29;
            case 106:
                return 31;
            case 107:
                return 36;
            case 108:
                return 32;
            case 109:
                return 32;
            case 110:
                return 36;
            case 111:
                return 29;
            case 112:
                return 29;
            case 113:
                return 29;
            case 114:
                return 29;
            case 115:
                return 36;
            case 116:
                return 44;
            case 117:
                return 32;
            case 118:
                return 49;
            case 119:
                return 30;
            case 120:
                return 30;
            case 121:
                return 29;
            case 122:
                return 29;
            case 123:
                return 32;
            case 124:
                return 31;
            case 125:
                return 39;
            case 126:
                return 31;
            case 127:
                return 29;
            case 128:
                return 31;
            case 129:
                return 29;
            case 130:
                return 29;
            case 131:
                return 30;
            case 132:
                return 31;
            case 133:
                return 31;
            case 134:
                return 35;
            case 135:
                return 31;
            case 136:
                return 35;
            case 137:
                return 44;
            case 138:
                return 42;
            case 139:
                return 31;
            case 140:
                return 29;
            case 141:
                return 32;
            case 142:
                return 44;
            case 143:
                return 36;
            case 144:
                return 29;
            case 145:
                return 29;
            case 146:
                return 29;
            case 147:
                return 31;
            case 148:
                return 31;
            case 149:
                return 35;
            case 150:
                return 29;
            case 151:
                return 31;
            case 152:
                return 29;
            case 153:
                return 29;
            case 154:
                return 29;
            case 155:
                return 32;
            case 156:
                return 29;
            case 157:
                return 29;
            case 158:
                return 29;
            case 159:
                return 35;
            case 160:
                return 30;
            case 161:
                return 33;
            case 162:
                return 30;
            case 163:
                return 29;
            case 164:
                return 31;
            case 165:
                return 31;
            case 166:
                return 29;
            case 167:
                return 30;
            case 168:
                return 41;
            case 169:
                return 34;
            case 170:
                return 36;
            case 171:
                return 35;
            case 172:
                return 30;
            case 173:
                return 33;
            case 174:
                return 31;
            case 175:
                return 31;
            case 176:
                return 30;
            case 177:
                return 45;
            case 178:
                return 36;
            case 179:
                return 31;
            case 180:
                return 29;
            case 181:
                return 31;
            case 182:
                return 29;
            case 183:
                return 29;
            case 184:
                return 29;
            case 185:
                return 33;
            case 186:
                return 32;
            case 187:
                return 34;
            case 188:
                return 30;
            case 189:
                return 35;
            case 190:
                return 29;
            case 191:
                return 30;
            case 192:
                return 35;
            case 193:
                return 29;
            case 194:
                return 36;
            case 195:
                return 30;
            case 196:
                return 29;
            case 197:
                return 29;
            case 198:
                return 29;
            case 199:
                return 36;
            case 200:
                return 29;
            case 201:
                return 37;
            case 202:
                return 34;
            case 203:
                return 31;
            case 204:
                return 29;
            case 205:
                return 35;
            case 206:
                return 35;
            case 207:
                return 30;
            case 208:
                return 29;
            case 209:
                return 35;
            case 210:
                return 44;
            case 211:
                return 35;
            case 212:
                return 29;
            case 213:
                return 30;
            case 214:
                return 29;
            case 215:
                return 36;
            case 216:
                return 35;
            case 217:
                return 29;
            case 218:
                return 33;
            case 219:
                return 34;
            case 220:
                return 34;
            case 221:
                return 29;
            case 222:
                return 29;
            case 223:
                return 31;
            case 224:
                return 30;
            case 225:
                return 34;
            case 226:
                return 32;
            case 227:
                return 29;
            case 228:
                return 30;
            case 229:
                return 33;
            case 230:
                return 33;
            case 231:
                return 29;
            case 232:
                return 31;
            case 233:
                return 30;
            case 234:
                return 31;
            case 235:
                return 31;
            case 236:
                return 30;
            case 237:
                return 29;
            case 238:
                return 45;
            case 239:
                return 41;
            case 240:
                return 38;
            case 241:
                return 29;
            case 242:
                return 33;
            case 243:
                return 30;
            case 244:
                return 31;
            case 245:
                return 29;
            case 246:
                return 29;
            case 247:
                return 30;
            case 248:
                return 43;
            case 249:
                return 32;
            case 250:
                return 32;
            case 251:
                return 35;
            case 252:
                return 35;
            case 253:
                return 35;
            case 254:
                return 30;
            case 255:
                return 36;
            case 256:
                return 29;
            case 257:
                return 35;
            case 258:
                return 32;
            case 259:
                return 32;
            case 260:
                return 30;
            case 261:
                return 29;
            case 262:
                return 29;
            case 263:
                return 29;
            case 264:
                return 33;
            case 265:
                return 29;
            case 266:
                return 31;
            case 267:
                return 32;
            case 268:
                return 31;
            case 269:
                return 29;
            case 270:
                return 31;
            case 271:
                return 29;
            case 272:
                return 31;
            case 273:
                return 29;
            case 274:
                return 41;
            case 275:
                return 30;
            case 276:
                return 30;
            case 277:
                return 35;
            case 278:
                return 31;
            case 279:
                return 33;
            case 280:
                return 36;
            case 281:
                return 31;
            case 282:
                return 37;
            case 283:
                return 35;
            case 284:
                return 32;
            case 285:
                return 33;
            case 286:
                return 31;
            case 287:
                return 33;
            case 288:
                return 32;
            case 289:
                return 30;
            case 290:
                return 34;
            case 291:
                return 34;
            case 292:
                return 41;
            case 293:
                return 31;
            case 294:
                return 31;
            case 295:
                return 30;
            case 296:
                return 29;
            case 297:
                return 33;
            case 298:
                return 29;
            case 299:
                return 37;
            case 300:
                return 30;
            case 301:
                return 29;
            case 302:
                return 38;
            case 303:
                return 29;
            case 304:
                return 30;
            case 305:
                return 29;
            case 306:
                return 32;
            case 307:
                return 34;
            case 308:
                return 29;
            case 309:
                return 29;
            case 310:
                return 31;
            case 311:
                return 31;
            case 312:
                return 29;
            case 313:
                return 31;
            case 314:
                return 30;
            case 315:
                return 31;
            case 316:
                return 29;
            case 317:
                return 29;
            case 318:
                return 31;
            case 319:
                return 37;
            case 320:
                return 38;
            case 321:
                return 35;
            case 322:
                return 29;
            case 323:
                return 33;
            case 324:
                return 32;
            case 325:
                return 31;
            case 326:
                return 29;
            case 327:
                return 30;
            case 328:
                return 36;
            case 329:
                return 29;
            case 330:
                return 29;
            case 331:
                return 29;
            case 332:
                return 30;
            case 333:
                return 29;
            case 334:
                return 29;
            case 335:
                return 29;
            case 336:
                return 29;
            case 337:
                return 30;
            case 338:
                return 38;
            case 339:
                return 30;
            case 340:
                return 29;
            case 341:
                return 32;
            case 342:
                return 31;
            case 343:
                return 29;
            case 344:
                return 39;
            case 345:
                return 32;
            case 346:
                return 35;
            case 347:
                return 29;
            case 348:
                return 29;
            case 349:
                return 29;
            case 350:
                return 39;
            case 351:
                return 29;
            case 352:
                return 29;
            case 353:
                return 31;
            case 354:
                return 36;
            case 355:
                return 39;
            case 356:
                return 32;
            case 357:
                return 31;
            case 358:
                return 35;
            case 359:
                return 29;
            case 360:
                return 30;
            case 361:
                return 38;
            case 362:
                return 35;
            case 363:
                return 30;
            case 364:
                return 30;
            case 365:
                return 30;
            case 366:
                return 29;
            case 367:
                return 30;
            case 368:
                return 30;
            case 369:
                return 29;
            case 370:
                return 29;
            case 371:
                return 29;
            case 372:
                return 35;
            case 373:
                return 29;
            case 374:
                return 29;
            case 375:
                return 37;
            case 376:
                return 35;
            case 377:
                return 33;
            case 378:
                return 29;
            case 379:
                return 30;
            case 380:
                return 29;
            case 381:
                return 35;
            case 382:
                return 37;
            case 383:
                return 29;
            case 384:
                return 31;
            case 385:
                return 31;
            case 386:
                return 29;
            case 387:
                return 38;
            case 388:
                return 30;
            case 389:
                return 33;
            case 390:
                return 31;
            case 391:
                return 29;
            case 392:
                return 31;
            case 393:
                return 32;
            case 394:
                return 37;
            case 395:
                return 31;
            case 396:
                return 33;
            case 397:
                return 41;
            case 398:
                return 31;
            case 399:
                return 29;
            case 400:
                return 30;
            case 401:
                return 38;
            case 402:
                return 29;
            case 403:
                return 33;
            case 404:
                return 29;
            case 405:
                return 31;
            case 406:
                return 30;
            case 407:
                return 29;
            case 408:
                return 29;
            case 409:
                return 32;
            case 410:
                return 31;
            case 411:
                return 32;
            case 412:
                return 29;
            case 413:
                return 33;
            case 414:
                return 38;
            case 415:
                return 29;
            case 416:
                return 29;
            case 417:
                return 34;
            case 418:
                return 33;
            case 419:
                return 29;
            case 420:
                return 36;
            case 421:
                return 42;
            case 422:
                return 36;
            case 423:
                return 32;
            case 424:
                return 29;
            case 425:
                return 29;
            case 426:
                return 33;
            case 427:
                return 30;
            case 428:
                return 29;
            case 429:
                return 30;
            case 430:
                return 31;
            case 431:
                return 42;
            case 432:
                return 32;
            case 433:
                return 35;
            case 434:
                return 33;
            case 435:
                return 29;
            case 436:
                return 37;
            case 437:
                return 30;
            case 438:
                return 37;
            case 439:
                return 30;
            case 440:
                return 32;
            case 441:
                return 37;
            case 442:
                return 29;
            case 443:
                return 31;
            case 444:
                return 40;
            case 445:
                return 33;
            case 446:
                return 37;
            case 447:
                return 30;
            case 448:
                return 37;
            case 449:
                return 35;
            case 450:
                return 35;
            case 451:
                return 33;
            case 452:
                return 29;
            case 453:
                return 36;
            case 454:
                return 29;
            case 455:
                return 35;
            case 456:
                return 29;
            case 457:
                return 31;
            case 458:
                return 30;
            case 459:
                return 34;
            case 460:
                return 30;
            case 461:
                return 29;
            case 462:
                return 29;
            case 463:
                return 43;
            case 464:
                return 32;
            case 465:
                return 33;
            case 466:
                return 46;
            case 467:
                return 32;
            case 468:
                return 31;
            case 469:
                return 30;
            case 470:
                return 30;
            case 471:
                return 30;
            case 472:
                return 32;
            case 473:
                return 31;
            case 474:
                return 37;
            case 475:
                return 31;
            case 476:
                return 30;
            case 477:
                return 29;
            case 478:
                return 30;
            case 479:
                return 38;
            case 480:
                return 31;
            case 481:
                return 31;
            case 482:
                return 34;
            case 483:
                return 30;
            case 484:
                return 32;
            case 485:
                return 34;
            case 486:
                return 31;
            case 487:
                return 36;
            case 488:
                return 34;
            case 489:
                return 34;
            case 490:
                return 31;
            case 491:
                return 30;
            case 492:
                return 44;
            case 493:
                return 29;
            case 494:
                return 29;
            case 495:
                return 29;
            case 496:
                return 35;
            case 497:
                return 29;
            case 498:
                return 34;
            case 499:
                return 29;
            case 500:
                return 34;
            case 501:
                return 30;
            case 502:
                return 37;
            case 503:
                return 29;
            case 504:
                return 29;
            case 505:
                return 36;
            case 506:
                return 33;
            case 507:
                return 31;
            case 508:
                return 32;
            case 509:
                return 29;
            case 510:
                return 35;
            case 511:
                return 30;
            case 512:
                return 31;
            case 513:
                return 38;
            case 514:
                return 33;
            case 515:
                return 37;
            case 516:
                return 29;
            case 517:
                return 30;
            case 518:
                return 33;
            case 519:
                return 29;
            case 520:
                return 30;
            case 521:
                return 30;
            case 522:
                return 29;
            case 523:
                return 30;
            case 524:
                return 30;
            case 525:
                return 30;
            case 526:
                return 46;
            case 527:
                return 41;
            case 528:
                return 48;
            case 529:
                return 29;
            case 530:
                return 31;
            case 531:
                return 44;
            case 532:
                return 34;
            case 533:
                return 30;
            case 534:
                return 37;
            case 535:
                return 37;
            case 536:
                return 34;
            case 537:
                return 34;
            case 538:
                return 30;
            case 539:
                return 30;
            case 540:
                return 30;
            case 541:
                return 36;
            case 542:
                return 36;
            case 543:
                return 34;
            case 544:
                return 29;
            case 545:
                return 29;
            case 546:
                return 29;
            case 547:
                return 31;
            case 548:
                return 43;
            case 549:
                return 30;
            case 550:
                return 33;
            default:
                return 99;
            }
        }
    };
}

#endif
