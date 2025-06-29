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
#include "levels/rr/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_rr_1[] = {
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -5850, -1000,   -50),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -2950,  -190,   -50),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -5850,  1150,    50),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -5050,   800,   -50),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -4550,   650,   -50),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -5300,   200,   -50),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -3550,  1000,   -50),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -5800,  -400,   -50),
    MACRO_OBJECT(/*preset*/ macro_bobomb_buddy_opens_cannon,   /*yaw*/   0, /*pos*/ -4200,  1648,     0),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_cannon_closed,               /*yaw*/   0, /*pos*/  5545,  3333, -2345, /*behParam*/ 0xC0),
    MACRO_OBJECT(/*preset*/ macro_box_1up,                     /*yaw*/   0, /*pos*/ -6750,  2600,   -50),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_circling_amp,                /*yaw*/   0, /*pos*/  6500,  -900,   900, /*behParam*/ 1),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/  6500, -1000,   900),
    MACRO_OBJECT(/*preset*/ macro_enemy_lakitu,                /*yaw*/   0, /*pos*/   615,  -584,     0),
    MACRO_OBJECT(/*preset*/ macro_recovery_heart,              /*yaw*/   0, /*pos*/  -550, -1050,   -50),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal_flying, /*yaw*/   0, /*pos*/   600, -1040,  1200),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal_flying, /*yaw*/   0, /*pos*/   600, -1040, -1300),
    MACRO_OBJECT(/*preset*/ macro_recovery_heart,              /*yaw*/   0, /*pos*/ -7071, -1705,   -31),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/ -3295, -1782,   524),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/ -5872, -1782,   572),
    MACRO_OBJECT(/*preset*/ macro_fly_guy,                     /*yaw*/   0, /*pos*/   971, -3059,  4912),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/   0, /*pos*/   615, -3275,  5660),
    MACRO_OBJECT(/*preset*/ macro_coin_line_vertical,          /*yaw*/   0, /*pos*/ -2203, -3500,  6572),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/ -1866, -1116,  4933),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/   799, -1446,  6622),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/  6666, -1000,  6533),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/  3960,   -41, -3640),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/  5680,   600, -2400),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_no_coins,      /*yaw*/   0, /*pos*/  2560,  1000, -1600),
    MACRO_OBJECT(/*preset*/ macro_goomba,                      /*yaw*/   0, /*pos*/ -1440, -1960,  6640),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/  5040,  2100,   280),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_in_pole,          /*yaw*/   0, /*pos*/  3542,  4892, -2371),
    MACRO_OBJECT(/*preset*/ macro_enemy_lakitu,                /*yaw*/   0, /*pos*/  4714,  3507, -2371),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/  3485,  2889, -2057),
    MACRO_OBJECT(/*preset*/ macro_bobomb,                      /*yaw*/   0, /*pos*/  2628,  2893, -2371),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/  3542,  2923, -2371),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/   0, /*pos*/ -3342,  3222, -5071),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/   0, /*pos*/ -7771,  4352, -3871),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_circling_amp,                /*yaw*/   0, /*pos*/ -6571,  4000, -2328, /*behParam*/ 1),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal_flying, /*yaw*/  90, /*pos*/ -6057,  4676, -5242),
    MACRO_OBJECT(/*preset*/ macro_chuckya,                     /*yaw*/   0, /*pos*/  5114,  3828,  4028),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/  -165,  3543, -2352),
    MACRO_OBJECT(/*preset*/ macro_coin_line_vertical,          /*yaw*/   0, /*pos*/   250,  1400,  -180),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/  -735,  2860,  -150),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_in_pole,          /*yaw*/   0, /*pos*/ -2175,  2365,   -60),
    MACRO_OBJECT(/*preset*/ macro_blue_coin_switch,            /*yaw*/   0, /*pos*/ -6930, -1791,   521),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -6500,  1700,     0),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -6200,  1700,     0),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -5900,  1700,     0),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -5600,  1700,     0),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -6750, -1495,     0),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -5300,  1700,     0),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/ -3233,  1291,   -52),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/ -7338, -2260,  6700),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/ -7338, -2260,  6350),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/ -6715, -1900,  6700),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/ -6715, -1900,  6350),
    MACRO_OBJECT(/*preset*/ macro_box_1up_running_away,        /*yaw*/   0, /*pos*/ -4844, -4240,  6622),
    MACRO_OBJECT(/*preset*/ macro_box_1up_running_away,        /*yaw*/   0, /*pos*/ -3428,  6770, -5128),
    MACRO_OBJECT(/*preset*/ macro_box_star_6,                  /*yaw*/   0, /*pos*/  5000,  4100,  4440),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/ -6000,  -440,   -40),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_RR_SLIDING_PLATFORM,         /*pos*/ -3400, -2038,  6564, /*angle*/  0,   0,   0, /*behParam*/ 0x02560000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_RR_SLIDING_PLATFORM,         /*pos*/ -2684, -1423,   -36, /*angle*/  0,   0,   0, /*behParam*/ 0x02590000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/  4571, -1782,  2036, /*angle*/  0, 180,   0, /*behParam*/ 0x00000000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/   580,  -963, -3659, /*angle*/  0, 180,   0, /*behParam*/ 0x00010000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/  1567,   880,  -184, /*angle*/  0, 180,   0, /*behParam*/ 0x00070000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/   646,   880,  -184, /*angle*/  0,   0,   0, /*behParam*/ 0x00080000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/   644, -1321, -1301, /*angle*/  0, 180,   0, /*behParam*/ 0x03010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/  1797, -1321,   -56, /*angle*/  0,   0,   0, /*behParam*/ 0x00010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/   663, -1321,  1179, /*angle*/  0, 180,   0, /*behParam*/ 0x03010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/  -502, -1321,   -51, /*angle*/  0,   0,   0, /*behParam*/ 0x00010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_ROTATING_BRIDGE_PLATFORM, /*pos*/  5043,  1342,   300, /*angle*/  0,   0,   0, /*behParam*/ 0x00010000, /*beh*/ bhvRrRotatingBridgePlatform),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  3473,  2422, -1821, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  4084,  2431, -2883, /*angle*/ 45, 180, 180, /*behParam*/ 0x00010000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  3470,  2420, -2869, /*angle*/ 45, 180, 180, /*behParam*/ 0x00010000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  2856,  2410, -2855, /*angle*/ 45, 180, 180, /*behParam*/ 0x00010000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  4101,  2435, -1813, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  2859,  2411, -1834, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_SEESAW_PLATFORM,          /*pos*/ -6013, -2857,  6564, /*angle*/  0, 270,   0, /*behParam*/ 0x00050000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_RR_SEESAW_PLATFORM,          /*pos*/   614, -3574,  6564, /*angle*/  0, 270,   0, /*behParam*/ 0x00050000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_RR_SWINGING_PLATFORM,        /*pos*/ -3557,  -809,  4619, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvSwingPlatform),
    OBJECT(/*model*/ MODEL_RR_SWINGING_PLATFORM,        /*pos*/ -2213, -2582,  6257, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvSwingPlatform),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/     0,     0,     0, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvDonutPlatformSpawner),
    OBJECT(/*model*/ MODEL_RR_ELEVATOR_PLATFORM,        /*pos*/ -2684,  1546,   -36, /*angle*/  0,   0,   0, /*behParam*/ 0x00050000, /*beh*/ bhvRrElevatorPlatform),
    OBJECT(/*model*/ MODEL_RR_TRICKY_TRIANGLES,         /*pos*/  5862, -1347,  6564, /*angle*/  0,   0,   0, /*behParam*/ 0x00020000, /*beh*/ bhvAnimatesOnFloorSwitchPress),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,               /*pos*/  4428, -1936,  6564, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchAnimatesObject),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/   614, -2857,  3671, /*angle*/  0,   0,   0, /*behParam*/ 0x00CC0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/   621, -4598,  7362, /*angle*/  0,   0,   0, /*behParam*/ 0x00750000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5119,  3819,  3325, /*angle*/  0,   0,   0, /*behParam*/ 0x00610000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  3554,  2891, -2327, /*angle*/  0,   0,   0, /*behParam*/ 0x00C10000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  2680,   214,   295, /*angle*/  0,   0,   0, /*behParam*/ 0x00620000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  3811,  1033,   295, /*angle*/  0,   0,   0, /*behParam*/ 0x00620000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5809, -1834,  5719, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4838, -1015,  4081, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3301, -1834,  5617, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  6772,  -757,  -606, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4187,  3213, -6630, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  1450,  3400, -2352, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -4200,  6700, -4450, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -5150, -1400,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -5850,  -700,  4950, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  3700,  -400,  6600, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_rr_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group11_geoSegmentRomStart,  _group11_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),

    AREA(/*index*/ 1, rr_geo_0009D0),
MACRO_OBJECTS(local_macro_objects_rr_1),
WARP_NODE(241,6,2,108,0),
WARP_NODE(240,6,2,58,0),
WARP_NODE(12,15,1,11,0),
WARP_NODE(11,15,1,12,0),
WARP_NODE(10,15,1,10,0),
OBJECT_WITH_ACTS(122,3700,-400,6600,0,0,0,0x4000000, bhvStar,63),
OBJECT_WITH_ACTS(122,-5850,-700,4950,0,0,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(0,-5150,-1400,0,0,0,0,0x2000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,-4200,6700,-4450,0,0,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(122,1450,3400,-2352,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(0,-4187,3213,-6630,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,6772,-757,-606,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,3301,-1834,5617,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-4838,-1015,4081,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-5809,-1834,5719,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,3811,1033,295,0,0,0,0x620000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,2680,214,295,0,0,0,0x620000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,3554,2891,-2327,0,0,0,0xc10000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,5119,3819,3325,0,0,0,0x610000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,621,-4598,7362,0,0,0,0x750000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,614,-2857,3671,0,0,0,0xcc0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(207,4428,-1936,6564,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(65,5862,-1347,6564,0,0,0,0x20000, bhvAnimatesOnFloorSwitchPress,31),
OBJECT_WITH_ACTS(64,-2684,1546,-36,0,0,0,0x50000, bhvRrElevatorPlatform,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvDonutPlatformSpawner,31),
OBJECT_WITH_ACTS(62,-2213,-2582,6257,0,0,0,0x0, bhvSwingPlatform,31),
OBJECT_WITH_ACTS(62,-3557,-809,4619,0,0,0,0x0, bhvSwingPlatform,31),
OBJECT_WITH_ACTS(60,614,-3574,6564,0,270,0,0x50000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(60,-6013,-2857,6564,0,270,0,0x50000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(59,2859,2411,-1834,0,0,0,0x0, bhvRrCruiserWing,31),
OBJECT_WITH_ACTS(59,4101,2435,-1813,0,0,0,0x0, bhvRrCruiserWing,31),
OBJECT_WITH_ACTS(59,2856,2410,-2855,45,180,180,0x10000, bhvRrCruiserWing,31),
OBJECT_WITH_ACTS(59,3470,2420,-2869,45,180,180,0x10000, bhvRrCruiserWing,31),
OBJECT_WITH_ACTS(59,4084,2431,-2883,45,180,180,0x10000, bhvRrCruiserWing,31),
OBJECT_WITH_ACTS(59,3473,2422,-1821,0,0,0,0x0, bhvRrCruiserWing,31),
OBJECT_WITH_ACTS(57,5043,1342,300,0,0,0,0x10000, bhvRrRotatingBridgePlatform,31),
OBJECT_WITH_ACTS(56,-502,-1321,-51,0,0,0,0x10000, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(56,663,-1321,1179,0,180,0,0x3010000, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(56,1797,-1321,-56,0,0,0,0x10000, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(56,644,-1321,-1301,0,180,0,0x3010000, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(55,646,880,-184,0,0,0,0x80000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(55,1567,880,-184,0,180,0,0x70000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(55,580,-963,-3659,0,180,0,0x10000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(55,4571,-1782,2036,0,180,0,0x0, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(54,-2684,-1423,-36,0,0,0,0x2590000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(54,-3400,-2038,6564,0,0,0,0x2560000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(0,-4213,3379,-2815,0,180,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-7092,2364,-63,0,90,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2599,-833,2071,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ rr_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ 2599, -1833, 2071),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
