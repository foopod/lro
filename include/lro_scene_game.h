#ifndef LRO_SCENE_GAME_H
#define LRO_SCENE_GAME_H

#include "lro_scene.h"
#include "bn_fixed_point.h"

namespace lro
{
    class Game
    {       
        private:
            

        public:
            Game();
            lro::Scene execute(int level);
    };
}

#endif