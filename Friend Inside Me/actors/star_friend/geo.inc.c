#include "src/game/envfx_snow.h"

const GeoLayout star_friend_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, star_friend_000_displaylist_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_ALPHA, star_friend_001_displaylist_mesh_layer_4),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, star_friend_001_displaylist_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
