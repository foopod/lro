#include "lro_state.h"

#include "bn_sram.h"
#include "bn_vector.h"
#include "bn_sstream.h"
#include "bn_string_view.h"
#include "bn_log.h"

namespace lro
{
    
namespace
{
    struct sram_data
    {
        constexpr static const char* valid_label = "lro003";

        char label[8] = {};
        int level = 0;
        int academy[500] = {};

        [[nodiscard]] bool read()
        {
            bn::sram::read(*this);
            return bn::string_view(label) == valid_label;
        }

        void write()
        {
            bn::istring_base label_istring(label);
            bn::ostringstream label_stream(label_istring);
            label_stream.append(valid_label);
            bn::sram::write(*this);
        }
    };

    void _write_sram(State& state)
    {
        sram_data sram_data_to_write;
        sram_data_to_write.level = state.get_last_completed_level();
        bn::vector<int, 500> tmp_v = state.get_best_min_moves_list();
        for(int i = 0; i<500; i++){
            sram_data_to_write.academy[i] = tmp_v.at(i);
        }
        sram_data_to_write.write();
    }
}

    State::State()
    {
        sram_data sram_data_to_read;
        

        if(sram_data_to_read.read()){
            _level = sram_data_to_read.level;
            for(int i = 0; i<500; i++){
                _academy[i] = sram_data_to_read.academy[i];
            }
        }
    }

    void State::completeLevel(int level)
    {
        _level = level;
        _write_sram(*this);
    }

    void State::set_best_min_move(int index, int score)
    {
        _academy[index] = score;
        _write_sram(*this);
    }
}
