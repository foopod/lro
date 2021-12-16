#ifndef LRO_SCENE_ACADEMY_H
#define LRO_SCENE_ACADEMY_H

#include "lro_scene.h"
#include "bn_fixed_point.h"
#include "bn_sprite_text_generator.h"

namespace lro
{
    class Academy
    {       
        private:
            bn::sprite_text_generator* _text_generator;
        public:
            Academy(bn::sprite_text_generator& text_generator);
            int execute();
    };
}

#endif