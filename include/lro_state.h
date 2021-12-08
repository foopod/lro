#ifndef LRO_STATE_H
#define LRO_STATE_H

namespace lro
{
    class State
    {
        private :
            int _level = 0;
            
        public : 
            State();

            [[nodiscard]] int get_last_completed_level(){
                return _level;
            }
            void completeLevel(int level);
    };
}

#endif
