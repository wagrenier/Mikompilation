#pragma once

#include "MemoryCard/autoload.h"
#include "game_main.h"

/// Header file for joining all game functions
/// found in the funcs array

inline const int gphase_num = 94;

inline void (*ini_func[gphase_num])() =
    {
        init_super,
        init_Boot_Init,
        init_AutoLoad_Main
};

inline void (*end_func[gphase_num])() =
    {
        end_super,
        end_Boot_Init,
        end_AutoLoad_Main
};

inline GPHASE_ID (*pre_func[gphase_num])(GPHASE_ID) =
    {
        pre_super,
        nullptr,
        nullptr
};

inline GPHASE_ID (*after_func[gphase_num])(GPHASE_ID) =
    {
        after_super,
        one_Boot_Init,
        one_AutoLoad_Main
};
