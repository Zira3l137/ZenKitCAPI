// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Light.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>

ZkLightPreset* ZkLightPreset_load(ZkRead* buf, ZkGameVersion version) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset"
		                  "_load");
		return nullptr;
	}
	try {
		auto ar = zenkit::ReadArchive::from(buf);

		zenkit::ArchiveObject o;
		ar->read_object_begin(o);

		ZkLightPreset p;
		p.load(*ar, static_cast<zenkit::GameVersion>(version));
		return ZKC_WRAP_NEW(p);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkLightPreset"
		              "_load() failed: %s",
		              exc.what());
		return nullptr;
	}
}

ZkLightPreset* ZkLightPreset_loadPath(ZkString path, ZkGameVersion version) {
	ZKC_TRACE_FN();
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset"
		                  "_loadPath");
		return nullptr;
	}
	try {
		auto buf = zenkit::Read::from(path);
		auto ar = zenkit::ReadArchive::from(buf.get());

		zenkit::ArchiveObject o;
		ar->read_object_begin(o);

		ZkLightPreset p;
		p.load(*ar, static_cast<zenkit::GameVersion>(version));
		return ZKC_WRAP_NEW(p);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkLightPreset"
		              "_loadPath() failed: %s",
		              exc.what());
		return nullptr;
	}
}

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

ZkSize ZkLightPreset_getColorAnimationCount(ZkLightPreset const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color_animation_list.size();
}

ZkColor ZkLightPreset_getColorAnimationItem(ZkLightPreset const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->color_animation_list, i);
	return slf->color_animation_list[i];
}

void ZkLightPreset_enumerateColorAnimationItems(ZkLightPreset const* slf, ZkColorEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& i : slf->color_animation_list) {
		if (cb(ctx, i)) break;
	}
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
	return SLF->preset.c_str();
}

void ZkLight_setPreset(ZkLight* slf, ZkString preset) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->preset = preset;
}

ZkLightType ZkLight_getLightType(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkLightType>(SLF->light_type);
}

void ZkLight_setLightType(ZkLight* slf, ZkLightType lightType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->light_type = static_cast<zenkit::LightType>(lightType);
}

float ZkLight_getRange(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->range;
}

void ZkLight_setRange(ZkLight* slf, float range) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->range = range;
}

ZkColor ZkLight_getColor(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->color;
}

void ZkLight_setColor(ZkLight* slf, ZkColor color) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->color = color;
}

float ZkLight_getConeAngle(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->cone_angle;
}

void ZkLight_setConeAngle(ZkLight* slf, float coneAngle) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->cone_angle = coneAngle;
}

ZkBool ZkLight_getIsStatic(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->is_static;
}

void ZkLight_setIsStatic(ZkLight* slf, ZkBool isStatic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->is_static = isStatic;
}

ZkLightQuality ZkLight_getQuality(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkLightQuality>(SLF->quality);
}

void ZkLight_setQuality(ZkLight* slf, ZkLightQuality quality) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->quality = static_cast<zenkit::LightQuality>(quality);
}

ZkString ZkLight_getLensflareFx(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->lensflare_fx.c_str();
}

void ZkLight_setLensflareFx(ZkLight* slf, ZkString lensflareFx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->lensflare_fx = lensflareFx;
}

ZkBool ZkLight_getOn(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->on;
}

void ZkLight_setOn(ZkLight* slf, ZkBool on) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->on = on;
}

float const* ZkLight_getRangeAnimationScale(ZkLight const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);
	*count = SLF->range_animation_scale.size();
	return SLF->range_animation_scale.data();
}

void ZkLight_setRangeAnimationScale(ZkLight* slf, float const* scale, ZkSize count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, scale);
	SLF->range_animation_scale.assign(scale, scale + count);
}

float ZkLight_getRangeAnimationFps(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->range_animation_fps;
}

void ZkLight_setRangeAnimationFps(ZkLight* slf, float rangeAnimationFps) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->range_animation_fps = rangeAnimationFps;
}

ZkBool ZkLight_getRangeAnimationSmooth(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->range_animation_smooth;
}

void ZkLight_setRangeAnimationSmooth(ZkLight* slf, ZkBool rangeAnimationSmooth) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->range_animation_smooth = rangeAnimationSmooth;
}

ZkSize ZkLight_getColorAnimationCount(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->color_animation_list.size();
}

ZkColor ZkLight_getColorAnimationItem(ZkLight const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->color_animation_list, i);
	return SLF->color_animation_list[i];
}

void ZkLight_enumerateColorAnimationItems(ZkLight const* slf, ZkColorEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& i : SLF->color_animation_list) {
		if (cb(ctx, i)) break;
	}
}

void ZkLight_setColorAnimationList(ZkLight* slf, ZkColor const* list, ZkSize count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, list);
	SLF->color_animation_list.assign(list, list + count);
}

float ZkLight_getColorAnimationFps(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->color_animation_fps;
}

void ZkLight_setColorAnimationFps(ZkLight* slf, float colorAnimationFps) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->color_animation_fps = colorAnimationFps;
}

ZkBool ZkLight_getColorAnimationSmooth(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->color_animation_smooth;
}

void ZkLight_setColorAnimationSmooth(ZkLight* slf, ZkBool colorAnimationSmooth) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->color_animation_smooth = colorAnimationSmooth;
}

ZkBool ZkLight_getCanMove(ZkLight const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->can_move;
}

void ZkLight_setCanMove(ZkLight* slf, ZkBool canMove) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->can_move = canMove;
}
