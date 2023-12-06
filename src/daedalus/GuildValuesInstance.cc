// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/daedalus/GuildValuesInstance.h"
#include "../Internal.hh"

int32_t ZkGuildValuesInstance_getWaterDepthKnee(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->water_depth_knee[i];
}

void ZkGuildValuesInstance_setWaterDepthKnee(ZkGuildValuesInstance* slf, ZkSize i, int32_t waterDepthKnee) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->water_depth_knee[i] = waterDepthKnee;
}

int32_t ZkGuildValuesInstance_getWaterDepthChest(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->water_depth_chest[i];
}

void ZkGuildValuesInstance_setWaterDepthChest(ZkGuildValuesInstance* slf, ZkSize i, int32_t waterDepthChest) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->water_depth_chest[i] = waterDepthChest;
}

int32_t ZkGuildValuesInstance_getJumpUpHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->jumpup_height[i];
}

void ZkGuildValuesInstance_setJumpUpHeight(ZkGuildValuesInstance* slf, ZkSize i, int32_t jumpUpHeight) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->jumpup_height[i] = jumpUpHeight;
}

int32_t ZkGuildValuesInstance_getSwimTime(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->swim_time[i];
}

void ZkGuildValuesInstance_setSwimTime(ZkGuildValuesInstance* slf, ZkSize i, int32_t swimTime) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->swim_time[i] = swimTime;
}

int32_t ZkGuildValuesInstance_getDiveTime(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->dive_time[i];
}

void ZkGuildValuesInstance_setDiveTime(ZkGuildValuesInstance* slf, ZkSize i, int32_t diveTime) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->dive_time[i] = diveTime;
}

int32_t ZkGuildValuesInstance_getStepHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->step_height[i];
}

void ZkGuildValuesInstance_setStepHeight(ZkGuildValuesInstance* slf, ZkSize i, int32_t stepHeight) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->step_height[i] = stepHeight;
}

int32_t ZkGuildValuesInstance_getJumpLowHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->jumplow_height[i];
}

void ZkGuildValuesInstance_setJumpLowHeight(ZkGuildValuesInstance* slf, ZkSize i, int32_t jumpLowHeight) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->jumplow_height[i] = jumpLowHeight;
}

int32_t ZkGuildValuesInstance_getJumpMidHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->jumpmid_height[i];
}

void ZkGuildValuesInstance_setJumpMidHeight(ZkGuildValuesInstance* slf, ZkSize i, int32_t jumpMidHeight) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->jumpmid_height[i] = jumpMidHeight;
}

int32_t ZkGuildValuesInstance_getSlideAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->slide_angle[i];
}

void ZkGuildValuesInstance_setSlideAngle(ZkGuildValuesInstance* slf, ZkSize i, int32_t slideAngle) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->slide_angle[i] = slideAngle;
}

int32_t ZkGuildValuesInstance_getSlideAngle2(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->slide_angle2[i];
}

void ZkGuildValuesInstance_setSlideAngle2(ZkGuildValuesInstance* slf, ZkSize i, int32_t slideAngle2) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->slide_angle2[i] = slideAngle2;
}

int32_t ZkGuildValuesInstance_getDisableAutoRoll(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->disable_autoroll[i];
}

void ZkGuildValuesInstance_setDisableAutoRoll(ZkGuildValuesInstance* slf, ZkSize i, int32_t disableAutoRoll) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->disable_autoroll[i] = disableAutoRoll;
}

int32_t ZkGuildValuesInstance_getSurfaceAlign(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->surface_align[i];
}

void ZkGuildValuesInstance_setSurfaceAlign(ZkGuildValuesInstance* slf, ZkSize i, int32_t surfaceAlign) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->surface_align[i] = surfaceAlign;
}

int32_t ZkGuildValuesInstance_getClimbHeadingAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->climb_heading_angle[i];
}

void ZkGuildValuesInstance_setClimbHeadingAngle(ZkGuildValuesInstance* slf, ZkSize i, int32_t climbHeadingAngle) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->climb_heading_angle[i] = climbHeadingAngle;
}

int32_t ZkGuildValuesInstance_getClimbHorizAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->climb_horiz_angle[i];
}

void ZkGuildValuesInstance_setClimbHorizAngle(ZkGuildValuesInstance* slf, ZkSize i, int32_t climbHorizAngle) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->climb_horiz_angle[i] = climbHorizAngle;
}

int32_t ZkGuildValuesInstance_getClimbGroundAngle(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->climb_ground_angle[i];
}

void ZkGuildValuesInstance_setClimbGroundAngle(ZkGuildValuesInstance* slf, ZkSize i, int32_t climbGroundAngle) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->climb_ground_angle[i] = climbGroundAngle;
}

int32_t ZkGuildValuesInstance_getFightRangeBase(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_base[i];
}

void ZkGuildValuesInstance_setFightRangeBase(ZkGuildValuesInstance* slf, ZkSize i, int32_t fightRangeBase) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->fight_range_base[i] = fightRangeBase;
}

int32_t ZkGuildValuesInstance_getFightRangeFist(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_fist[i];
}

void ZkGuildValuesInstance_setFightRangeFist(ZkGuildValuesInstance* slf, ZkSize i, int32_t fightRangeFist) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->fight_range_fist[i] = fightRangeFist;
}

int32_t ZkGuildValuesInstance_getFightRangeG(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_g[i];
}

void ZkGuildValuesInstance_setFightRangeG(ZkGuildValuesInstance* slf, ZkSize i, int32_t fightRangeG) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->fight_range_g[i] = fightRangeG;
}

int32_t ZkGuildValuesInstance_getFightRange1Hs(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_1hs[i];
}

void ZkGuildValuesInstance_setFightRange1Hs(ZkGuildValuesInstance* slf, ZkSize i, int32_t fightRange1Hs) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->fight_range_1hs[i] = fightRange1Hs;
}

int32_t ZkGuildValuesInstance_getFightRange1Ha(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_1ha[i];
}

void ZkGuildValuesInstance_setFightRange1Ha(ZkGuildValuesInstance* slf, ZkSize i, int32_t fightRange1Ha) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->fight_range_1ha[i] = fightRange1Ha;
}

int32_t ZkGuildValuesInstance_getFightRange2Hs(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_2hs[i];
}

void ZkGuildValuesInstance_setFightRange2Hs(ZkGuildValuesInstance* slf, ZkSize i, int32_t fightRange2Hs) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->fight_range_2hs[i] = fightRange2Hs;
}

int32_t ZkGuildValuesInstance_getFightRange2Ha(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->fight_range_2ha[i];
}

void ZkGuildValuesInstance_setFightRange2Ha(ZkGuildValuesInstance* slf, ZkSize i, int32_t fightRange2Ha) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->fight_range_2ha[i] = fightRange2Ha;
}

int32_t ZkGuildValuesInstance_getFallDownHeight(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->falldown_height[i];
}

void ZkGuildValuesInstance_setFallDownHeight(ZkGuildValuesInstance* slf, ZkSize i, int32_t fallDownHeight) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->falldown_height[i] = fallDownHeight;
}

int32_t ZkGuildValuesInstance_getFallDownDamage(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->falldown_damage[i];
}

void ZkGuildValuesInstance_setFallDownDamage(ZkGuildValuesInstance* slf, ZkSize i, int32_t fallDownDamage) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->falldown_damage[i] = fallDownDamage;
}

int32_t ZkGuildValuesInstance_getBloodDisabled(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_disabled[i];
}

void ZkGuildValuesInstance_setBloodDisabled(ZkGuildValuesInstance* slf, ZkSize i, int32_t bloodDisabled) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->blood_disabled[i] = bloodDisabled;
}

int32_t ZkGuildValuesInstance_getBloodMaxDistance(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_max_distance[i];
}

void ZkGuildValuesInstance_setBloodMaxDistance(ZkGuildValuesInstance* slf, ZkSize i, int32_t bloodMaxDistance) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->blood_max_distance[i] = bloodMaxDistance;
}

int32_t ZkGuildValuesInstance_getBloodAmount(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_amount[i];
}

void ZkGuildValuesInstance_setBloodAmount(ZkGuildValuesInstance* slf, ZkSize i, int32_t bloodAmount) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->blood_amount[i] = bloodAmount;
}

int32_t ZkGuildValuesInstance_getBloodFlow(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_flow[i];
}

void ZkGuildValuesInstance_setBloodFlow(ZkGuildValuesInstance* slf, ZkSize i, int32_t bloodFlow) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->blood_flow[i] = bloodFlow;
}

int32_t ZkGuildValuesInstance_getTurnSpeed(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->turn_speed[i];
}

void ZkGuildValuesInstance_setTurnSpeed(ZkGuildValuesInstance* slf, ZkSize i, int32_t turnSpeed) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->turn_speed[i] = turnSpeed;
}

ZkString ZkGuildValuesInstance_getBloodEmitter(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_emitter[i].c_str();
}

void ZkGuildValuesInstance_setBloodEmitter(ZkGuildValuesInstance* slf, ZkSize i, ZkString bloodEmitter) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->blood_emitter[i] = bloodEmitter;
}

ZkString ZkGuildValuesInstance_getBloodTexture(ZkGuildValuesInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkGuildValuesInstance_ElementLength, i);
	return slf->blood_texture[i].c_str();
}

void ZkGuildValuesInstance_setBloodTexture(ZkGuildValuesInstance* slf, ZkSize i, ZkString bloodTexture) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(ZkGuildValuesInstance_ElementLength, i);
	slf->blood_texture[i] = bloodTexture;
}
