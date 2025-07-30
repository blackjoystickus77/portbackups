#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_castle_inside_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-57,-727,-895),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x13c1700),
TERRAIN(col_castle_inside_1_0xe012318),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,56,-727,-1070,0,0,0,0x0, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-33,-340,4331,0,-154,0,0x0, bhvFadingWarp,31),
OBJECT_WITH_ACTS(187,-104,-727,-1340,0,-153,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,848,-725,-879,0,107,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-693,-723,-94,0,-151,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,552,-365,-1363,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,0,-521,0,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-1394,-104,-151,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-1052,-521,-1909,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(0,-17,-208,1105,0,0,0,0x10000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(187,-1287,-573,-928,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(0,-67,-485,1203,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(212,-72,1146,4302,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,10,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,0,0),
WARP_NODE(241,6,1,0,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
