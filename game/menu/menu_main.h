#pragma once

#include "texture/Sprite.h"

inline SPRT_DAT menudat[2] = {
    /// Sprite for Main menu
    {
        0x2006180665322BC0,
        0x1,
        0x1,
        0x1FE,
        0x1C0,
        0x0,
        0x0,
        0x0,
        0x0,
        0x0,
        0x80,
        0x0,
        {0x1, 0x0}
    },
    {
        0x2006188621312FC0,
        0x1,
        0x1,
        0x1FE,
        0x1C0,
        0x0,
        0x0,
        0x0,
        0x0,
        0x0,
        0x80,
        0x0,
        {0x1, 0x0}
    }
};

void InitMenu();
void RenderMenu();
