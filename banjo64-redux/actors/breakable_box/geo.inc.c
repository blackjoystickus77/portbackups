#include "src/game/envfx_snow.h"

const GeoLayout breakable_box_geo[] = {
   GEO_CULLING_RADIUS(500),
   GEO_OPEN_NODE(),
      GEO_SHADOW(SHADOW_SQUARE_PERMANENT, 0xB4, 240),
      GEO_OPEN_NODE(),
         GEO_SWITCH_CASE(2, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, DL_breakable_box_geo_0x8012d20),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, breakable_box_breakable_box_mesh_layer_1),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

