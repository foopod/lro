#ifndef LRO_STATE_H
#define LRO_STATE_H

#include "bn_vector.h"

namespace lro
{
    class State
    {
        private :
            char _label[8] = {};
            int _level = 0;
            int _academy[500] = {};
            bool _is_alt_colour = false;
        public : 
            State();
            void init();
            void write();

            [[nodiscard]] int get_last_completed_level(){
                return _level;
            }
            void completeLevel(int level);

            [[nodiscard]] bn::vector<int, 500> get_best_min_moves_list(){
                bn::vector<int, 500> tmp = bn::vector<int,500>(500,0);
                for(int i = 0; i < 500; i++){
                    tmp[i] = _academy[i];
                }
                return tmp;
            }
            void set_best_min_move(int index, int score);

            [[nodiscard]] bool is_alt_colour(){
                return _is_alt_colour;
            }
            void set_alt_colour(bool is_alt_colour);
    };
}

#endif
