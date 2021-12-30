#include "lro_player.h"
#include "lro_levels.h"
#include "lro_orientation.h"

#include "bn_keypad.h"
#include "bn_log.h"
#include "bn_fixed_point.h"
#include "bn_blending_actions.h"

#include "bn_sound_items.h"

namespace lro {

    namespace{
    [[nodiscard]] bn::fixed_point gridToScreen(bn::fixed_point gridPos)
    {
        // screen offset
        bn::fixed sx = -90;
        bn::fixed sy = -50;

        // add gridposition
        sx += gridPos.x() * 20;
        sy += gridPos.y() * 20;

        return bn::fixed_point(sx, sy);
    }

    [[nodiscard]] int get_luggage_at_pos(bn::fixed_point gridPos, bn::vector<Luggage,16> luggage_list)
    {
        for(int i = 0; i < luggage_list.size(); i++){
            if(gridPos.x() == luggage_list.at(i).pos().x() && gridPos.y() == luggage_list.at(i).pos().y()){
                return i;
            }
            if(luggage_list.at(i).orientation() == lro::Orientation::Horizontal){
                for(int j = 1; j < luggage_list.at(i).length(); j ++){
                    if(gridPos.x() == luggage_list.at(i).pos().x() + j && gridPos.y() == luggage_list.at(i).pos().y()){
                        return i;
                    }
                }
            }
            if(luggage_list.at(i).orientation() == lro::Orientation::Vertical){
                for(int j = 1; j < luggage_list.at(i).length(); j ++){
                    if(gridPos.x() == luggage_list.at(i).pos().x()&& gridPos.y() == luggage_list.at(i).pos().y() + j ){
                        return i;
                    }
                }
            }
        }
        
        return -1;
    }

    [[nodiscard]] bool isInWay(bn::fixed_point gridPos, bn::vector<Luggage,16> luggage_list){
        return get_luggage_at_pos(gridPos, luggage_list) >= 0;
    }
    }

    Player::Player(int level)
    {
        // bn::vector<Luggage, 16> luggage_list = lro::Levels().get_luggage(level);
        _luggage_list = lro::Levels().get_luggage(level);
        _cursor_sprite.set_position(gridToScreen(_cursor_pos));
        _cursor_sprite.put_above();
        _cursor_sprite.set_blending_enabled(true);
    }

    bool Player::has_finished(int level){
        if(_has_finished){
            if(level > _state.get_last_completed_level() && level < 51){
                _state.completeLevel(level);
            }
            if(level > 50){
                _moves_so_far+=1;
                if(_moves_so_far < _state.get_best_min_moves_list().at(level-51) ||
                    _state.get_best_min_moves_list().at(level-51) == 0){
                    _state.set_best_min_move(level-51, _moves_so_far);
                }
            }
        }
        return _has_finished;
    }

    void Player::update(){
        if(_slide_action.has_value() && !_slide_action.value().done()){
            _slide_action.value().update();
            _lock_frames+=1;
            if(_lock_frames > 3){
                _locked = false;
            }
        } 
        else if (_slide_action.has_value() && _slide_action.value().done() && _done)
        {
            _has_finished = true;
        }
        
        if(!_has_finished && (!_slide_action.has_value() || (_slide_action.has_value() && _slide_action.value().done()))){
            if(bn::keypad::left_pressed()){
                if(_cursor_sprite.visible()){
                    if(_cursor_pos.x() > 0){
                        _cursor_pos.set_x(_cursor_pos.x() - 1);
                        _cursor_sprite.set_position(gridToScreen(_cursor_pos));
                    }
                } else {
                    bn::fixed_point desired = bn::fixed_point(
                        _luggage_list.at(_selected).pos().x() - 1,
                        _luggage_list.at(_selected).pos().y()
                    );
                    if(!isInWay(desired, _luggage_list)){
                        _slide_action = _luggage_list.at(_selected).moveLeft();
                        if(_slide_action.has_value()){
                            _lock_frames = 0;
                            _locked = true;
                        }
                    } else {
                        bn::sound_items::no_move.play();
                    }
                }
            } else if(bn::keypad::right_pressed()){
                if(_cursor_sprite.visible()){
                    if(_cursor_pos.x() < 5){
                        _cursor_pos.set_x(_cursor_pos.x() + 1);
                        _cursor_sprite.set_position(gridToScreen(_cursor_pos));
                    }
                } else {
                    bn::fixed_point desired = bn::fixed_point(
                        _luggage_list.at(_selected).pos().x() + _luggage_list.at(_selected).length(),
                        _luggage_list.at(_selected).pos().y()
                    );

                    // finished
                    if(_luggage_list.at(_selected).is_target() && _luggage_list.at(_selected).pos().x() == 4){
                        _slide_action = _luggage_list.at(_selected).slide_to_end();
                        _done = true;
                    } 
                    // or just normal move
                    else if(!isInWay(desired, _luggage_list)){
                        _slide_action = _luggage_list.at(_selected).moveRight();
                        if(_slide_action.has_value()){
                            _lock_frames = 0;
                            _locked = true;
                        }
                    } else {
                        bn::sound_items::no_move.play();
                    }
                }
            }

            if(bn::keypad::up_pressed()){
                if(_cursor_sprite.visible()){
                    if(_cursor_pos.y() > 0){
                        _cursor_pos.set_y(_cursor_pos.y() - 1);
                        _cursor_sprite.set_position(gridToScreen(_cursor_pos));
                    }
                } else {
                    bn::fixed_point desired = bn::fixed_point(
                        _luggage_list.at(_selected).pos().x(),
                        _luggage_list.at(_selected).pos().y() - 1
                    );
                    if(!isInWay(desired, _luggage_list)){
                        _slide_action = _luggage_list.at(_selected).moveUp();
                        if(_slide_action.has_value()){
                            _lock_frames = 0;
                            _locked = true;
                        }
                    } else {
                        bn::sound_items::no_move.play();
                    }
                }
            } else if(bn::keypad::down_pressed()){
                if(_cursor_sprite.visible()){
                    if(_cursor_pos.y() < 5){
                        _cursor_pos.set_y(_cursor_pos.y() + 1);
                        _cursor_sprite.set_position(gridToScreen(_cursor_pos));
                    }
                } else {
                    bn::fixed_point desired = bn::fixed_point(
                        _luggage_list.at(_selected).pos().x(),
                        _luggage_list.at(_selected).pos().y() + _luggage_list.at(_selected).length()
                    );
                    if(!isInWay(desired, _luggage_list)){
                        _slide_action = _luggage_list.at(_selected).moveDown();
                        if(_slide_action.has_value()){
                            _lock_frames = 0;
                            _locked = true;
                        }
                    } else {
                        bn::sound_items::no_move.play();
                    }
                }
            }
        }
        
        if(bn::keypad::a_pressed() && !_locked){
            if(_cursor_sprite.visible()){
                int tmp_luggage = get_luggage_at_pos(_cursor_pos, _luggage_list);
                if(tmp_luggage >= 0){
                    _selected = tmp_luggage;
                    _luggage_list.at(_selected).hightlight(true);
                    _cursor_sprite.set_visible(false);
                    _old_pos = _luggage_list.at(_selected).pos();
                }
            } else {
                _luggage_list.at(_selected).hightlight(false);
                _cursor_sprite.set_visible(true);
                _cursor_sprite.put_above();
                if(_old_pos != _luggage_list.at(_selected).pos()){
                    _moves_so_far+=1;
                }
            }
        } 
    }
}