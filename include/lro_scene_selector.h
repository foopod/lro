#ifndef LRO_SCENE_SELECTOR_H
#define LRO_SCENE_SELECTOR_H

#include "bn_sprite_text_generator.h"

#include "lro_scene.h"
#include "lro_rank.h"
#include "bn_fixed_point.h"
#include "bn_blending_actions.h"
#include "bn_optional.h"

namespace lro
{
    class Selector
    {       
        private:
            bn::sprite_text_generator* _text_generator;
        public:
            Selector(bn::sprite_text_generator& text_generator);
            int execute(lro::Rank rank);
            bn::optional<bn::blending_fade_alpha_to_action> _fade_action;
            void fade_out(bn::blending::fade_color_type color);
    };
}

#endif