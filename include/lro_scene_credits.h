#ifndef LRO_SCENE_CREDITS_H
#define LRO_SCENE_CREDITS_H

#include "lro_scene.h"
#include "bn_fixed_point.h"
#include "bn_blending_actions.h"
#include "bn_optional.h"

namespace lro
{
    class Credits
    {       
        private:
        public:
            Credits();
            lro::Scene execute();
            bn::optional<bn::blending_fade_alpha_to_action> _fade_action;
    };
}

#endif