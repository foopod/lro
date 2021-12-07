#include "lro_scene_level8.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_bg.h"

namespace lro {
    Level8::Level8(){}

    Scene Level8::execute(){

        bn::vector<Luggage, 16> luggage_list = {};

        luggage_list.push_back(lro::Luggage(bn::fixed_point(3,0), lro::Orientation::Horizontal, 2,0));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(5,0), lro::Orientation::Vertical, 3,0));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(2,1), lro::Orientation::Horizontal, 2,1));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(4,1), lro::Orientation::Vertical, 2,2));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(0,2), true));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(2,2), lro::Orientation::Vertical, 2,3));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(3,2), lro::Orientation::Vertical, 2,4));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(0,3), lro::Orientation::Horizontal, 2,5));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(4,3), lro::Orientation::Horizontal, 2,6));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(0,4), lro::Orientation::Horizontal, 2,7));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(2,4), lro::Orientation::Vertical, 2,8));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(3,4), lro::Orientation::Horizontal, 3,1));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(0,5), lro::Orientation::Horizontal, 2,9));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(3,5), lro::Orientation::Horizontal, 3,2));
        bn::regular_bg_ptr bg = bn::regular_bg_items::bg.create_bg(0, 0);

        lro::Player player = lro::Player(luggage_list);
        

        while(true){
            if(player.has_finished()){
                return Scene::LEVEL9;
            }
            player.update();
            bn::core::update();
        }
    }
}