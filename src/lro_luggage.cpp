#include "lro_luggage.h"

#include "bn_fixed.h"
#include "bn_random.h"
#include "bn_optional.h"
#include "bn_sprite_actions.h"

#include "bn_sprite_items_suitcase12a.h"
#include "bn_sprite_items_suitcase12b.h"
#include "bn_sprite_items_suitcase12c.h"
#include "bn_sprite_items_suitcase12d.h"
#include "bn_sprite_items_suitcase12e.h"
#include "bn_sprite_items_suitcase12f.h"
#include "bn_sprite_items_suitcase12g.h"
#include "bn_sprite_items_suitcase13a.h"
#include "bn_sprite_items_suitcase13b.h"
#include "bn_sprite_items_suitcase13c.h"
#include "bn_sprite_items_suitcase13d.h"
#include "bn_sprite_items_suitcase13e.h"
#include "bn_sprite_items_suitcase13f.h"
#include "bn_sprite_items_suitcase12va.h"
#include "bn_sprite_items_suitcase12vb.h"
#include "bn_sprite_items_suitcase12vc.h"
#include "bn_sprite_items_suitcase12vd.h"
#include "bn_sprite_items_suitcase12ve.h"
#include "bn_sprite_items_suitcase12vf.h"
#include "bn_sprite_items_suitcase12vg.h"
#include "bn_sprite_items_suitcase13va.h"
#include "bn_sprite_items_suitcase13vb.h"
#include "bn_sprite_items_suitcase13vc.h"
#include "bn_sprite_items_suitcase13vd.h"
#include "bn_sprite_items_suitcase13ve.h"
#include "bn_sprite_items_suitcase13vf.h"
#include "bn_sprite_items_target.h"
#include "bn_sprite_items_target_black.h"

namespace lro {

    namespace{
    [[nodiscard]] bn::fixed_point gridToScreen(bn::fixed_point gridPos, lro::Orientation orientation, int length)
    {
        // screen offset
        bn::fixed sx = -100;
        bn::fixed sy = -50;

        // add gridposition
        sx += gridPos.x() * 20;
        sy += gridPos.y() * 20;

        // horizontal luggage's grid pos is at left end
        if(orientation == lro::Orientation::Horizontal) {
            sx += (length * 20) / 2;
        }

        // vertical luggage's grid pos is at top end
        if(orientation == lro::Orientation::Vertical) {
            sy += (length * 20) / 2 - 10;
            sx += 10;
        }

        return bn::fixed_point(sx, sy);
    }
    }


    Luggage::Luggage(bn::fixed_point pos, lro::Orientation orientation, int length, int palette) :
        _pos(pos),
        _orientation(orientation),
        _length(length),
        _sprite(bn::sprite_items::suitcase12a.create_sprite(0, 0)),
        _sprite_item(bn::sprite_items::suitcase12a)
    {
        
        if(orientation == lro::Orientation::Horizontal){
            if(length != 2){
                int num_palettes = 6;
                if(palette % num_palettes == 0){
                    _sprite = bn::sprite_items::suitcase13a.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13a;
                } else if (palette % num_palettes == 1){
                    _sprite = bn::sprite_items::suitcase13b.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13b;
                } else if (palette % num_palettes == 2){
                    _sprite = bn::sprite_items::suitcase13c.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13c;
                } else if (palette % num_palettes == 3){
                    _sprite = bn::sprite_items::suitcase13d.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13d;
                } else if (palette % num_palettes == 4){
                    _sprite = bn::sprite_items::suitcase13e.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13e;
                } else {
                    _sprite = bn::sprite_items::suitcase13f.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13f;
                }
            } else {
                int num_palettes = 7;
                if(palette % num_palettes == 0){
                    _sprite = bn::sprite_items::suitcase12a.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12a;
                } else if (palette % num_palettes == 1){
                    _sprite = bn::sprite_items::suitcase12b.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12b;
                } else if (palette % num_palettes == 2){
                    _sprite = bn::sprite_items::suitcase12c.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12c;
                } else if (palette % num_palettes == 3){
                    _sprite = bn::sprite_items::suitcase12d.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12d;
                } else if (palette % num_palettes == 4){
                    _sprite = bn::sprite_items::suitcase12e.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12e;
                } else if (palette % num_palettes == 5){
                    _sprite = bn::sprite_items::suitcase12f.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12f;
                } else {
                    _sprite = bn::sprite_items::suitcase12g.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12g;
                }
            }
        } else {
            if(length != 2){
                int num_palettes = 3;
                if(palette % num_palettes == 0){
                    _sprite = bn::sprite_items::suitcase13va.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13va;
                } else if (palette % num_palettes == 1){
                    _sprite = bn::sprite_items::suitcase13vb.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13vb;
                } else if (palette % num_palettes == 2){
                    _sprite = bn::sprite_items::suitcase13vc.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13vc;
                } else if (palette % num_palettes == 3){
                    _sprite = bn::sprite_items::suitcase13vd.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13vd;
                } else if (palette % num_palettes == 4){
                    _sprite = bn::sprite_items::suitcase13ve.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13ve;
                } else {
                    _sprite = bn::sprite_items::suitcase13vf.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13vf;
                }
            } else {
                int num_palettes = 7;
                if(palette % num_palettes == 0){
                    _sprite = bn::sprite_items::suitcase12va.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12va;
                } else if (palette % num_palettes == 1){
                    _sprite = bn::sprite_items::suitcase12vb.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12vb;
                } else if (palette % num_palettes == 2){
                    _sprite = bn::sprite_items::suitcase12vc.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12vc;
                } else if (palette % num_palettes == 3){
                    _sprite = bn::sprite_items::suitcase12vd.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12vd;
                } else if (palette % num_palettes == 4){
                    _sprite = bn::sprite_items::suitcase12ve.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12ve;
                } else if (palette % num_palettes == 5){
                    _sprite = bn::sprite_items::suitcase12vf.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12vf;
                } else {
                    _sprite = bn::sprite_items::suitcase12vg.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase12vg;
                }
            }
        }

        _sprite.set_position(gridToScreen(_pos, _orientation, _length));
    }

    Luggage::Luggage(bn::fixed_point pos, bool isRedTarget) :
        _pos(pos),
        _orientation(lro::Orientation::Horizontal),
        _length(2),
        _is_target(isRedTarget),
        _sprite(bn::sprite_items::target.create_sprite(0, 0)),
        _sprite_item(bn::sprite_items::target)
    {
        if(!isRedTarget){
            _sprite = bn::sprite_items::target_black.create_sprite(0, 0);
            _sprite_item = bn::sprite_items::target_black;
            _is_target = true;
        }
        _sprite.set_position(gridToScreen(_pos, _orientation, _length));
    }

    bn::fixed_point Luggage::pos(){
        return _pos;
    }

    lro::Orientation Luggage::orientation(){
        return _orientation;
    }

    int Luggage::length(){
        return _length;
    }

    bool Luggage::is_target(){
        return _is_target;
    }

    bn::optional<bn::sprite_move_to_action> Luggage::moveLeft(){
        if(_orientation == lro::Orientation::Horizontal){
            if(_pos.x() - 1 >= 0){
                _pos.set_x(_pos.x() - 1);
                return bn::sprite_move_to_action(_sprite, 10, gridToScreen(_pos, _orientation, _length));
            }
        }
        return bn::optional<bn::sprite_move_to_action>();
    }

    bn::optional<bn::sprite_move_to_action> Luggage::moveRight(){
        if(_orientation == lro::Orientation::Horizontal){
            if(_pos.x() + (_length - 1) + 1 <= 5){
                _pos.set_x(_pos.x() + 1);
                return bn::sprite_move_to_action(_sprite, 10, gridToScreen(_pos, _orientation, _length));
            } else if(_is_target){
                _pos.set_x(_pos.x() + 1);
                _sprite.set_position(gridToScreen(_pos, _orientation, _length));
            }
        }
        return bn::optional<bn::sprite_move_to_action>();
    }

    bn::optional<bn::sprite_move_to_action> Luggage::moveUp(){
        if(_orientation == lro::Orientation::Vertical){
            if(_pos.y() - 1 >= 0){
                _pos.set_y(_pos.y() - 1);
                return bn::sprite_move_to_action(_sprite, 10, gridToScreen(_pos, _orientation, _length));
            }
        }
        return bn::optional<bn::sprite_move_to_action>();
    }
    
    bn::optional<bn::sprite_move_to_action> Luggage::moveDown(){
        if(_orientation == lro::Orientation::Vertical){
            if(_pos.y() + (_length - 1) + 1 <= 5){
                _pos.set_y(_pos.y() + 1);
                return bn::sprite_move_to_action(_sprite, 10, gridToScreen(_pos, _orientation, _length));
            }
        }
        return bn::optional<bn::sprite_move_to_action>();
    }

    void Luggage::hightlight(bool is_highlighted){
        if(is_highlighted){
            _sprite.set_item(_sprite_item, 1);
            _sprite.put_above();
        } else {
            _sprite.set_item(_sprite_item, 0);
        }
    }

    bn::sprite_move_to_action Luggage::slide_to_end(){
        return bn::sprite_move_to_action(_sprite, 60, 72, _sprite.position().y());
    }
    
}