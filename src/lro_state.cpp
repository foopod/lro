#include "lro_state.h"

#include "bn_sram.h"
#include "bn_vector.h"
#include "bn_sstream.h"
#include "bn_string_view.h"
#include "bn_log.h"

namespace lro
{
    
// namespace
// {
//     struct sram_data
//     {
//         constexpr static const char* valid_label = "lro004";

//         char label[8] = {};
//         int level = 0;
//         int academy[500] = {};
//         bool is_alt_colour = false;

//         // [[nodiscard]] bool read()
//         // {
//         //     sram_data copy;
//         //     bn::sram::read(copy);
//         //     if(bn::string_view(copy.label) == valid_label){
//         //         *this = copy;
//         //         return true;
//         //     } else {
//         //         return false;
//         //     }
//         // }

//         [[nodiscard]] bool init()
//         {
//             sram_data copy;
//             bn::sram::read(copy);
//             if(bn::string_view(copy.label) == valid_label){
//                 *this = copy;
//             } else {
//                 bn::istring_base label_istring(label);
//                 bn::ostringstream label_stream(label_istring);
//                 label_stream.append(valid_label);
//                 for(int i = 0; i<500; i++){
//                     academy[i] = 0;
//                 }
//             }
//         }

//         void write()
//         {
//             bn::sram::write(*this);
//         }
//     };

//     void _write_sram(State& state)
//     {
//         sram_data sram_data_to_write;
//         sram_data_to_write.level = state.get_last_completed_level();
//         sram_data_to_write.is_alt_colour = state.is_alt_colour();
//         bn::vector<int, 500> tmp_v = state.get_best_min_moves_list();
//         for(int i = 0; i<500; i++){
//             sram_data_to_write.academy[i] = tmp_v.at(i);
//         }
//         sram_data_to_write.write();
//     }
// }

    // State::State()
    // {
    //     sram_data sram_data_to_read;
    //     _level = sram_data_to_read.level;
    //     _is_alt_colour = sram_data_to_read.is_alt_colour;
    //     for(int i = 0; i<500; i++){
    //         _academy[i] = sram_data_to_read.academy[i];
    //     }
    // }

    namespace
    {
        constexpr bn::string_view valid_label = "lr005";
    }

    State::State()
    {
        for(int i = 0; i < 500; i++){
            _academy[i] = 0;
        }
        _level = 0;
        _is_alt_colour = false;
    }

    void State::init(){
        State copy;
        bn::sram::read(copy);

        if(bn::string_view(copy._label) == valid_label)
        {
            *this = copy;
        }
        else
        {
            bn::istring_base label_istring(_label);
            bn::ostringstream label_stream(label_istring);
            label_stream.append(valid_label);
        }
    }

    void State::write()
    {
        bn::sram::write(*this);
    }

    void State::completeLevel(int level)
    {
        _level = level;
        write();
    }

    void State::set_best_min_move(int index, int score)
    {
        _academy[index] = score;
        write();
    }

    void State::set_alt_colour(bool is_alt_colour)
    {
        _is_alt_colour = is_alt_colour;
        write();
    }
}
