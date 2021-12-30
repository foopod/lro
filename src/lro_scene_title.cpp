#include "lro_scene_title.h"
#include "lro_luggage.h"
#include "lro_player.h"
#include "lro_orientation.h"
#include "lro_scene.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_math.h"
#include "bn_vector.h"
#include "bn_log.h"
#include "bn_string.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_blending_actions.h"
#include "bn_keypad.h"

#include "bn_regular_bg_items_title2.h"
#include "bn_regular_bg_items_credits.h"

#include "bn_sprite_items_title_text.h"
#include "bn_sprite_items_luggage_trolley.h"
#include "bn_sprite_items_plane.h"

namespace lro {
    Title::Title(){}

    Scene Title::execute(){
        bn::regular_bg_ptr bg = bn::regular_bg_items::title2.create_bg(0, 0);
        bg.set_blending_enabled(true);

        State state;
        bool changed = false;

        int angle1 = 0;
        int angle2 = 40;
        int angle3 = 80;

        bn::vector<bn::sprite_ptr, 6> title;
        title.push_back(bn::sprite_items::title_text.create_sprite(-48-32, -44,0));
        title.push_back(bn::sprite_items::title_text.create_sprite(-48+32, -44,1));
        title.push_back(bn::sprite_items::title_text.create_sprite(7-32, -23,2));
        title.push_back(bn::sprite_items::title_text.create_sprite(7+32, -23,3));
        title.push_back(bn::sprite_items::title_text.create_sprite(50-32, -4,4));
        title.push_back(bn::sprite_items::title_text.create_sprite(50+32, -4,5));
        for(bn::sprite_ptr text : title){
            text.set_blending_enabled(true);
        }

        int trolley1_x = 0;
        bool left = true;

        bn::vector<bn::sprite_ptr, 3> trolley1;
        trolley1.push_back(bn::sprite_items::luggage_trolley.create_sprite(200+trolley1_x, 21,0));
        trolley1.push_back(bn::sprite_items::luggage_trolley.create_sprite(200+32+trolley1_x, 21,1));
        trolley1.push_back(bn::sprite_items::luggage_trolley.create_sprite(200+64+trolley1_x, 21,2));
        for(bn::sprite_ptr t : trolley1){
            t.set_blending_enabled(true);
        }
        
        int plane_x = -1000;

        bn::vector<bn::sprite_ptr, 2> plane;
        plane.push_back(bn::sprite_items::plane.create_sprite(-200 + plane_x, -40,0));
        plane.push_back(bn::sprite_items::plane.create_sprite(-200+64 + plane_x, -40,1));
        for(bn::sprite_ptr p : plane){
            p.set_blending_enabled(true);
            p.put_below();
        }
        
        

        bn::blending::set_fade_alpha(1);
        bn::blending::set_fade_color(bn::blending::fade_color_type::BLACK);
        _fade_action = bn::blending_fade_alpha_to_action(60, 0);

        // bn::fixed max_cpu_usage;
        // int counter = 1;

        while(true){

            // max_cpu_usage = bn::max(max_cpu_usage, bn::core::last_cpu_usage());
            // --counter;
            // if(! counter)
            // {
            //     BN_LOG("cpu:" + bn::to_string<32>((max_cpu_usage * 100).right_shift_integer()));
            //     max_cpu_usage = 0;
            //     counter = 60;
            // }

            if(!_fade_action.value().done()){
                _fade_action.value().update();
            } else if(changed){
                return Scene::Menu;
            }

            bn::fixed xmod = 4 * bn::degrees_lut_sin(angle1);
            bn::fixed ymod = 4 * bn::degrees_lut_cos(angle1);
            title.at(0).set_position(-48-32 , -44 + ymod);
            title.at(1).set_position(-48+32 , -44 + ymod);
            xmod = 4 * bn::degrees_lut_sin(angle2);
            ymod = 4 * bn::degrees_lut_cos(angle2);
            title.at(2).set_position(7-32 , -23 + ymod);
            title.at(3).set_position(7+32 , -23 + ymod);
            xmod = 4 * bn::degrees_lut_sin(angle3);
            ymod = 4 * bn::degrees_lut_cos(angle3);
            title.at(4).set_position(50-32 , -4 + ymod);
            title.at(5).set_position(50+32 , -4 + ymod);
            angle1 += 3;
            angle2 += 3;
            angle3 += 3;
            if(angle1 > 359){
                angle1 = 0;
            }
            if(angle2 > 359){
                angle2 = 0;
            }
            if(angle3 > 359){
                angle3 = 0;
            }

            plane.at(0).set_position(-200 + plane_x, -30-plane_x/10);
            plane.at(1).set_position(-200+64 + plane_x, -30-plane_x/10);
            plane_x+=2;
            if(plane_x > 2000){
                plane_x = 0;
            }

            if(left){
                trolley1.at(0).set_position(200+trolley1_x, 21);
                trolley1.at(1).set_position(200+32+trolley1_x, 21);
                trolley1.at(2).set_position(200+64+trolley1_x, 21);
                trolley1_x-=1.7;
            } else {
                trolley1.at(0).set_position(200+trolley1_x, 21);
                trolley1.at(1).set_position(200-32+trolley1_x, 21);
                trolley1.at(2).set_position(200-64+trolley1_x, 21);
                trolley1_x+=1;
            }
            
            if(trolley1_x < -400){
                left = false;
                trolley1.at(0) = bn::sprite_items::luggage_trolley.create_sprite(200+trolley1_x, 21,3);
                trolley1.at(1) = bn::sprite_items::luggage_trolley.create_sprite(200+32+trolley1_x, 21,4);
                trolley1.at(2) = bn::sprite_items::luggage_trolley.create_sprite(200+64+trolley1_x, 21,5);
                for(bn::sprite_ptr t : trolley1){
                    t.set_blending_enabled(true);
                    t.set_horizontal_flip(true);
                }
            } else if(trolley1_x > 100){
                left = true;
                trolley1.at(0) = bn::sprite_items::luggage_trolley.create_sprite(200+trolley1_x, 21,0);
                trolley1.at(1) = bn::sprite_items::luggage_trolley.create_sprite(200+32+trolley1_x, 21,1);
                trolley1.at(2) = bn::sprite_items::luggage_trolley.create_sprite(200+64+trolley1_x, 21,2);
                for(bn::sprite_ptr t : trolley1){
                    t.set_blending_enabled(true);
                    t.set_horizontal_flip(false);
                }
            }


            if(bn::keypad::start_pressed() || bn::keypad::a_pressed()){
                bn::blending::set_fade_color(bn::blending::fade_color_type::WHITE);
                _fade_action = bn::blending_fade_alpha_to_action(60, 1);
                changed = !changed;
            }
            bn::core::update();
        }
    }
}