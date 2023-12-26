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
ZKC_API void ZkLightPreset_setPreset(ZkLightPreset* slf, ZkString preset);
ZKC_API ZkLightType ZkLightPreset_getLightType(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setLightType(ZkLightPreset* slf, ZkLightType lightType);
ZKC_API float ZkLightPreset_getRange(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setRange(ZkLightPreset* slf, float range);
ZKC_API ZkColor ZkLightPreset_getColor(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setColor(ZkLightPreset* slf, ZkColor color);
ZKC_API float ZkLightPreset_getConeAngle(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setConeAngle(ZkLightPreset* slf, float coneAngle);
ZKC_API ZkBool ZkLightPreset_getIsStatic(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setIsStatic(ZkLightPreset* slf, ZkBool isStatic);
ZKC_API ZkLightQuality ZkLightPreset_getQuality(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setQuality(ZkLightPreset* slf, ZkLightQuality quality);
ZKC_API ZkString ZkLightPreset_getLensflareFx(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setLensflareFx(ZkLightPreset* slf, ZkString lensflareFx);
ZKC_API ZkBool ZkLightPreset_getOn(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setOn(ZkLightPreset* slf, ZkBool on);
ZKC_API float const* ZkLightPreset_getRangeAnimationScale(ZkLightPreset const* slf, ZkSize* count);
ZKC_API void ZkLightPreset_setRangeAnimationScale(ZkLightPreset* slf, float const* scale, ZkSize count);
ZKC_API float ZkLightPreset_getRangeAnimationFps(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setRangeAnimationFps(ZkLightPreset* slf, float rangeAnimationFps);
ZKC_API ZkBool ZkLightPreset_getRangeAnimationSmooth(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setRangeAnimationSmooth(ZkLightPreset* slf, ZkBool rangeAnimationSmooth);

ZKC_API ZkSize ZkLightPreset_getColorAnimationCount(ZkLightPreset const* slf);
ZKC_API ZkColor ZkLightPreset_getColorAnimationItem(ZkLightPreset const* slf, ZkSize i);
ZKC_API void ZkLightPreset_enumerateColorAnimationItems(ZkLightPreset const* slf, ZkColorEnumerator cb, void* ctx);

ZKC_API void ZkLightPreset_setColorAnimationList(ZkLightPreset* slf, ZkColor const* list, ZkSize count);
ZKC_API float ZkLightPreset_getColorAnimationFps(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setColorAnimationFps(ZkLightPreset* slf, float colorAnimationFps);
ZKC_API ZkBool ZkLightPreset_getColorAnimationSmooth(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setColorAnimationSmooth(ZkLightPreset* slf, ZkBool colorAnimationSmooth);
ZKC_API ZkBool ZkLightPreset_getCanMove(ZkLightPreset const* slf);
ZKC_API void ZkLightPreset_setCanMove(ZkLightPreset* slf, ZkBool canMove);

ZKC_API ZkLight* ZkLight_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkLight* ZkLight_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkLight_del(ZkLight* slf);

ZKC_API ZkString ZkLight_getPreset(ZkLight const* slf);
ZKC_API void ZkLight_setPreset(ZkLight* slf, ZkString preset);
ZKC_API ZkLightType ZkLight_getLightType(ZkLight const* slf);
ZKC_API void ZkLight_setLightType(ZkLight* slf, ZkLightType lightType);
ZKC_API float ZkLight_getRange(ZkLight const* slf);
ZKC_API void ZkLight_setRange(ZkLight* slf, float range);
ZKC_API ZkColor ZkLight_getColor(ZkLight const* slf);
ZKC_API void ZkLight_setColor(ZkLight* slf, ZkColor color);
ZKC_API float ZkLight_getConeAngle(ZkLight const* slf);
ZKC_API void ZkLight_setConeAngle(ZkLight* slf, float coneAngle);
ZKC_API ZkBool ZkLight_getIsStatic(ZkLight const* slf);
ZKC_API void ZkLight_setIsStatic(ZkLight* slf, ZkBool isStatic);
ZKC_API ZkLightQuality ZkLight_getQuality(ZkLight const* slf);
ZKC_API void ZkLight_setQuality(ZkLight* slf, ZkLightQuality quality);
ZKC_API ZkString ZkLight_getLensflareFx(ZkLight const* slf);
ZKC_API void ZkLight_setLensflareFx(ZkLight* slf, ZkString lensflareFx);
ZKC_API ZkBool ZkLight_getOn(ZkLight const* slf);
ZKC_API void ZkLight_setOn(ZkLight* slf, ZkBool on);
ZKC_API float const* ZkLight_getRangeAnimationScale(ZkLight const* slf, ZkSize* count);
ZKC_API void ZkLight_setRangeAnimationScale(ZkLight* slf, float const* scale, ZkSize count);
ZKC_API float ZkLight_getRangeAnimationFps(ZkLight const* slf);
ZKC_API void ZkLight_setRangeAnimationFps(ZkLight* slf, float rangeAnimationFps);
ZKC_API ZkBool ZkLight_getRangeAnimationSmooth(ZkLight const* slf);
ZKC_API void ZkLight_setRangeAnimationSmooth(ZkLight* slf, ZkBool rangeAnimationSmooth);

ZKC_API ZkSize ZkLight_getColorAnimationCount(ZkLight const* slf);
ZKC_API ZkColor ZkLight_getColorAnimationItem(ZkLight const* slf, ZkSize i);
ZKC_API void ZkLight_enumerateColorAnimationItems(ZkLight const* slf, ZkColorEnumerator cb, void* ctx);

ZKC_API void ZkLight_setColorAnimationList(ZkLight* slf, ZkColor const* list, ZkSize count);
ZKC_API float ZkLight_getColorAnimationFps(ZkLight const* slf);
ZKC_API void ZkLight_setColorAnimationFps(ZkLight* slf, float colorAnimationFps);
ZKC_API ZkBool ZkLight_getColorAnimationSmooth(ZkLight const* slf);
ZKC_API void ZkLight_setColorAnimationSmooth(ZkLight* slf, ZkBool colorAnimationSmooth);
ZKC_API ZkBool ZkLight_getCanMove(ZkLight const* slf);
ZKC_API void ZkLight_setCanMove(ZkLight* slf, ZkBool canMove);
