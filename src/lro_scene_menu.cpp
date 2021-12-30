#include "lro_scene_menu.h"
#include "lro_state.h"

#include "bn_core.h"
#include "bn_string.h"
#include "bn_vector.h"
#include "bn_sprite_ptr.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"
#include "bn_blending_actions.h"

#include "bn_regular_bg_items_menu.h"
#include "bn_sprite_items_cursor.h"
#include "bn_sprite_items_lock.h"

#include "bn_sound_items.h"

namespace lro
{
    namespace
    {
        [[nodiscard]] bn::fixed_point get_cursor_pos(int selected)
        {
            int sx = -68;
            int sy = -1;

            sy += selected * 12;

            return bn::fixed_point(sx, sy);
        }
    }

    Menu::Menu(bn::sprite_text_generator &text_generator)
        : _text_generator(&text_generator) {}

    void Menu::fade_out()
    {
        bn::blending::set_fade_alpha(0);
        bn::blending::set_fade_color(bn::blending::fade_color_type::WHITE);
        _fade_action = bn::blending_fade_alpha_to_action(15, 1);
        while(!_fade_action.value().done()){
            _fade_action.value().update();
            bn::core::update();
        }
        bn::blending::set_fade_alpha(1);
    }

    Scene Menu::execute()
    {
        bn::regular_bg_ptr bg = bn::regular_bg_items::menu.create_bg(0, 0);
        bg.set_blending_enabled(true);

        int selected = 0;
        int max_selected = 4;

        int alt_colour = false;

        State state;

        bn::vector<bn::sprite_ptr, 32> labels;
        bn::vector<bn::sprite_ptr, 32> alt_label;

        _text_generator->set_left_alignment();
        _text_generator->generate(-40, 0, "Story", labels);
        _text_generator->generate(-40, 12, "Arcade", labels);
        if (state.is_alt_colour())
        {
            alt_colour = true;
            _text_generator->generate(-40, 24, "Alt Art: ON", alt_label);
        }
        else
        {
            _text_generator->generate(-40, 24, "Alt Art: OFF", alt_label);
        }
        _text_generator->generate(-40, 36, "Help", labels);

        _text_generator->set_right_alignment();
        _text_generator->generate(112, 72, "α Select", labels);

        for(bn::sprite_ptr sprite: labels){
            sprite.set_blending_enabled(true);
        }
        for(bn::sprite_ptr sprite: alt_label){
            sprite.set_blending_enabled(true);
        }

        bn::sprite_ptr cursor = bn::sprite_items::cursor.create_sprite(100, -30);
        cursor.set_blending_enabled(true);
        cursor.set_position(get_cursor_pos(selected));
        bn::sprite_ptr lock_arcade = bn::sprite_items::lock.create_sprite(-48, 12, 1);
        lock_arcade.set_blending_enabled(true);

        if (state.get_last_completed_level() >= 10)
        {
            lock_arcade.set_visible(false);
        }

        //fade in
        bn::blending::set_fade_alpha(1);
        bn::blending::set_fade_color(bn::blending::fade_color_type::WHITE);
        _fade_action = bn::blending_fade_alpha_to_action(15, 0);

        while (true)
        {
            if(!_fade_action.value().done()){
                _fade_action.value().update();
            } else {
                bn::blending::set_fade_alpha(0);
            }

            if (bn::keypad::up_pressed())
            {
                --selected;
                if (selected < 0)
                {
                    selected = 0;
                }else {
                    bn::sound_items::luggage_2.play();
                }
            }

            if (bn::keypad::down_pressed())
            {
                ++selected;
                if (selected == max_selected)
                {
                    selected = max_selected - 1;
                } else {
                    bn::sound_items::luggage_2.play();
                }
            }

            if (bn::keypad::a_pressed())
            {
                
                switch (selected)
                {
                case 0:
                    bn::sound_items::luggage.play();
                    fade_out();
                    return Scene::LevelSelect;
                case 1:
                    if (state.get_last_completed_level() >= 10)
                    {
                        bn::sound_items::luggage.play();
                        fade_out();
                        return Scene::Academy;
                    }
                    break;
                case 2:
                    bn::sound_items::luggage.play();
                    _text_generator->set_left_alignment();
                    state.set_alt_colour(!alt_colour);
                    alt_colour = !alt_colour;
                    alt_label.clear();
                    if (alt_colour)
                    {
                        _text_generator->generate(-40, 24, "Alt Art: ON", alt_label);
                    }
                    else
                    {
                        _text_generator->generate(-40, 24, "Alt Art: OFF", alt_label);
                    }
                    for(bn::sprite_ptr sprite: alt_label){
                        sprite.set_blending_enabled(true);
                    }
                    break;
                case 3:
                    bn::sound_items::luggage.play();
                    fade_out();
                    return Scene::Tutorial;
                default:
                    break;
                }
            }

            cursor.set_position(get_cursor_pos(selected));

            bn::core::update();
        }
    }
}