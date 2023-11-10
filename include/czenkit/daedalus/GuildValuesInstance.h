// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkGuildValuesInstance = zenkit::IGuildValues;
#else
typedef struct ZkInternal_GuildValuesInstance ZkGuildValuesInstance;
#endif

#define ZkGuildValuesInstance_ElementLength 66

CZK_API int32_t ZkGuildValuesInstance_getWaterDepthKnee(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getWaterDepthChest(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getJumpUpHeight(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getSwimTime(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getDiveTime(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getStepHeight(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getJumpLowHeight(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getJumpMidHeight(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getSlideAngle(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getSlideAngle2(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getDisableAutoRoll(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getSurfaceAlign(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getClimbHeadingAngle(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getClimbHorizAngle(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getClimbGroundAngle(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFightRangeBase(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFightRangeFist(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFightRangeG(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFightRange1Hs(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFightRange1Ha(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFightRange2Hs(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFightRange2Ha(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFallDownHeight(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getFallDownDamage(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getBloodDisabled(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getBloodMaxDistance(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getBloodAmount(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getBloodFlow(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API int32_t ZkGuildValuesInstance_getTurnSpeed(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API ZkString ZkGuildValuesInstance_getBloodEmitter(ZkGuildValuesInstance const* slf, ZkSize i);
CZK_API ZkString ZkGuildValuesInstance_getBloodTexture(ZkGuildValuesInstance const* slf, ZkSize i);
