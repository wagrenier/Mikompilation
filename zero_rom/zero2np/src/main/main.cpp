#include "main.h"

static int soft_reset_disable;
OPTION_WRK opt_wrk;

int main(int argc, char **args)
{
  InitGPhaseSys();

  do
  {
    GPhaseSysMain();
  }
  while (true);

  return 0;
}

void init_super()
{
  InitCostume();
  soft_reset_disable = 0;
  //playPssInit();
  InitLogo();
  LoadingInit();
  TitleInit();
  InitOptionSetup(&opt_wrk);
}

void end_super()
{
}

GPHASE_ENUM after_super(GPHASE_ENUM result)
{
  return GPHASE_CONTINUE;
}

GPHASE_ENUM pre_super(GPHASE_ENUM super)
{
  return GPHASE_CONTINUE;
}
