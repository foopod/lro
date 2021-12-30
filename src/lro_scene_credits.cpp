#include "lro_scene_credits.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"
#include "lro_scene.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_blending_actions.h"

#include "bn_regular_bg_items_credits.h"
#include "bn_regular_bg_items_credits2.h"
#include "bn_regular_bg_items_credits3.h"
#include "bn_regular_bg_items_credits_blank.h"

namespace lro {
    Credits::Credits(){}

    Scene Credits::execute(){

        State state;
        int display_time = 0;
        bool changed = false;

        int blend_cycle = 0;
        
        bn::blending::set_fade_alpha(1);
        bn::regular_bg_ptr bg = bn::regular_bg_items::credits.create_bg(0, 0);
        bg.set_blending_enabled(true);
        _fade_action = bn::blending_fade_alpha_to_action(60, 0);

        while(true){
            if(!_fade_action.value().done()){
                _fade_action.value().update();
            } else {
                switch (blend_cycle)
                {
                case 0: //fade out credits 1
                    if(display_time > 200 && !changed){
                        changed = !changed;
                        bn::blending::set_fade_color(bn::blending::fade_color_type::WHITE);
                        _fade_action = bn::blending_fade_alpha_to_action(60, 1);
                        blend_cycle++;
                    }
                    break;
                case 1 : // fade in credits 2
                    bg = bn::regular_bg_items::credits2.create_bg(0, 0);
                    bg.set_blending_enabled(true);
                    _fade_action = bn::blending_fade_alpha_to_action(60, 0);
                    blend_cycle++;
                    break;
                case 2: // fade out credits
                    if(display_time > 400){
                        _fade_action = bn::blending_fade_alpha_to_action(60, 1);
                        blend_cycle++;
                    }
                    break;
                case 3 : // fade in credits 3
                    bg = bn::regular_bg_items::credits3.create_bg(0, 0);
                    bg.set_blending_enabled(true);
                    _fade_action = bn::blending_fade_alpha_to_action(60, 0);
                    blend_cycle++;
                    break;
                case 4: // fade out credits
                    if(display_time > 700){
                        _fade_action = bn::blending_fade_alpha_to_action(60, 1);
                        blend_cycle++;
                    }
                    break;
                case 5: // new scene
                    bn::blending::set_fade_alpha(0);
                    return Scene::Title;
                    break;
                default:
                    break;
                }
                
            }
            bn::core::update();
            display_time++;
        }
    }
}