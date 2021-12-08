/*
 * Copyright (c) 2020-2021 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#ifndef LRO_FIXED_8x8_SPRITE_FONT_H
#define LRO_FIXED_8x8_SPRITE_FONT_H

#include "bn_sprite_font.h"
#include "bn_sprite_items_font.h"

namespace lro
{

constexpr bn::string_view fixed_8x8_sprite_font_utf8_characters[] = {
    "á", "é", "í", "ó", "ú", "ü", "ñ", "¡", "¿", "α", "β"
};

constexpr bn::sprite_font fixed_8x8_sprite_font(
        bn::sprite_items::font, fixed_8x8_sprite_font_utf8_characters);
}
#endif