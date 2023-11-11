// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Light.h"

#include <zenkit/Archive.hh>

ZkLightPreset* ZkLightPreset_load(ZkRead* buf, ZkGameVersion version) {
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_load");
		return nullptr;
	}

	try {
		auto ar = zenkit::ReadArchive::from(buf);

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkLightPreset obj {};
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkLightPreset_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkLightPreset* ZkLightPreset_loadPath(ZkString path, ZkGameVersion version) {
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);
		auto ar = zenkit::ReadArchive::from(buf.get());

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkLightPreset obj {};
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkLightPreset_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkLightPreset_del(ZkLightPreset* slf) {
	delete slf;
}

ZkLight* ZkLight_load(ZkRead* buf, ZkGameVersion version) {
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_load");
		return nullptr;
	}

	try {
		auto ar = zenkit::ReadArchive::from(buf);

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkLight obj {};
		obj.type = zenkit::VobType::zCVobLight;
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkLight_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkLight* ZkLight_loadPath(ZkString path, ZkGameVersion version) {
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);
		auto ar = zenkit::ReadArchive::from(buf.get());

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkLight obj {};
		obj.type = zenkit::VobType::zCVobLight;
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkLight_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkLight_del(ZkLight* slf) {
	delete slf;
}

ZkString ZkLightPreset_getPreset(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getPreset");
		return {};
	}

	return slf->preset.c_str();
}

ZkLightType ZkLightPreset_getLightType(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getLightType");
		return {};
	}

	return static_cast<ZkLightType>(slf->light_type);
}

float ZkLightPreset_getRange(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getRange");
		return {};
	}

	return slf->range;
}

ZkColor ZkLightPreset_getColor(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getColor");
		return {};
	}

	return slf->color;
}

float ZkLightPreset_getConeAngle(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getConeAngle");
		return {};
	}

	return slf->cone_angle;
}

ZkBool ZkLightPreset_getIsStatic(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getIsStatic");
		return {};
	}

	return slf->is_static;
}

ZkLightQuality ZkLightPreset_getQuality(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getQuality");
		return {};
	}

	return static_cast<ZkLightQuality>(slf->quality);
}

ZkString ZkLightPreset_getLensflareFx(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getLensflareFx");
		return {};
	}

	return slf->lensflare_fx.c_str();
}

ZkBool ZkLightPreset_getOn(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getOn");
		return {};
	}

	return slf->on;
}

float const* ZkLightPreset_getRangeAnimationScale(ZkLightPreset const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getRangeAnimationScale");
		return {};
	}

	*count = slf->range_animation_scale.size();
	return slf->range_animation_scale.data();
}

float ZkLightPreset_getRangeAnimationFps(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getRangeAnimationFps");
		return {};
	}

	return slf->range_animation_fps;
}

ZkBool ZkLightPreset_getRangeAnimationSmooth(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getRangeAnimationSmooth");
		return {};
	}

	return slf->range_animation_smooth;
}

ZkColor const* ZkLightPreset_getColorAnimationList(ZkLightPreset const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getColorAnimationList");
		return {};
	}

	*count = slf->color_animation_list.size();
	return slf->color_animation_list.data();
}

float ZkLightPreset_getColorAnimationFps(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getColorAnimationFps");
		return {};
	}

	return slf->color_animation_fps;
}

ZkBool ZkLightPreset_getColorAnimationSmooth(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getColorAnimationSmooth");
		return {};
	}

	return slf->color_animation_smooth;
}

ZkBool ZkLightPreset_getCanMove(ZkLightPreset const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightPreset_getCanMove");
		return {};
	}

	return slf->can_move;
}

ZkString ZkLight_getPreset(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getPreset");
		return {};
	}

	return slf->preset.c_str();
}

ZkLightType ZkLight_getLightType(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getLightType");
		return {};
	}

	return static_cast<ZkLightType>(slf->light_type);
}

float ZkLight_getRange(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getRange");
		return {};
	}

	return slf->range;
}

ZkColor ZkLight_getColor(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getColor");
		return {};
	}

	return slf->color;
}

float ZkLight_getConeAngle(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getConeAngle");
		return {};
	}

	return slf->cone_angle;
}

ZkBool ZkLight_getIsStatic(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getIsStatic");
		return {};
	}

	return slf->is_static;
}

ZkLightQuality ZkLight_getQuality(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getQuality");
		return {};
	}

	return static_cast<ZkLightQuality>(slf->quality);
}

ZkString ZkLight_getLensflareFx(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getLensflareFx");
		return {};
	}

	return slf->lensflare_fx.c_str();
}

ZkBool ZkLight_getOn(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getOn");
		return {};
	}

	return slf->on;
}

float const* ZkLight_getRangeAnimationScale(ZkLight const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getRangeAnimationScale");
		return {};
	}

	*count = slf->range_animation_scale.size();
	return slf->range_animation_scale.data();
}

float ZkLight_getRangeAnimationFps(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getRangeAnimationFps");
		return {};
	}

	return slf->range_animation_fps;
}

ZkBool ZkLight_getRangeAnimationSmooth(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getRangeAnimationSmooth");
		return {};
	}

	return slf->range_animation_smooth;
}

ZkColor const* ZkLight_getColorAnimationList(ZkLight const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getColorAnimationList");
		return {};
	}

	*count = slf->color_animation_list.size();
	return slf->color_animation_list.data();
}

float ZkLight_getColorAnimationFps(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getColorAnimationFps");
		return {};
	}

	return slf->color_animation_fps;
}

ZkBool ZkLight_getColorAnimationSmooth(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getColorAnimationSmooth");
		return {};
	}

	return slf->color_animation_smooth;
}

ZkBool ZkLight_getCanMove(ZkLight const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLight_getCanMove");
		return {};
	}

	return slf->can_move;
}
