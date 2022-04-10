#pragma once

/// Regroups game logic into game modes or utilities.
enum GPHASE_LAYER : int
{
  /// GPHASE: 0
  SYSTEM_INIT,

  /// GPHASE: 1 - 10
  GAME_INIT,

  /// GPHASE: 11 - 48
  STORY,

  /// GPHASE: 49 - 78
  TITLE,

  /// GPHASE: 79 - 83
  SAVE,

  /// GPHASE: 84 - 88
  MISSION
};


/// Game Phases (GPHASE) of the game. Used to layout the game logic and group functions goals.
enum GPHASE_ID : int
{
  SUPER,
  BOOT_INIT,
  AUTOLOAD_MAIN,
  OUT_GAME_MAIN,
  STORY_MAIN,
  GAME_OVER_MENU,
  ENDING_MOVIE,
  GAME_RESULT,
  CLEAR_MENU,
  SOFT_RESET_MAIN,
  DEBUG_MENU,
  TECMO_MODE,
  PROJECT_MODE,
  TITLE_MODE,
  TITLE_MOVIE_MODE,
  STORY_NOW_LOADING,
  STORY_NORMAL,
  STORY_DAMAGE,
  STORY_DOOR_OPEN,
  STORY_DEBUG,
  STORY_DEBUG_CAM,
  STORY_PAUSE,
  STORY_PAUSE_MISSION,
  STORY_MENU,
  STORY_MAP,
  STORY_MISSION_ST,
  STORY_MISSION_RESULT,
  STORY_GAME_OVER_PRE,
  STORY_GAME_OVER,
  STORY_SCENE,
  STORY_MOVIE,
  STORY_EFFECT,
  EVENT_MSG_DISP,
  EVENT_FILE_DISP,
  STORY_PHOTO,
  STORY_ENE_DEAD,
  STORY_PUZZLE,
  STORY_SAVEPOINT,
  STORY_MOVIE_ROOM_SEL,
  GAME_OVER_MENU_TOP,
  GAME_OVER_MENU_LOAD,
  GAME_OVER_MENU_ALBUM,
  ENDING_NORMAL1,
  ENDING_NORMAL2,
  ENDING_HARD,
  GAME_RESULT_TOP,
  CLEAR_MENU_TOP,
  CLEAR_MENU_SAVE,
  CLEAR_MENU_ALBUM,
  TITLE_TOP,
  TITLE_MENU,
  TITLE_NEW_GAME,
  TITLE_LOAD_GAME,
  TITLE_SETUP,
  TITLE_ALBUM,
  TITLE_GALLERY,
  TITLE_OPTION,
  TITLE_CHAPTER_SEL,
  STORY_LOAD_MISSION,
  STORY_LOAD_MISSION_EVENT,
  STORY_LOAD_MISSION_SAVE,
  STORY_GAME_OVER_EFF,
  STORY_GAME_OVER_FADE,
  STORY_GAME_OVER_MOVIE_PRELOAD,
  STORY_SCENE_PRELOAD,
  STORY_SCENE_MAIN,
  STORY_MOVIE_PRELOAD,
  STORY_MOVIE_MAIN,
  PUZZLE_IN_CONF,
  PUZZLE_CROSS_FADE,
  PUZZLE_HINA,
  PUZZLE_ROKU,
  PUZZLE_KAZA,
  PUZZLE_KAZA2,
  PUZZLE_KAI1,
  PUZZLE_KAI2,
  SAVEPOINT_FADEIN,
  SAVEPOINT_MAIN,
  SAVEPOINT_FADEOUT,
  TITLE_SETUP_MENU,
  TITLE_MISSION,
  SAVEPOINT_TOP,
  SAVEPOINT_SAVE,
  SAVEPOINT_ALBUM,
  MISSION_SEL,
  MISSION_CAM,
  MISSION_ALBUM,
  MISSION_SAVE
};