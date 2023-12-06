// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/VirtualObject.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>
#include <zenkit/vobs/Camera.hh>
#include <zenkit/vobs/Light.hh>
#include <zenkit/vobs/Misc.hh>
#include <zenkit/vobs/MovableObject.hh>
#include <zenkit/vobs/Sound.hh>
#include <zenkit/vobs/Trigger.hh>
#include <zenkit/vobs/Zone.hh>

ZKC_VOB_LOADER(ZkVirtualObject);
ZKC_VOB_PATH_LOADER(ZkVirtualObject);
ZKC_DELETER(ZkVirtualObject);

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

void ZkVirtualObject_setBbox(ZkVirtualObject* slf, ZkAxisAlignedBoundingBox bbox) {
	ZKC_CHECK_NULLV(slf);
	slf->bbox = bbox;
}

ZkVec3f ZkVirtualObject_getPosition(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->position;
}

void ZkVirtualObject_setPosition(ZkVirtualObject* slf, ZkVec3f position) {
	ZKC_CHECK_NULLV(slf);
	slf->position = position;
}

ZkMat3x3 ZkVirtualObject_getRotation(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rotation;
}

void ZkVirtualObject_setRotation(ZkVirtualObject* slf, ZkMat3x3 rotation) {
	ZKC_CHECK_NULLV(slf);
	slf->rotation = rotation;
}

ZkBool ZkVirtualObject_getShowVisual(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->show_visual;
}

void ZkVirtualObject_setShowVisual(ZkVirtualObject* slf, ZkBool showVisual) {
	ZKC_CHECK_NULLV(slf);
	slf->show_visual = showVisual;
}

ZkSpriteAlignment ZkVirtualObject_getSpriteCameraFacingMode(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSpriteAlignment>(slf->sprite_camera_facing_mode);
}

void ZkVirtualObject_setSpriteCameraFacingMode(ZkVirtualObject* slf, ZkSpriteAlignment spriteCameraFacingMode) {
	ZKC_CHECK_NULLV(slf);
	slf->sprite_camera_facing_mode = static_cast<zenkit::SpriteAlignment>(spriteCameraFacingMode);
}

ZkBool ZkVirtualObject_getCdStatic(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cd_static;
}

void ZkVirtualObject_setCdStatic(ZkVirtualObject* slf, ZkBool cdStatic) {
	ZKC_CHECK_NULLV(slf);
	slf->cd_static = cdStatic;
}

ZkBool ZkVirtualObject_getCdDynamic(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cd_dynamic;
}

void ZkVirtualObject_setCdDynamic(ZkVirtualObject* slf, ZkBool cdDynamic) {
	ZKC_CHECK_NULLV(slf);
	slf->cd_dynamic = cdDynamic;
}

ZkBool ZkVirtualObject_getVobStatic(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vob_static;
}

void ZkVirtualObject_setVobStatic(ZkVirtualObject* slf, ZkBool vobStatic) {
	ZKC_CHECK_NULLV(slf);
	slf->vob_static = vobStatic;
}

ZkShadowType ZkVirtualObject_getDynamicShadows(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkShadowType>(slf->dynamic_shadows);
}

void ZkVirtualObject_setDynamicShadows(ZkVirtualObject* slf, ZkShadowType dynamicShadows) {
	ZKC_CHECK_NULLV(slf);
	slf->dynamic_shadows = static_cast<zenkit::ShadowType>(dynamicShadows);
}

ZkBool ZkVirtualObject_getPhysicsEnabled(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->physics_enabled;
}

void ZkVirtualObject_setPhysicsEnabled(ZkVirtualObject* slf, ZkBool physicsEnabled) {
	ZKC_CHECK_NULLV(slf);
	slf->physics_enabled = physicsEnabled;
}

ZkAnimationType ZkVirtualObject_getAnimMode(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationType>(slf->anim_mode);
}

void ZkVirtualObject_setAnimMode(ZkVirtualObject* slf, ZkAnimationType animMode) {
	ZKC_CHECK_NULLV(slf);
	slf->anim_mode = static_cast<zenkit::AnimationType>(animMode);
}

int32_t ZkVirtualObject_getBias(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->bias;
}

void ZkVirtualObject_setBias(ZkVirtualObject* slf, int32_t bias) {
	ZKC_CHECK_NULLV(slf);
	slf->bias = bias;
}

ZkBool ZkVirtualObject_getAmbient(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ambient;
}

void ZkVirtualObject_setAmbient(ZkVirtualObject* slf, ZkBool ambient) {
	ZKC_CHECK_NULLV(slf);
	slf->ambient = ambient;
}

float ZkVirtualObject_getAnimStrength(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->anim_strength;
}

void ZkVirtualObject_setAnimStrength(ZkVirtualObject* slf, float animStrength) {
	ZKC_CHECK_NULLV(slf);
	slf->anim_strength = animStrength;
}

float ZkVirtualObject_getFarClipScale(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->far_clip_scale;
}

void ZkVirtualObject_setFarClipScale(ZkVirtualObject* slf, float farClipScale) {
	ZKC_CHECK_NULLV(slf);
	slf->far_clip_scale = farClipScale;
}

ZkString ZkVirtualObject_getPresetName(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->preset_name.c_str();
}

void ZkVirtualObject_setPresetName(ZkVirtualObject* slf, ZkString presetName) {
	ZKC_CHECK_NULLV(slf);
	slf->preset_name = presetName;
}

ZkString ZkVirtualObject_getName(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vob_name.c_str();
}

void ZkVirtualObject_setName(ZkVirtualObject* slf, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	slf->vob_name = name;
}

ZkVisual* ZkVirtualObject_getVisual(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->visual ? slf->visual.get() : nullptr;
}

ZkVisual* ZkVirtualObject_setVisual(ZkVirtualObject* slf, ZkVisualType visual) {
	ZKC_CHECK_NULL(slf);

	std::shared_ptr<zenkit::Visual> obj;

	switch (visual) {
	case ZkVisualType_DECAL:
		obj = std::make_shared<zenkit::VisualDecal>();
		break;
	case ZkVisualType_MESH:
		obj = std::make_shared<zenkit::VisualMesh>();
		break;
	case ZkVisualType_MULTI_RESOLUTION_MESH:
		obj = std::make_shared<zenkit::VisualMultiResolutionMesh>();
		break;
	case ZkVisualType_PARTICLE_EFFECT:
		obj = std::make_shared<zenkit::VisualParticleEffect>();
		break;
	case ZkVisualType_CAMERA:
		obj = std::make_shared<zenkit::VisualCamera>();
		break;
	case ZkVisualType_MODEL:
		obj = std::make_shared<zenkit::VisualModel>();
		break;
	case ZkVisualType_MORPH_MESH:
		obj = std::make_shared<zenkit::VisualMorphMesh>();
		break;
	case ZkVisualType_UNKNOWN:
		slf->visual = nullptr;
		return nullptr;
	}

	obj->type = static_cast<zenkit::VisualType>(visual);
	slf->visual = obj;
	return obj.get();
}

ZkSize ZkVirtualObject_getChildCount(ZkVirtualObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->children.size();
}

ZkVirtualObject* ZkVirtualObject_getChild(ZkVirtualObject const* slf, ZkSize i) {
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

ZkVirtualObject* ZkVirtualObject_addChild(ZkVirtualObject* slf, ZkVobType type) {
	ZKC_CHECK_NULL(slf);

	std::shared_ptr<zenkit::VirtualObject> obj;

	switch (type) {
	case ZkVobType_zCVob:
		obj = std::make_shared<zenkit::VirtualObject>();
		break;
	case ZkVobType_zCVobLevelCompo:
		obj = std::make_shared<zenkit::VLevel>();
		break;
	case ZkVobType_oCItem:
		obj = std::make_shared<zenkit::VItem>();
		break;
	case ZkVobType_oCNpc:
		obj = std::make_shared<zenkit::VNpc>();
		break;
	case ZkVobType_zCMoverController:
		obj = std::make_shared<zenkit::VMoverController>();
		break;
	case ZkVobType_zCVobScreenFX:
		obj = std::make_shared<zenkit::VScreenEffect>();
		break;
	case ZkVobType_zCVobStair:
		obj = std::make_shared<zenkit::VStair>();
		break;
	case ZkVobType_zCPFXController:
		obj = std::make_shared<zenkit::VParticleEffectController>();
		break;
	case ZkVobType_zCVobAnimate:
		obj = std::make_shared<zenkit::VAnimate>();
		break;
	case ZkVobType_zCVobLensFlare:
		obj = std::make_shared<zenkit::VLensFlare>();
		break;
	case ZkVobType_zCVobLight:
		obj = std::make_shared<zenkit::VLight>();
		break;
	case ZkVobType_zCVobSpot:
		obj = std::make_shared<zenkit::VSpot>();
		break;
	case ZkVobType_zCVobStartpoint:
		obj = std::make_shared<zenkit::VStartPoint>();
		break;
	case ZkVobType_zCMessageFilter:
		obj = std::make_shared<zenkit::VMessageFilter>();
		break;
	case ZkVobType_zCCodeMaster:
		obj = std::make_shared<zenkit::VCodeMaster>();
		break;
	case ZkVobType_zCTriggerWorldStart:
		obj = std::make_shared<zenkit::VTriggerWorldStart>();
		break;
	case ZkVobType_zCCSCamera:
		obj = std::make_shared<zenkit::VCutsceneCamera>();
		break;
	case ZkVobType_zCCamTrj_KeyFrame:
		obj = std::make_shared<zenkit::VCameraTrajectoryFrame>();
		break;
	case ZkVobType_oCTouchDamage:
		obj = std::make_shared<zenkit::VTouchDamage>();
		break;
	case ZkVobType_zCTriggerUntouch:
		obj = std::make_shared<zenkit::VTriggerUntouch>();
		break;
	case ZkVobType_zCEarthquake:
		obj = std::make_shared<zenkit::VEarthquake>();
		break;
	case ZkVobType_oCMOB:
		obj = std::make_shared<zenkit::VMovableObject>();
		break;
	case ZkVobType_oCMobInter:
		obj = std::make_shared<zenkit::VInteractiveObject>();
		break;
	case ZkVobType_oCMobBed:
		obj = std::make_shared<zenkit::VBed>();
		break;
	case ZkVobType_oCMobFire:
		obj = std::make_shared<zenkit::VFire>();
		break;
	case ZkVobType_oCMobLadder:
		obj = std::make_shared<zenkit::VLadder>();
		break;
	case ZkVobType_oCMobSwitch:
		obj = std::make_shared<zenkit::VSwitch>();
		break;
	case ZkVobType_oCMobWheel:
		obj = std::make_shared<zenkit::VWheel>();
		break;
	case ZkVobType_oCMobContainer:
		obj = std::make_shared<zenkit::VContainer>();
		break;
	case ZkVobType_oCMobDoor:
		obj = std::make_shared<zenkit::VDoor>();
		break;
	case ZkVobType_zCTrigger:
		obj = std::make_shared<zenkit::VTrigger>();
		break;
	case ZkVobType_zCTriggerList:
		obj = std::make_shared<zenkit::VTriggerList>();
		break;
	case ZkVobType_oCTriggerScript:
		obj = std::make_shared<zenkit::VTriggerScript>();
		break;
	case ZkVobType_oCTriggerChangeLevel:
		obj = std::make_shared<zenkit::VTriggerChangeLevel>();
		break;
	case ZkVobType_oCCSTrigger:
		obj = std::make_shared<zenkit::VCutsceneTrigger>();
		break;
	case ZkVobType_zCMover:
		obj = std::make_shared<zenkit::VMover>();
		break;
	case ZkVobType_zCVobSound:
		obj = std::make_shared<zenkit::VSound>();
		break;
	case ZkVobType_zCVobSoundDaytime:
		obj = std::make_shared<zenkit::VSoundDaytime>();
		break;
	case ZkVobType_oCZoneMusic:
		obj = std::make_shared<zenkit::VZoneMusic>();
		break;
	case ZkVobType_oCZoneMusicDefault:
		obj = std::make_shared<zenkit::VZoneMusicDefault>();
		break;
	case ZkVobType_zCZoneZFog:
		obj = std::make_shared<zenkit::VZoneFog>();
		break;
	case ZkVobType_zCZoneZFogDefault:
		obj = std::make_shared<zenkit::VZoneFogDefault>();
		break;
	case ZkVobType_zCZoneVobFarPlane:
		obj = std::make_shared<zenkit::VZoneFarPlane>();
		break;
	case ZkVobType_zCZoneVobFarPlaneDefault:
		obj = std::make_shared<zenkit::VZoneFarPlaneDefault>();
		break;
	case ZkVobType_ignored:
	case ZkVobType_unknown:
		type = ZkVobType_zCVob;
		obj = std::make_shared<zenkit::VirtualObject>();
		break;
	}

	obj->type = static_cast<zenkit::VirtualObjectType>(type);
	slf->children.push_back(obj);
	return obj.get();
}

void ZkVirtualObject_removeChild(ZkVirtualObject* slf, ZkSize i) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->children, i);
	slf->children.erase(slf->children.begin() + static_cast<long>(i));
}

void ZkVirtualObject_removeChildren(ZkVirtualObject* slf, ZkVirtualObjectEnumerator pred, void* ctx) {
	ZKC_CHECK_NULLV(slf, pred);

	for (auto it = slf->children.begin(); it != slf->children.end();) {
		if (pred(ctx, it->get())) {
			it = slf->children.erase(it);
		} else {
			++it;
		}
	}
}

ZkString ZkVisual_getName(ZkVisual const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

void ZkVisual_setName(ZkVisual* slf, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	slf->name = name;
}

ZkVisualType ZkVisual_getType(ZkVisual const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkVisualType>(slf->type);
}

ZkString ZkVisualDecal_getName(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

void ZkVisualDecal_setName(ZkVisualDecal* slf, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	slf->name = name;
}

ZkVec2f ZkVisualDecal_getDimension(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dimension;
}

void ZkVisualDecal_setDimension(ZkVisualDecal* slf, ZkVec2f dimension) {
	ZKC_CHECK_NULLV(slf);
	slf->dimension = dimension;
}

ZkVec2f ZkVisualDecal_getOffset(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->offset;
}

void ZkVisualDecal_setOffset(ZkVisualDecal* slf, ZkVec2f offset) {
	ZKC_CHECK_NULLV(slf);
	slf->offset = offset;
}

ZkBool ZkVisualDecal_getTwoSided(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->two_sided;
}

void ZkVisualDecal_setTwoSided(ZkVisualDecal* slf, ZkBool twoSided) {
	ZKC_CHECK_NULLV(slf);
	slf->two_sided = twoSided;
}

ZkAlphaFunction ZkVisualDecal_getAlphaFunc(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAlphaFunction>(slf->alpha_func);
}

void ZkVisualDecal_setAlphaFunc(ZkVisualDecal* slf, ZkAlphaFunction alphaFunc) {
	ZKC_CHECK_NULLV(slf);
	slf->alpha_func = static_cast<zenkit::AlphaFunction>(alphaFunc);
}

float ZkVisualDecal_getTextureAnimFps(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->texture_anim_fps;
}

void ZkVisualDecal_setTextureAnimFps(ZkVisualDecal* slf, float textureAnimFps) {
	ZKC_CHECK_NULLV(slf);
	slf->texture_anim_fps = textureAnimFps;
}

uint8_t ZkVisualDecal_getAlphaWeight(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->alpha_weight;
}

void ZkVisualDecal_setAlphaWeight(ZkVisualDecal* slf, uint8_t alphaWeight) {
	ZKC_CHECK_NULLV(slf);
	slf->alpha_weight = alphaWeight;
}

ZkBool ZkVisualDecal_getIgnoreDaylight(ZkVisualDecal const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ignore_daylight;
}

void ZkVisualDecal_setIgnoreDaylight(ZkVisualDecal* slf, ZkBool ignoreDaylight) {
	ZKC_CHECK_NULLV(slf);
	slf->ignore_daylight = ignoreDaylight;
}
