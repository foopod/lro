#include "lro_luggage.h"

#include "bn_fixed.h"
#include "bn_random.h"

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
#include "bn_sprite_items_target.h"

namespace lro {

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


    Luggage::Luggage(bn::fixed_point pos, lro::Orientation orientation, int length, int palette) :
        _pos(pos),
        _orientation(orientation),
        _length(length),
        _sprite(bn::sprite_items::suitcase12a.create_sprite(0, 0)),
        _sprite_item(bn::sprite_items::suitcase12a)
    {
        
        if(orientation == lro::Orientation::Horizontal){
            if(length != 2){
                int num_palettes = 3;
                if(palette % num_palettes == 0){
                    _sprite = bn::sprite_items::suitcase13a.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13a;
                } else if (palette % num_palettes == 1){
                    _sprite = bn::sprite_items::suitcase13b.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13b;
                } else {
                    _sprite = bn::sprite_items::suitcase13c.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13c;
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
                } else {
                    _sprite = bn::sprite_items::suitcase13vc.create_sprite(0, 0);
                    _sprite_item = bn::sprite_items::suitcase13vc;
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

    Luggage::Luggage(bn::fixed_point pos, bool isTarget) :
        _pos(pos),
        _orientation(lro::Orientation::Horizontal),
        _length(2),
        _is_target(isTarget),
        _sprite(bn::sprite_items::target.create_sprite(0, 0)),
        _sprite_item(bn::sprite_items::target)
    {
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

    void Luggage::moveLeft(){
        if(_orientation == lro::Orientation::Horizontal){
            if(_pos.x() - 1 >= 0){
                _pos.set_x(_pos.x() - 1);
                _sprite.set_position(gridToScreen(_pos, _orientation, _length));
            }
        }
    }

    void Luggage::moveRight(){
        if(_orientation == lro::Orientation::Horizontal){
            if(_pos.x() + (_length - 1) + 1 <= 5){
                _pos.set_x(_pos.x() + 1);
                _sprite.set_position(gridToScreen(_pos, _orientation, _length));
            } else if(_is_target){
                _pos.set_x(_pos.x() + 1);
                _sprite.set_position(gridToScreen(_pos, _orientation, _length));
            }
        }
    }

    void Luggage::moveUp(){
        if(_orientation == lro::Orientation::Vertical){
            if(_pos.y() - 1 >= 0){
                _pos.set_y(_pos.y() - 1);
                _sprite.set_position(gridToScreen(_pos, _orientation, _length));
            }
        }
    }
    
    void Luggage::moveDown(){
        if(_orientation == lro::Orientation::Vertical){
            if(_pos.y() + (_length - 1) + 1 <= 5){
                _pos.set_y(_pos.y() + 1);
                _sprite.set_position(gridToScreen(_pos, _orientation, _length));
            }
        }
    }

    void Luggage::hightlight(bool is_highlighted){
        if(is_highlighted){
            _sprite.set_item(_sprite_item, 1);
            _sprite.put_above();
        } else {
            _sprite.set_item(_sprite_item, 0);
        }
    }
    
}