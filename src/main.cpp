#include "bn_core.h"

#include "bn_keypad.h"
#include "bn_fixed_point.h"
#include "bn_sprite_text_generator.h"

#include "lro_font.h"

#include "lro_scene.h"
#include "lro_rank.h"
#include "lro_scene_title.h"
#include "lro_scene_level_select.h"
#include "lro_scene_selector.h"
#include "lro_scene_game.h"

int main()
{
    bn::core::init();
    lro::Scene scene = lro::Scene::LevelSelect;

    bn::sprite_text_generator text_generator(lro::fixed_8x8_sprite_font);

    while (true)
    {
        if (scene == lro::Scene::Title)
        {
            lro::Title title = lro::Title();
            scene = title.execute();
        }
        else if (scene == lro::Scene::LevelSelect)
        {
            lro::LevelSelect level = lro::LevelSelect(text_generator);
            scene = level.execute();
        }
        else if (scene == lro::Scene::SelectTraining)
        {
            lro::Selector level = lro::Selector(text_generator);
            scene = level.execute(lro::Rank::Trainee);
        }
        else if (scene == lro::Scene::SelectRecruit)
        {
            lro::Selector level = lro::Selector(text_generator);
            scene = level.execute(lro::Rank::Recruit);
        }
        else if (scene == lro::Scene::SelectSenior)
        {
            lro::Selector level = lro::Selector(text_generator);
            scene = level.execute(lro::Rank::Senior);
        }
        else if (scene == lro::Scene::SelectExpert)
        {
            lro::Selector level = lro::Selector(text_generator);
            scene = level.execute(lro::Rank::Expert);
        }
        else if (scene == lro::Scene::SelectOfficer)
        {
            lro::Selector level = lro::Selector(text_generator);
            scene = level.execute(lro::Rank::Officer);
        }
        else if (scene == lro::Scene::LEVEL1)
        {
            lro::Game level = lro::Game();
            scene = level.execute(1);
        }
        else if (scene == lro::Scene::LEVEL2)
        {
            lro::Game level = lro::Game();
            scene = level.execute(2);
        }
        else if (scene == lro::Scene::LEVEL3)
        {
            lro::Game level = lro::Game();
            scene = level.execute(3);
        }
        else if (scene == lro::Scene::LEVEL4)
        {
            lro::Game level = lro::Game();
            scene = level.execute(4);
        }
        else if (scene == lro::Scene::LEVEL5)
        {
            lro::Game level = lro::Game();
            scene = level.execute(5);
        }
        else if (scene == lro::Scene::LEVEL6)
        {
            lro::Game level = lro::Game();
            scene = level.execute(6);
        }
        else if (scene == lro::Scene::LEVEL7)
        {
            lro::Game level = lro::Game();
            scene = level.execute(7);
        }
        else if (scene == lro::Scene::LEVEL8)
        {
            lro::Game level = lro::Game();
            scene = level.execute(8);
        }
        else if (scene == lro::Scene::LEVEL9)
        {
            lro::Game level = lro::Game();
            scene = level.execute(9);
        }
        else if (scene == lro::Scene::LEVEL10)
        {
            lro::Game level = lro::Game();
            scene = level.execute(10);
        }
        else if (scene == lro::Scene::LEVEL11)
        {
            lro::Game level = lro::Game();
            scene = level.execute(11);
        }
        else if (scene == lro::Scene::LEVEL12)
        {
            lro::Game level = lro::Game();
            scene = level.execute(12);
        }
        else if (scene == lro::Scene::LEVEL13)
        {
            lro::Game level = lro::Game();
            scene = level.execute(13);
        }
        else if (scene == lro::Scene::LEVEL14)
        {
            lro::Game level = lro::Game();
            scene = level.execute(14);
        }
        else if (scene == lro::Scene::LEVEL15)
        {
            lro::Game level = lro::Game();
            scene = level.execute(15);
        }
        else if (scene == lro::Scene::LEVEL16)
        {
            lro::Game level = lro::Game();
            scene = level.execute(16);
        }
        else if (scene == lro::Scene::LEVEL17)
        {
            lro::Game level = lro::Game();
            scene = level.execute(17);
        }
        else if (scene == lro::Scene::LEVEL18)
        {
            lro::Game level = lro::Game();
            scene = level.execute(18);
        }
        else if (scene == lro::Scene::LEVEL19)
        {
            lro::Game level = lro::Game();
            scene = level.execute(19);
        }
        else if (scene == lro::Scene::LEVEL20)
        {
            lro::Game level = lro::Game();
            scene = level.execute(20);
        }
        else if (scene == lro::Scene::LEVEL21)
        {
            lro::Game level = lro::Game();
            scene = level.execute(21);
        }
        else if (scene == lro::Scene::LEVEL22)
        {
            lro::Game level = lro::Game();
            scene = level.execute(22);
        }
        else if (scene == lro::Scene::LEVEL23)
        {
            lro::Game level = lro::Game();
            scene = level.execute(23);
        }
        else if (scene == lro::Scene::LEVEL24)
        {
            lro::Game level = lro::Game();
            scene = level.execute(24);
        }
        else if (scene == lro::Scene::LEVEL25)
        {
            lro::Game level = lro::Game();
            scene = level.execute(25);
        }
        else if (scene == lro::Scene::LEVEL26)
        {
            lro::Game level = lro::Game();
            scene = level.execute(26);
        }
        else if (scene == lro::Scene::LEVEL27)
        {
            lro::Game level = lro::Game();
            scene = level.execute(27);
        }
        else if (scene == lro::Scene::LEVEL28)
        {
            lro::Game level = lro::Game();
            scene = level.execute(28);
        }
        else if (scene == lro::Scene::LEVEL29)
        {
            lro::Game level = lro::Game();
            scene = level.execute(29);
        }
        else if (scene == lro::Scene::LEVEL30)
        {
            lro::Game level = lro::Game();
            scene = level.execute(30);
        }
        else if (scene == lro::Scene::LEVEL31)
        {
            lro::Game level = lro::Game();
            scene = level.execute(31);
        }
        else if (scene == lro::Scene::LEVEL32)
        {
            lro::Game level = lro::Game();
            scene = level.execute(32);
        }
        else if (scene == lro::Scene::LEVEL33)
        {
            lro::Game level = lro::Game();
            scene = level.execute(33);
        }
        else if (scene == lro::Scene::LEVEL34)
        {
            lro::Game level = lro::Game();
            scene = level.execute(34);
        }
        else if (scene == lro::Scene::LEVEL35)
        {
            lro::Game level = lro::Game();
            scene = level.execute(35);
        }
        else if (scene == lro::Scene::LEVEL36)
        {
            lro::Game level = lro::Game();
            scene = level.execute(36);
        }
        else if (scene == lro::Scene::LEVEL37)
        {
            lro::Game level = lro::Game();
            scene = level.execute(37);
        }
        else if (scene == lro::Scene::LEVEL38)
        {
            lro::Game level = lro::Game();
            scene = level.execute(38);
        }
        else if (scene == lro::Scene::LEVEL39)
        {
            lro::Game level = lro::Game();
            scene = level.execute(39);
        }
        else if (scene == lro::Scene::LEVEL40)
        {
            lro::Game level = lro::Game();
            scene = level.execute(40);
        }
        else if (scene == lro::Scene::LEVEL41)
        {
            lro::Game level = lro::Game();
            scene = level.execute(41);
        }
        else if (scene == lro::Scene::LEVEL42)
        {
            lro::Game level = lro::Game();
            scene = level.execute(42);
        }
        else if (scene == lro::Scene::LEVEL43)
        {
            lro::Game level = lro::Game();
            scene = level.execute(43);
        }
        else if (scene == lro::Scene::LEVEL44)
        {
            lro::Game level = lro::Game();
            scene = level.execute(44);
        }
        else if (scene == lro::Scene::LEVEL45)
        {
            lro::Game level = lro::Game();
            scene = level.execute(45);
        }
        else if (scene == lro::Scene::LEVEL46)
        {
            lro::Game level = lro::Game();
            scene = level.execute(46);
        }
        else if (scene == lro::Scene::LEVEL47)
        {
            lro::Game level = lro::Game();
            scene = level.execute(47);
        }
        else if (scene == lro::Scene::LEVEL48)
        {
            lro::Game level = lro::Game();
            scene = level.execute(48);
        }
        else if (scene == lro::Scene::LEVEL49)
        {
            lro::Game level = lro::Game();
            scene = level.execute(49);
        }
        else if (scene == lro::Scene::LEVEL50)
        {
            lro::Game level = lro::Game();
            scene = level.execute(50);
        }
        bn::core::update();
    }
}
