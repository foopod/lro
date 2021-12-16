#include "bn_core.h"

#include "bn_keypad.h"
#include "bn_fixed_point.h"
#include "bn_sprite_text_generator.h"

#include "lro_font.h"

#include "lro_scene.h"
#include "lro_state.h"
#include "lro_rank.h"
#include "lro_scene_title.h"
#include "lro_scene_tutorial.h"
#include "lro_scene_level_select.h"
#include "lro_scene_selector.h"
#include "lro_scene_game.h"
#include "lro_scene_academy.h"

int main()
{
    bn::core::init();
    lro::Scene scene = lro::Scene::Academy;
    lro::State state;
    
    // unlock all levels
    state.completeLevel(50);

    bn::sprite_text_generator text_generator(lro::fixed_8x8_sprite_font);

    int current_level = -1;

    while (true)
    {
        if (scene == lro::Scene::Title)
        {
            lro::Title title = lro::Title();
            scene = title.execute();
        }
        else if (scene == lro::Scene::Tutorial)
        {
            lro::Tutorial level = lro::Tutorial();
            scene = level.execute();
        }
        else if (scene == lro::Scene::LevelSelect)
        {
            lro::LevelSelect level = lro::LevelSelect(text_generator);
            scene = level.execute();
            current_level = -1;
        }
        else if (scene == lro::Scene::SelectTraining)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Trainee);
            scene = lro::Scene::LEVEL;
        }
        else if (scene == lro::Scene::SelectRecruit)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Recruit);
            scene = lro::Scene::LEVEL;
        }
        else if (scene == lro::Scene::SelectSenior)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Senior);
            scene = lro::Scene::LEVEL;
        }
        else if (scene == lro::Scene::SelectExpert)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Expert);
            scene = lro::Scene::LEVEL;
        }
        else if (scene == lro::Scene::SelectOfficer)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Officer);
            scene = lro::Scene::LEVEL;
        }
        else if (scene == lro::Scene::LEVEL)
        {
            lro::Game level = lro::Game(text_generator);
            scene = level.execute(current_level);
        }
        else if (scene == lro::Scene::Academy)
        {
            lro::Academy academy = lro::Academy(text_generator);
            current_level = academy.execute();
            scene = lro::Scene::LEVEL;
        }

        if(current_level == 0){
            scene = lro::Scene::LevelSelect;
        }
        bn::core::update();
    }
}
