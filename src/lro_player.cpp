#include "lro_player.h"
#include "lro_orientation.h"

#include "bn_keypad.h"

namespace lro {
    Player::Player(bn::vector<Luggage,16>& luggage_list)
    {
        _luggage_list = &luggage_list;
        _luggage_list.value()->at(_selected).hightlight(true);
    }

    [[nodiscard]] bool isInWay(bn::fixed_point gridPos, bn::vector<Luggage,16>* luggage_list)
    {
        for(int i = 0; i < luggage_list->size(); i++){
            if(gridPos.x() == luggage_list->at(i).pos().x() && gridPos.y() == luggage_list->at(i).pos().y()){
                return true;
            }
            if(luggage_list->at(i).orientation() == lro::Orientation::Horizontal){
                for(int j = 1; j < luggage_list->at(i).length(); j ++){
                    if(gridPos.x() == luggage_list->at(i).pos().x() + j && gridPos.y() == luggage_list->at(i).pos().y()){
                        return true;
                    }
                }
            }
            if(luggage_list->at(i).orientation() == lro::Orientation::Vertical){
                for(int j = 1; j < luggage_list->at(i).length(); j ++){
                    if(gridPos.x() == luggage_list->at(i).pos().x()&& gridPos.y() == luggage_list->at(i).pos().y() + j ){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }

    bool Player::has_finished(){
        return _has_finished;
    }

    void Player::update(){
        //back in list
        if(bn::keypad::l_pressed()){
            _luggage_list.value()->at(_selected).hightlight(false);
            --_selected;
            if(_selected < 0){
                _selected = _luggage_list.value()->size() - 1;
            }
            _luggage_list.value()->at(_selected).hightlight(true);
        }

        //forward in list
        if(bn::keypad::r_pressed()){
            _luggage_list.value()->at(_selected).hightlight(false);
            ++_selected;
            if(_selected > _luggage_list.value()->size() - 1){
                _selected = 0;
            }
            _luggage_list.value()->at(_selected).hightlight(true);
        }

        if(bn::keypad::left_pressed()){
            bn::fixed_point desired = bn::fixed_point(
                _luggage_list.value()->at(_selected).pos().x() - 1,
                _luggage_list.value()->at(_selected).pos().y()
            );
            if(!isInWay(desired, _luggage_list.value())){
                _luggage_list.value()->at(_selected).moveLeft();
            }
        }

        if(bn::keypad::right_pressed()){
            bn::fixed_point desired = bn::fixed_point(
                _luggage_list.value()->at(_selected).pos().x() + _luggage_list.value()->at(_selected).length(),
                _luggage_list.value()->at(_selected).pos().y()
            );
            if(!isInWay(desired, _luggage_list.value())){
                _luggage_list.value()->at(_selected).moveRight();
            }

            if(_luggage_list.value()->at(_selected).is_target() && _luggage_list.value()->at(_selected).pos().x() > 4){
                _has_finished = true;
            }
        }

        if(bn::keypad::up_pressed()){
            bn::fixed_point desired = bn::fixed_point(
                _luggage_list.value()->at(_selected).pos().x(),
                _luggage_list.value()->at(_selected).pos().y() - 1
            );
            if(!isInWay(desired, _luggage_list.value())){
                _luggage_list.value()->at(_selected).moveUp();
            }
        }

        if(bn::keypad::down_pressed()){
            bn::fixed_point desired = bn::fixed_point(
                _luggage_list.value()->at(_selected).pos().x(),
                _luggage_list.value()->at(_selected).pos().y() + _luggage_list.value()->at(_selected).length()
            );
            if(!isInWay(desired, _luggage_list.value())){
                _luggage_list.value()->at(_selected).moveDown();
            }
        }
        
    }
}