// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/daedalus/GuildValuesInstance.h"
#include "../Internal.hh"


int32_t ZkGuildValuesInstance_getWaterDepthKnee(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->water_depth_knee[i];
}

int32_t ZkGuildValuesInstance_getWaterDepthChest(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->water_depth_chest[i];
}

int32_t ZkGuildValuesInstance_getJumpUpHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->jumpup_height[i];
}

int32_t ZkGuildValuesInstance_getSwimTime(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->swim_time[i];
}

int32_t ZkGuildValuesInstance_getDiveTime(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->dive_time[i];
}

int32_t ZkGuildValuesInstance_getStepHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->step_height[i];
}

int32_t ZkGuildValuesInstance_getJumpLowHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->jumplow_height[i];
}

int32_t ZkGuildValuesInstance_getJumpMidHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->jumpmid_height[i];
}

int32_t ZkGuildValuesInstance_getSlideAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->slide_angle[i];
}

int32_t ZkGuildValuesInstance_getSlideAngle2(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->slide_angle2[i];
}

int32_t ZkGuildValuesInstance_getDisableAutoRoll(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->disable_autoroll[i];
}

int32_t ZkGuildValuesInstance_getSurfaceAlign(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->surface_align[i];
}

int32_t ZkGuildValuesInstance_getClimbHeadingAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->climb_heading_angle[i];
}

int32_t ZkGuildValuesInstance_getClimbHorizAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->climb_horiz_angle[i];
}

int32_t ZkGuildValuesInstance_getClimbGroundAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->climb_ground_angle[i];
}

int32_t ZkGuildValuesInstance_getFightRangeBase(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_base[i];
}

int32_t ZkGuildValuesInstance_getFightRangeFist(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_fist[i];
}

int32_t ZkGuildValuesInstance_getFightRangeG(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_g[i];
}

int32_t ZkGuildValuesInstance_getFightRange1Hs(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_1hs[i];
}

int32_t ZkGuildValuesInstance_getFightRange1Ha(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_1ha[i];
}

int32_t ZkGuildValuesInstance_getFightRange2Hs(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_2hs[i];
}

int32_t ZkGuildValuesInstance_getFightRange2Ha(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_2ha[i];
}

int32_t ZkGuildValuesInstance_getFallDownHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->falldown_height[i];
}

int32_t ZkGuildValuesInstance_getFallDownDamage(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->falldown_damage[i];
}

int32_t ZkGuildValuesInstance_getBloodDisabled(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_disabled[i];
}

int32_t ZkGuildValuesInstance_getBloodMaxDistance(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_max_distance[i];
}

int32_t ZkGuildValuesInstance_getBloodAmount(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_amount[i];
}

int32_t ZkGuildValuesInstance_getBloodFlow(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_flow[i];
}

int32_t ZkGuildValuesInstance_getTurnSpeed(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->turn_speed[i];
}

ZkString ZkGuildValuesInstance_getBloodEmitter(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_emitter[i].c_str();
}

ZkString ZkGuildValuesInstance_getBloodTexture(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_texture[i].c_str();
}
