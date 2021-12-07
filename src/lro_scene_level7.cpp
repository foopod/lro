#include "lro_scene_level7.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_bg.h"

namespace lro {
    Level7::Level7(){}

    Scene Level7::execute(){

        bn::vector<Luggage, 16> luggage_list = {};
        luggage_list.push_back(lro::Luggage(bn::fixed_point(1,0), lro::Orientation::Vertical, 2,0));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(2,0), lro::Orientation::Horizontal, 2,1));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(4,0), lro::Orientation::Vertical, 2,2));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(5,0), lro::Orientation::Vertical, 2,3));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(3,1), lro::Orientation::Vertical, 2,4));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(1,2), true));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(5,2), lro::Orientation::Vertical, 2,5));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(2,3), lro::Orientation::Horizontal, 2,6));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(3,4), lro::Orientation::Vertical, 2,7));
        bn::regular_bg_ptr bg = bn::regular_bg_items::bg.create_bg(0, 0);

        lro::Player player = lro::Player(luggage_list);
        

        while(true){
            if(player.has_finished()){
                return Scene::LEVEL8;
            }
            player.update();
            bn::core::update();
        }
    }
}