// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "../Material.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Light.hh>
using ZkLight = zenkit::VLight;
using ZkLightPreset = zenkit::LightPreset;
#else
typedef struct ZkInternal_Light ZkLight;
typedef struct ZkInternal_LightPreset ZkLightPreset;
#endif

typedef enum {
	ZkLightType_POINT = 0,
	ZkLightType_SPOT = 1,
	ZkLightType_RESERVED0 = 2,
	ZkLightType_RESERVED1 = 3,
} ZkLightType;

typedef enum {
	ZkLightQuality_HIGH = 0,
	ZkLightQuality_MEDIUM = 1,
	ZkLightQuality_LOW = 2,
} ZkLightQuality;

ZKC_API ZkLightPreset* ZkLightPreset_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkLightPreset* ZkLightPreset_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkLightPreset_del(ZkLightPreset* slf);

ZKC_API ZkString ZkLightPreset_getPreset(ZkLightPreset const* slf);
ZKC_API ZkLightType ZkLightPreset_getLightType(ZkLightPreset const* slf);
ZKC_API float ZkLightPreset_getRange(ZkLightPreset const* slf);
ZKC_API ZkColor ZkLightPreset_getColor(ZkLightPreset const* slf);
ZKC_API float ZkLightPreset_getConeAngle(ZkLightPreset const* slf);
ZKC_API ZkBool ZkLightPreset_getIsStatic(ZkLightPreset const* slf);
ZKC_API ZkLightQuality ZkLightPreset_getQuality(ZkLightPreset const* slf);
ZKC_API ZkString ZkLightPreset_getLensflareFx(ZkLightPreset const* slf);
ZKC_API ZkBool ZkLightPreset_getOn(ZkLightPreset const* slf);
ZKC_API float const* ZkLightPreset_getRangeAnimationScale(ZkLightPreset const* slf, ZkSize* count);
ZKC_API float ZkLightPreset_getRangeAnimationFps(ZkLightPreset const* slf);
ZKC_API ZkBool ZkLightPreset_getRangeAnimationSmooth(ZkLightPreset const* slf);
ZKC_API ZkColor const* ZkLightPreset_getColorAnimationList(ZkLightPreset const* slf, ZkSize* count);
ZKC_API float ZkLightPreset_getColorAnimationFps(ZkLightPreset const* slf);
ZKC_API ZkBool ZkLightPreset_getColorAnimationSmooth(ZkLightPreset const* slf);
ZKC_API ZkBool ZkLightPreset_getCanMove(ZkLightPreset const* slf);

ZKC_API ZkLight* ZkLight_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkLight* ZkLight_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkLight_del(ZkLight* slf);

ZKC_API ZkString ZkLight_getPreset(ZkLight const* slf);
ZKC_API ZkLightType ZkLight_getLightType(ZkLight const* slf);
ZKC_API float ZkLight_getRange(ZkLight const* slf);
ZKC_API ZkColor ZkLight_getColor(ZkLight const* slf);
ZKC_API float ZkLight_getConeAngle(ZkLight const* slf);
ZKC_API ZkBool ZkLight_getIsStatic(ZkLight const* slf);
ZKC_API ZkLightQuality ZkLight_getQuality(ZkLight const* slf);
ZKC_API ZkString ZkLight_getLensflareFx(ZkLight const* slf);
ZKC_API ZkBool ZkLight_getOn(ZkLight const* slf);
ZKC_API float const* ZkLight_getRangeAnimationScale(ZkLight const* slf, ZkSize* count);
ZKC_API float ZkLight_getRangeAnimationFps(ZkLight const* slf);
ZKC_API ZkBool ZkLight_getRangeAnimationSmooth(ZkLight const* slf);
ZKC_API ZkColor const* ZkLight_getColorAnimationList(ZkLight const* slf, ZkSize* count);
ZKC_API float ZkLight_getColorAnimationFps(ZkLight const* slf);
ZKC_API ZkBool ZkLight_getColorAnimationSmooth(ZkLight const* slf);
ZKC_API ZkBool ZkLight_getCanMove(ZkLight const* slf);
