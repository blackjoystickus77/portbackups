#include "custom.model.inc.h"
const GeoLayout snufit_geo[]= {
GEO_SHADOW(1,150,100),
GEO_OPEN_NODE(),
GEO_SCALE(0,16384),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_snufit_move_mask),
GEO_TRANSLATE_NODE(0,0,0,0),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_snufit_geo_0x6009748),
GEO_CLOSE_NODE(),
GEO_DISPLAY_LIST(1,DL_snufit_geo_0x6009498),
GEO_DISPLAY_LIST(1,DL_snufit_geo_0x6009938),
GEO_DISPLAY_LIST(1,DL_snufit_geo_0x6009b68),
GEO_BILLBOARD_WITH_PARAMS(0,0,0,0),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_snufit_scale_body),
GEO_SCALE(0,0),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(4,DL_snufit_geo_0x6009a10),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
