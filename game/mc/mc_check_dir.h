#pragma once

namespace MC_CHECK_DIR
{
enum MC_CHECK_DIR_CTRL_ENUM
{
  INIT,
  ENUM_UNKNOWN2,
  ENUM_UNKNOWN3,
  UNKNOWN4
};

enum MC_CHECK_DIR_CTRL2_ENUM
{
  E0,
  E1,
  E2,
  E3,
  E4
};
}// namespace MC_CHECK_DIR

struct MC_CHECK_DIR_CTRL
{
  MC_CHECK_DIR::MC_CHECK_DIR_CTRL_ENUM eMcCheckDirCtrl;
  MC_CHECK_DIR::MC_CHECK_DIR_CTRL2_ENUM eMcCheckDirCtrl2;
  char pad[2];
  int unknown_0x04;
  int unknown_0x08;
  char dir[0x37];
};

inline MC_CHECK_DIR_CTRL mc_check_dir_ctrl;
inline char *mc_dir_info[0x37];

char *MemoryCardGetDirInfoInit(int param1, int param2, char *dirname);
int MemoryCardGetDirInfoMain();
char *MemoryCardGetDirInfoReq(int param1, int param2, char *dirname);