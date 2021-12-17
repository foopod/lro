#ifndef LRO_SCENE_GAME_H
#define LRO_SCENE_GAME_H

#include "lro_scene.h"

#include "bn_fixed_point.h"
#include "bn_sprite_text_generator.h"

namespace lro
{
    class Game
    {       
        private:
            bn::sprite_text_generator* _text_generator;

        public:
            Game(bn::sprite_text_generator& text_generator);
            int execute(int level);
    };
}

#endif