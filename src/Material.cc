// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Material.h"

#include "Internal.hh"

#include <zenkit/Archive.hh>

ZkMaterial* ZkMaterial_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(buf);

	try {
		auto ar = zenkit::ReadArchive::from(buf);
		(void) ar->read_int();

		ZkMaterial obj {};
		obj.load(*ar);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMaterial_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMaterial* ZkMaterial_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(path);

	try {
		auto buf = zenkit::Read::from(path);
		auto ar = zenkit::ReadArchive::from(buf.get());
		(void) ar->read_int();

		ZkMaterial obj {};
		obj.load(*ar);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMaterial_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkMaterial_del(ZkMaterial* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkString ZkMaterial_getName(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkMaterialGroup ZkMaterial_getGroup(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMaterialGroup>(slf->group);
}

ZkColor ZkMaterial_getColor(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->color;
}

float ZkMaterial_getSmoothAngle(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->smooth_angle;
}

ZkString ZkMaterial_getTexture(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->texture.c_str();
}

ZkVec2f ZkMaterial_getTextureScale(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->texture_scale;
}

float ZkMaterial_getTextureAnimationFps(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->texture_anim_fps;
}

ZkAnimationMapping ZkMaterial_getTextureAnimationMapping(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationMapping>(slf->texture_anim_map_mode);
}

ZkVec2f ZkMaterial_getTextureAnimationMappingDirection(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->texture_anim_map_dir;
}

ZkBool ZkMaterial_getDisableCollision(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->disable_collision;
}

ZkBool ZkMaterial_getDisableLightmap(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->disable_lightmap;
}

ZkBool ZkMaterial_getDontCollapse(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->dont_collapse;
}

ZkString ZkMaterial_getDetailObject(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->detail_object.c_str();
}

float ZkMaterial_getDetailObjectScale(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->detail_texture_scale;
}

ZkBool ZkMaterial_getForceOccluder(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->force_occluder;
}

ZkBool ZkMaterial_getEnvironmentMapping(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->environment_mapping;
}

float ZkMaterial_getEnvironmentMappingStrength(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->environment_mapping_strength;
}

ZkWaveMode ZkMaterial_getWaveMode(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkWaveMode>(slf->wave_mode);
}

ZkWaveSpeed ZkMaterial_getWaveSpeed(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkWaveSpeed>(slf->wave_speed);
}

float ZkMaterial_getWaveAmplitude(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->wave_max_amplitude;
}

float ZkMaterial_getWaveGridSize(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->wave_grid_size;
}

ZkBool ZkMaterial_getIgnoreSun(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->ignore_sun;
}

ZkAlphaFunction ZkMaterial_getAlphaFunction(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAlphaFunction>(slf->alpha_func);
}

ZkVec2f ZkMaterial_getDefaultMapping(ZkMaterial const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->default_mapping;
}
