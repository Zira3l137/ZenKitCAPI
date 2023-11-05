// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/Material.h"

#include <zenkit/Archive.hh>

ZkMaterial* ZkMaterial_load(ZkRead* buf) {
	if (buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_load");
		return nullptr;
	}

	try {
		auto ar = zenkit::ReadArchive::from(buf);
		(void) ar->read_int();

		ZkMaterial obj {};
		obj.load(*ar);
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkMaterial_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMaterial* ZkMaterial_loadPath(ZkString path) {
	if (path == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);
		auto ar = zenkit::ReadArchive::from(buf.get());
		(void) ar->read_int();

		ZkMaterial obj {};
		obj.load(*ar);
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkMaterial_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkMaterial_del(ZkMaterial* slf) {
	delete slf;
}

ZkString ZkMaterial_getName(ZkMaterial const* slf){
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

ZkMaterialGroup ZkMaterial_getGroup(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getGroup");
		return ZkMaterialGroup_UNDEFINED;
	}

	return static_cast<ZkMaterialGroup>(slf->group);
}

ZkColor ZkMaterial_getColor(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getColor");
		return {};
	}

	return slf->color;
}

float ZkMaterial_getSmoothAngle(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getSmoothAngle");
		return 0;
	}

	return slf->smooth_angle;
}

ZkString ZkMaterial_getTexture(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getTexture");
		return nullptr;
	}

	return slf->texture.c_str();
}

ZkVec2f ZkMaterial_getTextureScale(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getTextureScale");
		return {};
	}

	return slf->texture_scale;
}

float ZkMaterial_getTextureAnimationFps(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getTextureAnimationFps");
		return 0;
	}

	return slf->texture_anim_fps;
}

ZkAnimationMapping ZkMaterial_getTextureAnimationMapping(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getTextureAnimationMapping");
		return ZkAnimationMapping_NONE;
	}

	return static_cast<ZkAnimationMapping>(slf->texture_anim_map_mode);
}

ZkVec2f ZkMaterial_getTextureAnimationMappingDirection(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getTextureAnimationMappingDirection");
		return {};
	}

	return slf->texture_anim_map_dir;
}

ZkBool ZkMaterial_getDisableCollision(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getDisableCollision");
		return false;
	}

	return slf->disable_collision;
}

ZkBool ZkMaterial_getDisableLightmap(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getDisableLightmap");
		return false;
	}

	return slf->disable_lightmap;
}

ZkBool ZkMaterial_getDontCollapse(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getDontCollapse");
		return false;
	}

	return slf->dont_collapse;
}

ZkString ZkMaterial_getDetailObject(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getDetailObject");
		return nullptr;
	}

	return slf->detail_object.c_str();
}

float ZkMaterial_getDetailObjectScale(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getDetailObjectScale");
		return 1;
	}

	return slf->detail_texture_scale;
}

ZkBool ZkMaterial_getForceOccluder(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getForceOccluder");
		return false;
	}

	return slf->force_occluder;
}

ZkBool ZkMaterial_getEnvironmentMapping(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getEnvironmentMapping");
		return false;
	}

	return slf->environment_mapping;
}

float ZkMaterial_getEnvironmentMappingStrength(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getEnvironmentMappingStrength");
		return 0;
	}

	return slf->environment_mapping_strength;
}

ZkWaveMode ZkMaterial_getWaveMode(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getWaveMode");
		return ZkWaveMode_NONE;
	}

	return static_cast<ZkWaveMode>(slf->wave_mode);
}

ZkWaveSpeed ZkMaterial_getWaveSpeed(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getWaveSpeed");
		return ZkWaveSpeed_NORMAL;
	}

	return static_cast<ZkWaveSpeed>(slf->wave_speed);
}

float ZkMaterial_getWaveAmplitude(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getWaveAmplitude");
		return 0;
	}

	return slf->wave_max_amplitude;
}

float ZkMaterial_getWaveGridSize(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getWaveGridSize");
		return 1;
	}

	return slf->wave_grid_size;
}

ZkBool ZkMaterial_getIgnoreSun(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getIgnoreSun");
		return false;
	}

	return slf->ignore_sun;
}

ZkAlphaFunction ZkMaterial_getAlphaFunction(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getAlphaFunction");
		return ZkAlphaFunction_DEFAULT;
	}

	return static_cast<ZkAlphaFunction>(slf->alpha_func);
}

ZkVec2f ZkMaterial_getDefaultMapping(ZkMaterial const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMaterial_getDefaultMapping");
		return {};
	}

	return slf->default_mapping;
}
