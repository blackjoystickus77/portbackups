#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/jrb/header.h"
#include "level_misc_macros.h"
#include "macro_presets.h"
static const MacroObject local_macro_objects_jrb_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,300,58136,1430,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,5060,61116,720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,70,63236,1650,6850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,63756,64886,4200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,90,61336,0,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,4269,29336,4866,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,4128,29336,5007,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,3400,29336,5155,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,3261,29336,5294,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,3120,29336,5435,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,3551,60416,2744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,4201,60416,3863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,63096,62556,61416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,62123,62570,63413,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,4846,60417,1213,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,64736,64513,4040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,3621,29336,6529,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,3485,29336,6665,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,2671,29336,6459,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63771,1258,5530,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63101,1258,4565,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63011,1258,3375,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,61706,1258,3375,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,60626,1258,2635,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,62781,1092,2598,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,64768,1092,4800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,2058,1196,3551,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,58732,1126,2041,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,78,63001,2018,6113,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,315,63736,64513,3500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,225,65056,512,5980,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,270,62233,62570,62570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,90,3600,60417,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63013,65290,4676,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,5876,60798,3476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,6011,62570,58725,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,5900,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,5300,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,4700,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,4100,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3500,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2900,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,3305,62570,59389,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,255,1160,7633,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,51,960,2744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,42,58810,829,65140,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,270,6200,60417,2200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,4072,61073,2027,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,65246,190,4645,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,61301,1247,2137,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,2536,29336,6594,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,4220,1536,5700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,45,3987,29336,5148,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,3280,1536,5940,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,3200,1536,6720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,157,64236,512,7020,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,191,58981,1126,406,35),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,59936,1430,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,670,3000,3315,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,1483,1536,7021,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,180,64056,64496,4820,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,5150,62570,61336,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_jrb_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,0,1600,3000,0),
MACRO_OBJECT_END(),
};

static const MacroObject local_macro_objects_jrb_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,0,1600,3000,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SUNKEN_SHIP,          /*pos*/  2385,  3589,  3727, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SUNKEN_SHIP_BACK,     /*pos*/  2385,  3589,  3727, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_LEFT_HALF_PART,  /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart2,        /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_RIGHT_HALF_PART, /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart2,        /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip,            /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip2,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_LEFT_HALF_PART,  /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_BACK_LEFT_PART,  /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_RIGHT_HALF_PART, /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_BACK_RIGHT_PART, /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip3,          /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SLIDING_BOX,          /*pos*/  4668,  1434,  2916, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJrbSlidingBox,           /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  6048, -5381,  1154, /*angle*/ 0, 340, 0, /*behParam*/ 0x00000000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  8270, -3130,  1846, /*angle*/ 0, 285, 0, /*behParam*/ 0x01010000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  6048, -5381,  1154, /*angle*/ 0, 340, 0, /*behParam*/ 0x02020000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  4988, -5221,  2473, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream,                /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -1800, -2812, -2100, /*angle*/ 0,   0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvTreasureChestsJrb),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,             /*pos*/ -1956,  1331,  6500, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBobombBuddyOpensCannon, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1834, -2556, -7090, /*angle*/ 0, 194, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -2005, -2556, -3506, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1578, -2556, -5554, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/    42, -2556, -6578, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -981, -2556, -5298, /*angle*/ 0, 255, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -6549,  1536,  4343, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1322, -2556, -3506, /*angle*/ 0, 165, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6442, -2556, -6322, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3882, -2556, -5042, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1497,  1741,  7810, /*angle*/ 0,  14, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -3978,  1536,   -85, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5228,  1230,  2106, /*angle*/ 0, 323, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -7481,  1536,   185, /*angle*/ 0, 149, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5749,  1536, -1113, /*angle*/ 0, 255, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5332,  1434,  1023, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -815,  -613,  3556, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -3429,   819,  4948, /*angle*/ 0, 284, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -1940,   410,  2377, /*angle*/ 0, 194, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -1798,  -716,  4330, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -845,   922,  7668, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6741, -2886,  3556, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/   255,  -101,  4719, /*angle*/ 0,  45, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1787,  -306,  5133, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1079,  -613,  2299, /*angle*/ 0,  75, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  2931, -1697,   980, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3036, -4709,  4027, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  4222, -1125,  7083, /*angle*/ 0, 104, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6650,  -613,  4941, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  5764, -4709,  4427, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3693, -4709,   856, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  7981,   410,  2704, /*angle*/ 0, 165, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  2917, -3046,  4818, /*angle*/ 0, 241, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  5896,  -393,  -123, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/    53,  2355,  2724, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/   659,  2560,  3314, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/  1087,  2150,  3798, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -2535,  1075,  6113, /*angle*/ 0,   0, 0, /*behParam*/ 0x00610000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  2078, -2863, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/ -1403, -2863, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/ -1096, -2863, -3262, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/   337, -2863, -5106, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  2078, -2863, -6232, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  4330, -2863, -5618, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  2078, -2966, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/ -1403, -2966, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/ -1096, -2966, -3262, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/   337, -2966, -5106, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  2078, -2966, -6232, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  4330, -2966, -5618, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FLOATING_PLATFORM,    /*pos*/ -1059,  1025,  7072, /*angle*/ 0, 247, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJrbFloatingPlatform),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -4236, 1044, 2136,   /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInsideCannon),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,            /*pos*/ 4900,  2400,   800, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
#ifdef VERSION_JP
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,            /*pos*/ 1540,  2160,  2130, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
#else
    OBJECT_WITH_ACTS(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 1540,  2160,  2130, /*angle*/ 0, 0, 0, /*behParam*/ 0x04080000, /*beh*/ bhvExclamationBox,      /*acts*/ ALL_ACTS),
#endif
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,            /*pos*/ 5000, -4800,  2500, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  400,  -350, -2700, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTreasureChestsShip),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    RETURN(),
};

const LevelScript level_jrb_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART,  jrb_geo_000978),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART,  jrb_geo_0009B0),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP,          jrb_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK,     jrb_geo_0009C8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK,                 jrb_geo_000930),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX,          jrb_geo_000960),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR,       jrb_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE,  jrb_geo_000918),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM,    jrb_geo_000948),

    AREA(/*index*/ 1, jrb_geo_000A18),
MACRO_OBJECTS(local_macro_objects_jrb_1),
WARP_NODE(241,26,1,11,0),
WARP_NODE(240,26,1,10,0),
WARP_NODE(1,36,1,10,0),
WARP_NODE(10,26,1,5,0),
OBJECT_WITH_ACTS(122,4900,2800,-300,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(137,7170,-3146,2180,0,15,0,0x4080000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,-4236,1044,2136,0,0,0,0x0, bhvInsideCannon
,31),
OBJECT_WITH_ACTS(63,5912,0,2772,0,0,0,0x0, bhvJrbFloatingPlatform
,31),
OBJECT_WITH_ACTS(62,4330,-2966,-5618,0,90,0,0x0, bhvPillarBase
,31),
OBJECT_WITH_ACTS(62,2078,-2966,-6232,0,90,0,0x0, bhvPillarBase
,31),
OBJECT_WITH_ACTS(62,337,-2966,-5106,0,90,0,0x0, bhvPillarBase
,31),
OBJECT_WITH_ACTS(62,-1096,-2966,-3262,0,90,0,0x0, bhvPillarBase
,31),
OBJECT_WITH_ACTS(62,-1403,-2966,-4696,0,90,0,0x0, bhvPillarBase
,31),
OBJECT_WITH_ACTS(62,2078,-2966,-4696,0,90,0,0x0, bhvPillarBase
,31),
OBJECT_WITH_ACTS(61,4330,-2863,-5618,0,90,0,0x0, bhvFallingPillar
,31),
OBJECT_WITH_ACTS(61,2078,-2863,-6232,0,90,0,0x0, bhvFallingPillar
,31),
OBJECT_WITH_ACTS(61,337,-2863,-5106,0,90,0,0x0, bhvFallingPillar
,31),
OBJECT_WITH_ACTS(61,-1096,-2863,-3262,0,90,0,0x0, bhvFallingPillar
,31),
OBJECT_WITH_ACTS(61,-1403,-2863,-4696,0,90,0,0x0, bhvFallingPillar
,31),
OBJECT_WITH_ACTS(61,2078,-2863,-4696,0,90,0,0x0, bhvFallingPillar
,31),
OBJECT_WITH_ACTS(0,-2535,1075,6113,0,0,0,0x610000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,1087,2150,3798,0,0,0,0x290000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,659,2560,3314,0,0,0,0x290000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,53,2355,2724,0,0,0,0x290000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-6928,1447,2077,0,315,0,0x5000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(59,2917,-3046,4818,0,241,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,7981,410,2704,0,165,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,4555,-4710,2705,0,45,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,4584,-4710,2239,0,65,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,5281,-4710,2113,0,0,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,5247,-4710,2914,0,0,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,5450,-4710,2552,0,10,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,2931,-1697,980,0,315,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,1079,-613,2299,0,75,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,1787,-306,5133,0,315,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(132,3642,-5099,3175,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,0,-371,3556,0,135,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,0,-121,4908,0,315,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,-4520,701,4330,0,0,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,0,410,2377,0,194,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,-4088,915,6291,359,55,359,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,-5749,1536,-1113,0,255,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,-7481,1536,185,0,149,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(129,-1765,1021,5530,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2435,1021,4565,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2525,1021,3375,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-3830,1021,3375,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-4910,1021,2635,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(59,3882,-2556,-5042,0,0,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,6442,-2556,-6322,0,135,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,1322,-2556,-3506,0,165,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,-6549,1536,4334,0,315,3,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,-981,-2556,-5298,0,255,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,42,-2556,-6578,0,135,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,1578,-2556,-5554,0,90,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,-2005,-2556,-3506,0,135,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(59,1834,-2556,-7090,0,194,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(195,700,-511,4500,0,0,0,0x80000, bhvBobombBuddy
,31),
OBJECT_WITH_ACTS(122,-1848,-2482,-1552,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(139,5008,-5206,2468,90,305,0,0x5010000, bhvWarp
,31),
OBJECT_WITH_ACTS(195,7128,-3476,2029,0,285,0,0x0, bhvBobombBuddyOpensCannon
,31),
OBJECT_WITH_ACTS(137,1600,2200,2150,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(63,3812,0,2722,0,0,0,0x0, bhvJrbFloatingPlatform
,31),
OBJECT_WITH_ACTS(0,4880,820,2375,0,0,0,0x0, bhvInSunkenShip3
,31),
OBJECT_WITH_ACTS(56,4880,820,2375,0,0,0,0x0, bhvShipPart3
,31),
OBJECT_WITH_ACTS(55,4880,820,2375,0,0,0,0x0, bhvShipPart3
,31),
OBJECT_WITH_ACTS(54,4880,820,2375,0,0,0,0x0, bhvShipPart3
,31),
OBJECT_WITH_ACTS(53,4880,820,2375,0,0,0,0x0, bhvShipPart3
,31),
OBJECT_WITH_ACTS(0,4945,-5248,2428,0,0,0,0x0, bhvJetStream
,31),
OBJECT_WITH_ACTS(59,4895,-4710,1988,0,0,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(0,5385,-5520,2428,0,0,0,0x0, bhvInitializeChangingWaterLevel
,31),
OBJECT_WITH_ACTS(132,-1455,-1030,4826,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,4810,-4838,2994,0,0,0,0x0, bhvRockSolid
,31),
OBJECT_WITH_ACTS(139,-6747,1144,-420,90,41,0,0x50a0000, bhvWarp
,31),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 3, /*pos*/ 4979, -5222, 2482, /*strength*/ -30),
        TERRAIN(/*terrainData*/ jrb_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ 48),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    AREA(/*index*/ 2, jrb_geo_000AFC),
MACRO_OBJECTS(local_macro_objects_jrb_2),
WARP_NODE(241,6,1,103,0),
WARP_NODE(240,6,1,53,0),
WARP_NODE(10,12,2,10,0),
OBJECT_WITH_ACTS(0,400,-350,-2700,0,0,0,0x0, bhvTreasureChestsShip
,31),
OBJECT_WITH_ACTS(0,928,1050,-1248,0,180,0,0xa0000, bhvSwimmingWarp
,31),
        TERRAIN(/*terrainData*/ jrb_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -6750, 1126, 1482),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
