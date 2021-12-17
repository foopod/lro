#include "lro_dialog.h"

#include "bn_sprite_ptr.h"
#include "bn_keypad.h"
#include "bn_log.h"

#include "bn_sprite_items_dialog_bg.h"
#include "bn_sprite_items_police_face.h"
#include "bn_sprite_items_anon_face.h"
#include "bn_sprite_items_unlock_face.h"

namespace lro
{
    DialogLine::DialogLine(Speaker speaker, Emotion emotion, bn::string_view text)
     : _speaker(speaker), _emotion(emotion), _text(text) {}

    void DialogLine::set_speaker(Speaker speaker){
        _speaker = speaker;
    }

    void DialogLine::set_emotion(Emotion emotion){
        _emotion = emotion;
    }

    void DialogLine::set_text(bn::string_view text){
        _text = text;
    }

    Speaker DialogLine::speaker(){
        return _speaker;
    }

    Emotion DialogLine::emotion(){
        return _emotion;
    }

    bn::string_view DialogLine::text(){
        return _text;
    }

    bn::sprite_ptr get_speaker_sprite(Speaker speaker, Emotion emotion){
        if(speaker == Speaker::Boss){
            return bn::sprite_items::police_face.create_sprite(-84, 0, static_cast<int>(emotion));
        }
        if(speaker == Speaker::Anon){
            return bn::sprite_items::anon_face.create_sprite(-84, 0, static_cast<int>(emotion));
        }
        if(speaker == Speaker::Lock){
            return bn::sprite_items::unlock_face.create_sprite(-84, 0, static_cast<int>(emotion));
        }
    }

    Dialog::Dialog(bn::vector<DialogLine, 32>& dialog_lines, bn::sprite_text_generator& text_generator)
    :  _dialog_lines(&dialog_lines), _text_generator(&text_generator), _dialog_bgs({
            bn::sprite_items::dialog_bg.create_sprite(-80, 0, 0),
            bn::sprite_items::dialog_bg.create_sprite(-32, 0, 1),
            bn::sprite_items::dialog_bg.create_sprite(32, 0, 1),
            bn::sprite_items::dialog_bg.create_sprite(80, 0, 2)
        }), _currentLine(0), _currentChar(0){

        for(bn::sprite_ptr dialog_bg : _dialog_bgs){
            dialog_bg.set_bg_priority(0);
            dialog_bg.set_visible(false);
        }

        _text_generator->set_bg_priority(0);
        _text_generator->set_z_order(0);
        
        _speaker_sprite = get_speaker_sprite(_dialog_lines->at(0).speaker(), _dialog_lines->at(0).emotion());
        _speaker_sprite->set_bg_priority(0);
        _speaker_sprite->set_z_order(0);
        _speaker_sprite->set_visible(false);
    }

    bool Dialog::done(){
        return _done;
    }

    void Dialog::set_visible(bool visible){
        for(bn::sprite_ptr dialog_bg : _dialog_bgs){
            dialog_bg.set_visible(visible);
        }
        _speaker_sprite->set_visible(visible);
    }

    bn::vector<bn::string_view, 3> split_to_lines(bn::string_view currentText, bn::string_view totalText){
        bn::string_view remaining = currentText;
        int max = 20;
        bn::vector<bn::string_view, 3> output;
        while(totalText.size() > 0){
            if(totalText.size() < max){
                output.push_back(remaining);
                remaining = "";
                totalText = "";
            } else {
                int space_index = 0;
                for(int i = 0; i < max; ++i){
                    if(totalText.at(i) == ' '){
                        space_index = i;
                    }
                }
                output.push_back(remaining.substr(0,space_index+1));
                remaining = remaining.substr(space_index+1, remaining.size());
                totalText = totalText.substr(space_index+1, totalText.size());
            }
        }
        return output;
    }



    void Dialog::update(){
        if(!_done){
            if(_currentChar >= _dialog_lines->at(_currentLine).text().size()){
                if(bn::keypad::a_pressed())
                {
                    if(_currentLine == _dialog_lines->size()-1)
                    {
                        _done = true;
                        _currentChars = "";
                        _currentChar = 0;
                        _currentLine = 0;
                    } else {
                        _currentChars = "";
                        _currentLine += 1;
                        _currentChar = 0;
                        _speaker_sprite = get_speaker_sprite(_dialog_lines->at(_currentLine).speaker(), _dialog_lines->at(_currentLine).emotion());
                        _speaker_sprite->set_bg_priority(0);
                        _speaker_sprite->set_z_order(0);
                    }
                }
            } else {
                _currentChars = _dialog_lines->at(_currentLine).text().substr(0, _currentChar+2);
                if(bn::keypad::a_held()){
                    _currentChar+=2;
                } else {
                    ++_currentChar;
                }
            }
            _text_generator->set_left_alignment();
            _top_text_sprites.clear();
            _middle_text_sprites.clear();
            _bottom_text_sprites.clear();
            // some cool logic to split things into 3 lines of text
            bn::vector<bn::string_view, 3> lines = split_to_lines(_currentChars, _dialog_lines->at(_currentLine).text());
            for(int i = 0; i < lines.size(); ++i){
                if(i == 0){
                    _text_generator->generate(-56, -16, lines.at(0), _top_text_sprites);
                } else if (i == 1){
                    _text_generator->generate(-56, 0, lines.at(1), _middle_text_sprites);
                } else if (i == 2){
                    _text_generator->generate(-56, 16, lines.at(2), _bottom_text_sprites);
                }
            }
        } else {
            _top_text_sprites.clear();
            _middle_text_sprites.clear();
            _bottom_text_sprites.clear();
        }

        //loop through dialog
    }
}