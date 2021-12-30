#ifndef LRO_SCENE_MENU_H
#define LRO_SCENE_MENU_H

#include "lro_scene.h"

#include "bn_fixed_point.h"
#include "bn_sprite_text_generator.h"
#include "bn_blending_actions.h"
#include "bn_optional.h"

namespace lro
{
    class Menu
    {       
        private:
            bn::sprite_text_generator* _text_generator;
        public:
            Menu(bn::sprite_text_generator& text_generator);
            Scene execute();
            bn::optional<bn::blending_fade_alpha_to_action> _fade_action;
            void fade_out();
    };
}

#endif