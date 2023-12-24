// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Light.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>

ZKC_VOB_LOADER(ZkLightPreset);
ZKC_VOB_PATH_LOADER(ZkLightPreset);
ZKC_DELETER(ZkLightPreset);

ZKC_VOB_LOADER(ZkLight);
ZKC_VOB_PATH_LOADER(ZkLight);
ZKC_DELETER(ZkLight);

ZkString ZkLightPreset_getPreset(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->preset.c_str();
}

void ZkLightPreset_setPreset(ZkLightPreset* slf, ZkString preset) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->preset = preset;
}

ZkLightType ZkLightPreset_getLightType(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkLightType>(slf->light_type);
}

void ZkLightPreset_setLightType(ZkLightPreset* slf, ZkLightType lightType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->light_type = static_cast<zenkit::LightType>(lightType);
}

float ZkLightPreset_getRange(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range;
}

void ZkLightPreset_setRange(ZkLightPreset* slf, float range) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->range = range;
}

ZkColor ZkLightPreset_getColor(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color;
}

void ZkLightPreset_setColor(ZkLightPreset* slf, ZkColor color) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->color = color;
}

float ZkLightPreset_getConeAngle(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->cone_angle;
}

void ZkLightPreset_setConeAngle(ZkLightPreset* slf, float coneAngle) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->cone_angle = coneAngle;
}

ZkBool ZkLightPreset_getIsStatic(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->is_static;
}

void ZkLightPreset_setIsStatic(ZkLightPreset* slf, ZkBool isStatic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->is_static = isStatic;
}

ZkLightQuality ZkLightPreset_getQuality(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkLightQuality>(slf->quality);
}

void ZkLightPreset_setQuality(ZkLightPreset* slf, ZkLightQuality quality) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->quality = static_cast<zenkit::LightQuality>(quality);
}

ZkString ZkLightPreset_getLensflareFx(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->lensflare_fx.c_str();
}

void ZkLightPreset_setLensflareFx(ZkLightPreset* slf, ZkString lensflareFx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->lensflare_fx = lensflareFx;
}

ZkBool ZkLightPreset_getOn(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->on;
}

void ZkLightPreset_setOn(ZkLightPreset* slf, ZkBool on) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->on = on;
}

float const* ZkLightPreset_getRangeAnimationScale(ZkLightPreset const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);
	*count = slf->range_animation_scale.size();
	return slf->range_animation_scale.data();
}

void ZkLightPreset_setRangeAnimationScale(ZkLightPreset* slf, float const* scale, ZkSize count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, scale);
	slf->range_animation_scale.assign(scale, scale + count);
}

float ZkLightPreset_getRangeAnimationFps(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range_animation_fps;
}

void ZkLightPreset_setRangeAnimationFps(ZkLightPreset* slf, float rangeAnimationFps) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->range_animation_fps = rangeAnimationFps;
}

ZkBool ZkLightPreset_getRangeAnimationSmooth(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range_animation_smooth;
}

void ZkLightPreset_setRangeAnimationSmooth(ZkLightPreset* slf, ZkBool rangeAnimationSmooth) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->range_animation_smooth = rangeAnimationSmooth;
}

ZkColor const* ZkLightPreset_getColorAnimationList(ZkLightPreset const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);
	*count = slf->color_animation_list.size();
	return slf->color_animation_list.data();
}

void ZkLightPreset_setColorAnimationList(ZkLightPreset* slf, ZkColor const* list, ZkSize count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, list);
	slf->color_animation_list.assign(list, list + count);
}

float ZkLightPreset_getColorAnimationFps(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color_animation_fps;
}

void ZkLightPreset_setColorAnimationFps(ZkLightPreset* slf, float colorAnimationFps) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->color_animation_fps = colorAnimationFps;
}

ZkBool ZkLightPreset_getColorAnimationSmooth(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color_animation_smooth;
}

void ZkLightPreset_setColorAnimationSmooth(ZkLightPreset* slf, ZkBool colorAnimationSmooth) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->color_animation_smooth = colorAnimationSmooth;
}

ZkBool ZkLightPreset_getCanMove(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->can_move;
}

void ZkLightPreset_setCanMove(ZkLightPreset* slf, ZkBool canMove) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->can_move = canMove;
}

ZkString ZkLight_getPreset(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->preset.c_str();
}

void ZkLight_setPreset(ZkLight* slf, ZkString preset) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->preset = preset;
}

ZkLightType ZkLight_getLightType(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkLightType>(slf->light_type);
}

void ZkLight_setLightType(ZkLight* slf, ZkLightType lightType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->light_type = static_cast<zenkit::LightType>(lightType);
}

float ZkLight_getRange(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range;
}

void ZkLight_setRange(ZkLight* slf, float range) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->range = range;
}

ZkColor ZkLight_getColor(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color;
}

void ZkLight_setColor(ZkLight* slf, ZkColor color) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->color = color;
}

float ZkLight_getConeAngle(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->cone_angle;
}

void ZkLight_setConeAngle(ZkLight* slf, float coneAngle) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->cone_angle = coneAngle;
}

ZkBool ZkLight_getIsStatic(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->is_static;
}

void ZkLight_setIsStatic(ZkLight* slf, ZkBool isStatic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->is_static = isStatic;
}

ZkLightQuality ZkLight_getQuality(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkLightQuality>(slf->quality);
}

void ZkLight_setQuality(ZkLight* slf, ZkLightQuality quality) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->quality = static_cast<zenkit::LightQuality>(quality);
}

ZkString ZkLight_getLensflareFx(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->lensflare_fx.c_str();
}

void ZkLight_setLensflareFx(ZkLight* slf, ZkString lensflareFx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->lensflare_fx = lensflareFx;
}

ZkBool ZkLight_getOn(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->on;
}

void ZkLight_setOn(ZkLight* slf, ZkBool on) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->on = on;
}

float const* ZkLight_getRangeAnimationScale(ZkLight const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);
	*count = slf->range_animation_scale.size();
	return slf->range_animation_scale.data();
}

void ZkLight_setRangeAnimationScale(ZkLight* slf, float const* scale, ZkSize count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, scale);
	slf->range_animation_scale.assign(scale, scale + count);
}

float ZkLight_getRangeAnimationFps(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range_animation_fps;
}

void ZkLight_setRangeAnimationFps(ZkLight* slf, float rangeAnimationFps) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->range_animation_fps = rangeAnimationFps;
}

ZkBool ZkLight_getRangeAnimationSmooth(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range_animation_smooth;
}

void ZkLight_setRangeAnimationSmooth(ZkLight* slf, ZkBool rangeAnimationSmooth) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->range_animation_smooth = rangeAnimationSmooth;
}

ZkColor const* ZkLight_getColorAnimationList(ZkLight const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);
	*count = slf->color_animation_list.size();
	return slf->color_animation_list.data();
}

void ZkLight_setColorAnimationList(ZkLight* slf, ZkColor const* list, ZkSize count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, list);
	slf->color_animation_list.assign(list, list + count);
}

float ZkLight_getColorAnimationFps(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color_animation_fps;
}

void ZkLight_setColorAnimationFps(ZkLight* slf, float colorAnimationFps) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->color_animation_fps = colorAnimationFps;
}

ZkBool ZkLight_getColorAnimationSmooth(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color_animation_smooth;
}

void ZkLight_setColorAnimationSmooth(ZkLight* slf, ZkBool colorAnimationSmooth) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->color_animation_smooth = colorAnimationSmooth;
}

ZkBool ZkLight_getCanMove(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->can_move;
}

void ZkLight_setCanMove(ZkLight* slf, ZkBool canMove) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->can_move = canMove;
}
