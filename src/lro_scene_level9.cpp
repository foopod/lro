#include "lro_scene_level9.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_bg.h"

namespace lro {
    Level9::Level9(){}

    Scene Level9::execute(){

        bn::vector<Luggage, 16> luggage_list = {};
        luggage_list.push_back(lro::Luggage(bn::fixed_point(1,0), lro::Orientation::Vertical, 2,0));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(2,0), lro::Orientation::Horizontal, 2,1));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(4,0), lro::Orientation::Horizontal, 2,3));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(3,1), lro::Orientation::Vertical, 2,4));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(4,1), lro::Orientation::Horizontal, 2,5));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(0,2), true));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(4,2), lro::Orientation::Vertical, 3,0));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(5,2), lro::Orientation::Vertical, 2,6));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(0,3), lro::Orientation::Vertical, 3,1));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(1,3), lro::Orientation::Horizontal, 3,2));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(2,4), lro::Orientation::Vertical, 2,7));
        luggage_list.push_back(lro::Luggage(bn::fixed_point(5,4), lro::Orientation::Vertical, 2,8));

        bn::regular_bg_ptr bg = bn::regular_bg_items::bg.create_bg(0, 0);

        lro::Player player = lro::Player(luggage_list);
        

        while(true){
            if(player.has_finished()){
                return Scene::LEVEL10;
            }
            player.update();
            bn::core::update();
        }
    }
}