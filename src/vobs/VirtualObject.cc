// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/VirtualObject.h"

#include <zenkit/Archive.hh>

ZkVirtualObject* ZkVirtualObject_load(ZkRead* buf, ZkGameVersion version) {
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_load");
		return nullptr;
	}

	try {
		auto ar = zenkit::ReadArchive::from(buf);

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkVirtualObject obj {};
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return new ZkVirtualObject {std::move(obj)};
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVirtualObject_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkVirtualObject* ZkVirtualObject_loadPath(ZkString path, ZkGameVersion version) {
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);
		auto ar = zenkit::ReadArchive::from(buf.get());

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkVirtualObject obj {};
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVirtualObject_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkVirtualObject_del(ZkVirtualObject* slf) {
	delete slf;
}

ZkVobType ZkVirtualObject_getType(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getType");
		return {};
	}

	return static_cast<ZkVobType>(slf->type);
}

uint32_t ZkVirtualObject_getId(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getId");
		return {};
	}

	return slf->id;
}

ZkAxisAlignedBoundingBox ZkVirtualObject_getBbox(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkAxisAlignedBoundingBox");
		return {};
	}

	return slf->bbox;
}

ZkVec3f ZkVirtualObject_getPosition(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getPosition");
		return {};
	}

	return slf->position;
}

ZkMat3x3 ZkVirtualObject_getRotation(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getRotation");
		return {};
	}

	return slf->rotation;
}

ZkBool ZkVirtualObject_getShowVisual(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getShowVisual");
		return {};
	}

	return slf->show_visual;
}

ZkSpriteAlignment ZkVirtualObject_getSpriteCameraFacingMode(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getSpriteCameraFacingMode");
		return {};
	}

	return static_cast<ZkSpriteAlignment>(slf->sprite_camera_facing_mode);
}

ZkBool ZkVirtualObject_getCdStatic(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getCdStatic");
		return {};
	}

	return slf->cd_static;
}

ZkBool ZkVirtualObject_getCdDynamic(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getCdDynamic");
		return {};
	}

	return slf->cd_dynamic;
}

ZkBool ZkVirtualObject_getVobStatic(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getVobStatic");
		return {};
	}

	return slf->vob_static;
}

ZkShadowType ZkVirtualObject_getDynamicShadows(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getDynamicShadows");
		return {};
	}

	return static_cast<ZkShadowType>(slf->dynamic_shadows);
}

ZkBool ZkVirtualObject_getPhysicsEnabled(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getPhysicsEnabled");
		return {};
	}

	return slf->physics_enabled;
}

ZkAnimationType ZkVirtualObject_getAnimMode(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getAnimMode");
		return {};
	}

	return static_cast<ZkAnimationType>(slf->anim_mode);
}

int32_t ZkVirtualObject_getBias(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getBias");
		return {};
	}

	return slf->bias;
}

ZkBool ZkVirtualObject_getAmbient(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getAmbient");
		return {};
	}

	return slf->ambient;
}

float ZkVirtualObject_getAnimStrength(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getAnimStrength");
		return {};
	}

	return slf->anim_strength;
}

float ZkVirtualObject_getFarClipScale(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getFarClipScale");
		return {};
	}

	return slf->far_clip_scale;
}

ZkString ZkVirtualObject_getPresetName(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getPresetName");
		return {};
	}

	return slf->preset_name.c_str();
}

ZkString ZkVirtualObject_getName(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getName");
		return {};
	}

	return slf->vob_name.c_str();
}

ZkString ZkVirtualObject_getVisualName(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getVisualName");
		return {};
	}

	return slf->visual_name.c_str();
}

ZkVisualType ZkVirtualObject_getVisualType(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getVisualType");
		return {};
	}

	return static_cast<ZkVisualType>(slf->associated_visual_type);
}

ZkDecal const* ZkVirtualObject_getVisualDecal(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getVisualDecal");
		return {};
	}

	return slf->visual_decal ? &*slf->visual_decal : nullptr;
}

ZkSize ZkVirtualObject_getChildCount(ZkVirtualObject const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getChildCount");
		return 0;
	}

	return slf->children.size();
}

ZkVirtualObject const* ZkVirtualObject_getChild(ZkVirtualObject const* slf, ZkSize i) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_getChild");
		return nullptr;
	}

	if (i >= slf->children.size()) {
		ZKC_LOG_ERROR("ZkVirtualObject_getChild() failed: index out of range");
		return nullptr;
	}

	return slf->children[i].get();
}

void ZkVirtualObject_enumerateChildren(ZkVirtualObject const* slf, ZkVirtualObjectEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_enumerateChildren");
		return;
	}

	for (auto& obj : slf->children) {
		if (cb(ctx, obj.get())) break;
	}
}

ZkString ZkDecal_getName(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getName");
		return {};
	}

	return slf->name.c_str();
}

ZkVec2f ZkDecal_getDimension(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getDimension");
		return {};
	}

	return slf->dimension;
}

ZkVec2f ZkDecal_getOffset(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getOffset");
		return {};
	}

	return slf->offset;
}

ZkBool ZkDecal_getTwoSided(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getTwoSided");
		return {};
	}

	return slf->two_sided;
}

ZkAlphaFunction ZkDecal_getAlphaFunc(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getAlphaFunc");
		return {};
	}

	return static_cast<ZkAlphaFunction>(slf->alpha_func);
}

float ZkDecal_getTextureAnimFps(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getTextureAnimFps");
		return {};
	}

	return slf->texture_anim_fps;
}

uint8_t ZkDecal_getAlphaWeight(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getAlphaWeight");
		return {};
	}

	return slf->alpha_weight;
}

ZkBool ZkDecal_getIgnoreDaylight(ZkDecal const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkDecal_getIgnoreDaylight");
		return {};
	}

	return slf->ignore_daylight;
}
