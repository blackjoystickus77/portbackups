#include "custom.model.inc.h"
const GeoLayout exclamation_box_outline_geo[]= {
GEO_CULLING_RADIUS(300),
GEO_OPEN_NODE(),
GEO_SHADOW(10,180,70),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(4, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(5,DL_exclamation_box_outline_geo_0x8024f88),
GEO_DISPLAY_LIST(5,DL_exclamation_box_outline_geo_0x8024fa8),
GEO_DISPLAY_LIST(5,DL_exclamation_box_outline_geo_0x8024fc8),
GEO_DISPLAY_LIST(5,DL_exclamation_box_outline_geo_0x8024fe8),
GEO_CLOSE_NODE(),
GEO_DISPLAY_LIST(4,DL_exclamation_box_outline_geo_0x80259f8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
