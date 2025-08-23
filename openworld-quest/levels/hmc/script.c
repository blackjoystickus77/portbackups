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
#include "levels/hmc/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_hmc_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,315,58466,2161,7070,36),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3570,205,65526,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop_2,0,65097,220,62996,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,80,140,60876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,800,60,58036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop_2,0,1880,100,57916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,315,2709,61257,5421,91),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,270,61116,62461,60036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug,0,59216,2048,6740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug,0,60081,1536,521,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1850,2048,6817,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,3277,2048,6778,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,45,58612,2440,7364,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug,0,4160,28,6308,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug,0,5392,28,3587,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,2260,64909,63876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,5760,64913,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,4560,64916,64037,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,5860,64986,64797,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,1939,64936,62616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,5100,64936,61036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,58956,1680,59756,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug_spawner,270,3240,60816,2360,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,61936,61296,3600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,62536,63286,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug_spawner,270,62116,1800,5960,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,6080,3060,4660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,5480,3000,7120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,62836,2060,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop_2,0,60096,1720,65216,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63316,2048,4440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,58025,1420,64870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,270,61086,2355,62966,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,5900,420,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,63886,700,750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,60576,2700,80,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,180,1400,1020,6690,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,65486,700,2050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,90,670,300,4870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63196,2040,4560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63076,2040,4660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63476,2040,4380,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63616,2040,4320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,5145,64769,62582,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3945,64513,62618,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3800,64513,61527,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3036,64678,61418,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2018,64615,61382,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1836,64615,60836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1836,64815,60836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1836,65015,60836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,2800,205,463,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,1800,65127,58146,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,63836,1843,58496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop_2,0,5632,64973,61082,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop_2,0,4915,64871,60262,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,5120,64871,60876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_swoop,0,5427,64871,60466,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,2439,64814,60037,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,2714,64768,61440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,3011,64768,64264,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,3324,64768,64061,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole,0,3940,64768,62656,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_i,0,4760,1060,4670,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_i,0,6800,1020,7000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62636,1620,4640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1420,65156,58496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2500,65156,57796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,62836,2100,59136,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4936, -357, -4146, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5018, -460, -5559, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1997,  666,  -235, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460, -2610, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4178, -255, -3737, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 2233, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5510, -255, -3429, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4690, -357,  -767, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3462, -255, -1125, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762,  666,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  3226, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1075,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  3697, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  7014, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3817,  717,  1034, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  799, 1024,  4434, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  889, 1024,  3277, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_HMC_METAL_PLATFORM,    /*pos*/  1100,   950,  6350, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvControllablePlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3243,  1434,  1392, /*angle*/ 0,  27, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -2816,  2253, -2509, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/  -973,  1741, -7347, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3533,  1741, -7040, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_NONE,                  /*pos*/   614, -4690,  2330, /*angle*/ 0, 270, 0, /*behParam*/ 0x00010000, /*beh*/ bhvOpenableGrill),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,         /*pos*/  -307, -4997,  2483, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchGrills),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM, /*pos*/  1270,  2000,  4000, /*angle*/ 0, 270, 0, /*behParam*/ 0x09A40000, /*beh*/ bhvPlatformOnTrack),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_DORRIE, /*pos*/ -3533, -4969,  3558, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDorrie),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/ -6093,  3075, -7807, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBigBoulderGenerator),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -3600, -4000,  3600, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  4000,   300,  5000, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  6200, -4400,  2300, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2100,  2100, -7550, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -6500,  2700, -1600, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -5000,  3050, -6700, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_hmc_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_7),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),

    AREA(/*index*/ 1, hmc_geo_000B90),
MACRO_OBJECTS(local_macro_objects_hmc_1),
WARP_NODE(241,7,1,241,0),
WARP_NODE(240,7,1,240,0),
WARP_NODE(11,18,1,10,0),
WARP_NODE(10,10,1,14,0),
OBJECT_WITH_ACTS(122,-5000,3050,-6700,0,225,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-6500,2700,-1600,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-2100,2100,-7550,0,75,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,6340,-4400,2340,0,270,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,4050,300,4950,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3600,-4000,3600,0,0,0,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(0,-500,1600,3800,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-500,1600,3500,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-6093,3075,-7807,0,0,0,0x0, bhvBigBoulderGenerator,31),
OBJECT_WITH_ACTS(104,-3533,-4969,3558,0,0,0,0x0, bhvDorrie,31),
OBJECT_WITH_ACTS(207,-307,-4996,2483,0,270,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,614,-4690,2330,0,270,0,0x10000, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(56,-3533,1741,-7040,0,0,0,0x30000, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(56,-973,1741,-7347,0,0,0,0x20000, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(56,-2816,2253,-2509,0,0,0,0x10000, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(56,-3243,1434,1392,0,27,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(0,889,1024,3277,0,0,0,0xb80000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,799,1024,4434,0,0,0,0xb80000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(144,3817,717,1034,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(217,3067,-4723,5055,0,45,-10,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(144,6912,461,3697,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,6912,461,6543,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,-6376,2612,6376,0,135,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-6376,2612,6376,0,315,0,0xf10000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(144,1762,-460,256,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1762,666,0,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,3462,-255,-1125,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,4690,-357,-767,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,5510,-255,-3429,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,2233,-460,256,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,4178,-255,-3737,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1762,-460,-2610,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1997,666,-235,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,5018,-460,-5559,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,4936,-357,-4146,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,3351,-4595,4773,0,315,0,0x340b0000, bhvWarp,31),
OBJECT_WITH_ACTS(31,-7860,2161,7860,0,135,0,0xa0000, bhvDoorWarp,31),
        TERRAIN(/*terrainData*/ hmc_seg7_collision_level),
        ROOMS(/*surfaceRooms*/ hmc_seg7_rooms),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ 36),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 135, /*pos*/ -7152, 2161, 7181),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
