#pragma once

#include "../common/math/VectorMath.h"
#include <iostream>

// Note that in Fatal Frame engine. _wrk will always imply a struct

typedef struct plyr_wrk {
};

// Assuming there's any data on flying ghost position and queued in here we care about.
typedef struct fly_wrk {
};

typedef struct ingame_wrk {
  // This could be a bool or a bitmask. I actually think this is a bit mask of some type given it's behaviour when testing
  // raw dec value, 1536 is ingame mode.
  std::uint16_t gameMode{};
  // Writing 1 to this ingame will reset everything and start a new game sending you to the first cutscene and zero hour.
  // This seems to have no effect on the title screen. Only ingame.
  // Ghidra really seems to think this is a byte
  uint8_t field2;
};

typedef struct title_wrk {
  // This is representing field 7 in title_wrk. That is an int index to what option is highlighted on the title screen.
  int cursorIndex;
};