#include "lro_scene_tutorial.h"
#include "lro_scene.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_tutorial1.h"
#include "bn_regular_bg_items_tutorial2.h"
#include "bn_regular_bg_items_tutorial3.h"

namespace lro {
    Tutorial::Tutorial(){}

    Scene Tutorial::execute(){
        bn::regular_bg_ptr bg = bn::regular_bg_items::tutorial1.create_bg(0, 0);

        int slide = 0;

        bn::core::update();
        while(true){
            if(bn::keypad::a_pressed()){
                slide++;
                if(slide == 1){
                    bg = bn::regular_bg_items::tutorial2.create_bg(0, 0);
                } else if(slide == 2){
                    bg = bn::regular_bg_items::tutorial3.create_bg(0, 0);
                } else if(slide == 3){
                    return Scene::Menu;
                }
            }
            bn::core::update();
        }
    }
}