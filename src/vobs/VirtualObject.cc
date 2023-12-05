// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/VirtualObject.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>

ZkVirtualObject* ZkVirtualObject_load(ZkRead* buf, ZkGameVersion version) {
	ZKC_CHECK_NULL(buf);

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
	ZKC_CHECK_NULL(path);

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
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkVobType>(slf->type);
}

uint32_t ZkVirtualObject_getId(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->id;
}

ZkAxisAlignedBoundingBox ZkVirtualObject_getBbox(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->bbox;
}

ZkVec3f ZkVirtualObject_getPosition(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->position;
}

ZkMat3x3 ZkVirtualObject_getRotation(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rotation;
}

ZkBool ZkVirtualObject_getShowVisual(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->show_visual;
}

ZkSpriteAlignment ZkVirtualObject_getSpriteCameraFacingMode(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSpriteAlignment>(slf->sprite_camera_facing_mode);
}

ZkBool ZkVirtualObject_getCdStatic(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cd_static;
}

ZkBool ZkVirtualObject_getCdDynamic(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cd_dynamic;
}

ZkBool ZkVirtualObject_getVobStatic(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vob_static;
}

ZkShadowType ZkVirtualObject_getDynamicShadows(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkShadowType>(slf->dynamic_shadows);
}

ZkBool ZkVirtualObject_getPhysicsEnabled(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->physics_enabled;
}

ZkAnimationType ZkVirtualObject_getAnimMode(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationType>(slf->anim_mode);
}

int32_t ZkVirtualObject_getBias(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->bias;
}

ZkBool ZkVirtualObject_getAmbient(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ambient;
}

float ZkVirtualObject_getAnimStrength(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->anim_strength;
}

float ZkVirtualObject_getFarClipScale(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->far_clip_scale;
}

ZkString ZkVirtualObject_getPresetName(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->preset_name.c_str();
}

ZkString ZkVirtualObject_getName(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vob_name.c_str();
}

ZkVisual const* ZkVirtualObject_getVisual(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->visual ? slf->visual.get() : nullptr;
}

ZkSize ZkVirtualObject_getChildCount(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->children.size();
}

ZkVirtualObject const* ZkVirtualObject_getChild(ZkVirtualObject const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->children, i);
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

ZkString ZkVisual_getName(ZkVisual const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkVisualType ZkVisual_getType(ZkVisual const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkVisualType>(slf->type);
}

ZkString ZkVisualDecal_getName(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkVec2f ZkVisualDecal_getDimension(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dimension;
}

ZkVec2f ZkVisualDecal_getOffset(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->offset;
}

ZkBool ZkVisualDecal_getTwoSided(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->two_sided;
}

ZkAlphaFunction ZkVisualDecal_getAlphaFunc(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAlphaFunction>(slf->alpha_func);
}

float ZkVisualDecal_getTextureAnimFps(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->texture_anim_fps;
}

uint8_t ZkVisualDecal_getAlphaWeight(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->alpha_weight;
}

ZkBool ZkVisualDecal_getIgnoreDaylight(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ignore_daylight;
}
