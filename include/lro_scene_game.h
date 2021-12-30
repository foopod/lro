#ifndef LRO_SCENE_GAME_H
#define LRO_SCENE_GAME_H

#include "lro_scene.h"

#include "bn_fixed_point.h"
#include "bn_sprite_text_generator.h"
#include "bn_blending_actions.h"
#include "bn_optional.h"

namespace lro
{
    class Game
    {       
        private:
            bn::sprite_text_generator* _text_generator;

        public:
            Game(bn::sprite_text_generator& text_generator);
            int execute(int level);
            bn::optional<bn::blending_fade_alpha_to_action> _fade_action;
            void fade_out();
            bool pause_to_exit();
    };
}

#endif