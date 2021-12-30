#include "bn_core.h"
#include "bn_regular_bg_ptr.h"
#include "bn_keypad.h"
#include "bn_log.h"
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
#include "lro_scene_menu.h"
#include "lro_scene_credits.h"

#include "bn_music_items.h"

#include "bn_regular_bg_items_blank.h"

#define BN_CFG_AUDIO_MIXING_RATE BN_AUDIO_MIXING_RATE_21_KHZ

int main()
{
    bn::core::init();
    
    lro::Scene scene = lro::Scene::Credits;
    lro::State state;
    
    // unlock all levels
    // state.completeLevel(50);

    bool music_started = false;

    bn::sprite_text_generator text_generator(lro::fixed_8x8_sprite_font);

    int current_level = -1;

    while (true)
    {
        if (scene == lro::Scene::Title)
        {
            lro::Title title = lro::Title();
            if(!music_started){
                bn::music_items::meloutest3.play(1, true);
                music_started = true;
            }
            scene = title.execute();
        } 
        else if (scene == lro::Scene::Credits)
        {
            lro::Credits credits = lro::Credits();
            scene = credits.execute();
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
            if(current_level == 0){
                scene = lro::Scene::LevelSelect;
            } else {
                scene = lro::Scene::LEVEL;
            }
        }
        else if (scene == lro::Scene::SelectRecruit)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Recruit);
            if(current_level == 0){
                scene = lro::Scene::LevelSelect;
            } else {
                scene = lro::Scene::LEVEL;
            }
        }
        else if (scene == lro::Scene::SelectSenior)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Senior);
            if(current_level == 0){
                scene = lro::Scene::LevelSelect;
            } else {
                scene = lro::Scene::LEVEL;
            }
        }
        else if (scene == lro::Scene::SelectExpert)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Expert);
            if(current_level == 0){
                scene = lro::Scene::LevelSelect;
            } else {
                scene = lro::Scene::LEVEL;
            }
        }
        else if (scene == lro::Scene::SelectOfficer)
        {
            lro::Selector level = lro::Selector(text_generator);
            current_level = level.execute(lro::Rank::Officer);
            if(current_level == 0){
                scene = lro::Scene::LevelSelect;
            } else {
                scene = lro::Scene::LEVEL;
            }
        }
        else if (scene == lro::Scene::LEVEL)
        {
            lro::Game level = lro::Game(text_generator);
            current_level = level.execute(current_level);
            if(current_level % 10 == 0 && current_level < 51){
                scene = lro::Scene::LevelSelect;
            } 
            else if (current_level < 11)
            {
                scene = lro::Scene::SelectTraining;
            }
            else if (current_level < 21)
            {
                scene = lro::Scene::SelectRecruit;
            }
            else if (current_level < 31)
            {
                scene = lro::Scene::SelectSenior;
            }
            else if (current_level < 41)
            {
                scene = lro::Scene::SelectExpert;
            }
            else if (current_level < 51)
            {
                scene = lro::Scene::SelectOfficer;
            } 
            else {
                scene = lro::Scene::Academy;
            }
        }
        else if (scene == lro::Scene::Academy)
        {
            lro::Academy academy = lro::Academy(text_generator);
            current_level = academy.execute(current_level);
            scene = lro::Scene::LEVEL;
        }
        else if (scene == lro::Scene::Menu)
        {
            lro::Menu menu = lro::Menu(text_generator);
            scene = menu.execute();
            current_level = -1;
        }

        if(current_level == 0 && scene == lro::Scene::LEVEL){
            scene = lro::Scene::Menu;
        }
    }
}
