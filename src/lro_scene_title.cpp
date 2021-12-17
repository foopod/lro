#include "lro_scene_title.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"
#include "lro_scene.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_title.h"
#include "bn_regular_bg_items_credits.h"

namespace lro {
    Title::Title(){}

    Scene Title::execute(){
        bn::regular_bg_ptr bg = bn::regular_bg_items::title.create_bg(0, 0);
        State state;
        int display_time = 0;
        bool changed = false;

        while(true){
            if(display_time > 200 && !changed){
                bg = bn::regular_bg_items::credits.create_bg(0, 0);
                changed = !changed;
            }
            if(display_time > 500){
                if(state.get_last_completed_level() > 0){
                    return Scene::Menu;
                } else {
                    return Scene::Tutorial;
                }
            }
            bn::core::update();
            display_time++;
        }
    }
}