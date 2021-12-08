#ifndef LRO_SCENE_LEVEL_SELECT_H
#define LRO_SCENE_LEVEL_SELECT_H

#include "bn_sprite_text_generator.h"

#include "lro_scene.h"
#include "bn_fixed_point.h"

namespace lro
{
    class LevelSelect
    {       
        private:
            bn::sprite_text_generator* _text_generator;
        public:
            LevelSelect(bn::sprite_text_generator& text_generator);
            lro::Scene execute();
    };
}

#endif