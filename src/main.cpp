#include "bn_core.h"

#include "bn_keypad.h"
#include "bn_fixed_point.h"

#include "lro_scene.h"
#include "lro_scene_title.h"
#include "lro_scene_level1.h"
#include "lro_scene_level2.h"
#include "lro_scene_level3.h"
#include "lro_scene_level4.h"
#include "lro_scene_level5.h"
#include "lro_scene_level6.h"
#include "lro_scene_level7.h"
#include "lro_scene_level8.h"
#include "lro_scene_level9.h"
#include "lro_scene_level10.h"

int main()
{
    bn::core::init();
    lro::Scene scene = lro::Scene::Title;

    while(true)
    {
        if(scene == lro::Scene::Title){
            lro::Title title = lro::Title();
            scene = title.execute();
        } else if(scene == lro::Scene::LEVEL1){
            lro::Level1 level = lro::Level1();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL2){
            lro::Level2 level = lro::Level2();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL3){
            lro::Level3 level = lro::Level3();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL4){
            lro::Level4 level = lro::Level4();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL5){
            lro::Level5 level = lro::Level5();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL6){
            lro::Level6 level = lro::Level6();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL7){
            lro::Level7 level = lro::Level7();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL8){
            lro::Level8 level = lro::Level8();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL9){
            lro::Level9 level = lro::Level9();
            scene = level.execute();
        } else if(scene == lro::Scene::LEVEL10){
            lro::Level10 level = lro::Level10();
            scene = level.execute();
        }
        bn::core::update();
    }
}
