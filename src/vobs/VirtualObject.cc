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
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkVobType>(SLF->type);
}

uint32_t ZkVirtualObject_getId(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->id;
}

ZkAxisAlignedBoundingBox ZkVirtualObject_getBbox(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->bbox;
}

void ZkVirtualObject_setBbox(ZkVirtualObject* slf, ZkAxisAlignedBoundingBox bbox) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->bbox = bbox;
}

ZkVec3f ZkVirtualObject_getPosition(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->position;
}

void ZkVirtualObject_setPosition(ZkVirtualObject* slf, ZkVec3f position) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->position = position;
}

ZkMat3x3 ZkVirtualObject_getRotation(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rotation;
}

void ZkVirtualObject_setRotation(ZkVirtualObject* slf, ZkMat3x3 rotation) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rotation = rotation;
}

ZkBool ZkVirtualObject_getShowVisual(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->show_visual;
}

void ZkVirtualObject_setShowVisual(ZkVirtualObject* slf, ZkBool showVisual) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->show_visual = showVisual;
}

ZkSpriteAlignment ZkVirtualObject_getSpriteCameraFacingMode(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSpriteAlignment>(SLF->sprite_camera_facing_mode);
}

void ZkVirtualObject_setSpriteCameraFacingMode(ZkVirtualObject* slf, ZkSpriteAlignment spriteCameraFacingMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->sprite_camera_facing_mode = static_cast<zenkit::SpriteAlignment>(spriteCameraFacingMode);
}

ZkBool ZkVirtualObject_getCdStatic(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->cd_static;
}

void ZkVirtualObject_setCdStatic(ZkVirtualObject* slf, ZkBool cdStatic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->cd_static = cdStatic;
}

ZkBool ZkVirtualObject_getCdDynamic(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->cd_dynamic;
}

void ZkVirtualObject_setCdDynamic(ZkVirtualObject* slf, ZkBool cdDynamic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->cd_dynamic = cdDynamic;
}

ZkBool ZkVirtualObject_getVobStatic(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->vob_static;
}

void ZkVirtualObject_setVobStatic(ZkVirtualObject* slf, ZkBool vobStatic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->vob_static = vobStatic;
}

ZkShadowType ZkVirtualObject_getDynamicShadows(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkShadowType>(SLF->dynamic_shadows);
}

void ZkVirtualObject_setDynamicShadows(ZkVirtualObject* slf, ZkShadowType dynamicShadows) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->dynamic_shadows = static_cast<zenkit::ShadowType>(dynamicShadows);
}

ZkBool ZkVirtualObject_getPhysicsEnabled(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->physics_enabled;
}

void ZkVirtualObject_setPhysicsEnabled(ZkVirtualObject* slf, ZkBool physicsEnabled) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->physics_enabled = physicsEnabled;
}

ZkAnimationType ZkVirtualObject_getAnimMode(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationType>(SLF->anim_mode);
}

void ZkVirtualObject_setAnimMode(ZkVirtualObject* slf, ZkAnimationType animMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->anim_mode = static_cast<zenkit::AnimationType>(animMode);
}

int32_t ZkVirtualObject_getBias(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->bias;
}

void ZkVirtualObject_setBias(ZkVirtualObject* slf, int32_t bias) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->bias = bias;
}

ZkBool ZkVirtualObject_getAmbient(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ambient;
}

void ZkVirtualObject_setAmbient(ZkVirtualObject* slf, ZkBool ambient) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ambient = ambient;
}

float ZkVirtualObject_getAnimStrength(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->anim_strength;
}

void ZkVirtualObject_setAnimStrength(ZkVirtualObject* slf, float animStrength) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->anim_strength = animStrength;
}

float ZkVirtualObject_getFarClipScale(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->far_clip_scale;
}

void ZkVirtualObject_setFarClipScale(ZkVirtualObject* slf, float farClipScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->far_clip_scale = farClipScale;
}

ZkString ZkVirtualObject_getPresetName(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->preset_name.c_str();
}

void ZkVirtualObject_setPresetName(ZkVirtualObject* slf, ZkString presetName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->preset_name = presetName;
}

ZkString ZkVirtualObject_getName(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->vob_name.c_str();
}

void ZkVirtualObject_setName(ZkVirtualObject* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->vob_name = name;
}

ZkVisual* ZkVirtualObject_getVisual(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return new ZkVisual(SLF->visual);
}

ZkVisual* ZkVirtualObject_setVisual(ZkVirtualObject* slf, ZkVisualType visual) {
	ZKC_TRACE_FN();
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
		SLF->visual = nullptr;
		return nullptr;
	}

	obj->type = static_cast<zenkit::VisualType>(visual);
	SLF->visual = obj;
	return &SLF->visual;
}

ZkSize ZkVirtualObject_getChildCount(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->children.size();
}

ZkVirtualObject* ZkVirtualObject_getChild(ZkVirtualObject const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->children, i);
	return &SLF->children[i];
}

void ZkVirtualObject_enumerateChildren(ZkVirtualObject const* slf, ZkVirtualObjectEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVirtualObject_enumerateChildren");
		return;
	}

	for (auto obj : SLF->children) {
		if (cb(ctx, &obj)) break;
	}
}

ZkVirtualObject* ZkVirtualObject_addChild(ZkVirtualObject* slf, ZkVobType type) {
	ZKC_TRACE_FN();
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
	SLF->children.push_back(obj);
	return &SLF->children.back();
}

void ZkVirtualObject_removeChild(ZkVirtualObject* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->children, i);
	SLF->children.erase(SLF->children.begin() + static_cast<long>(i));
}

void ZkVirtualObject_removeChildren(ZkVirtualObject* slf, ZkVirtualObjectEnumerator pred, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, pred);

	for (auto it = SLF->children.begin(); it != SLF->children.end();) {
		if (pred(ctx, &*it)) {
			it = SLF->children.erase(it);
		} else {
			++it;
		}
	}
}

ZKC_DELETER(ZkVisual);

ZkString ZkVisual_getName(ZkVisual const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->name.c_str();
}

void ZkVisual_setName(ZkVisual* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->name = name;
}

ZkVisualType ZkVisual_getType(ZkVisual const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkVisualType>(SLF->type);
}

ZkString ZkVisualDecal_getName(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->name.c_str();
}

void ZkVisualDecal_setName(ZkVisualDecal* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->name = name;
}

ZkVec2f ZkVisualDecal_getDimension(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->dimension;
}

void ZkVisualDecal_setDimension(ZkVisualDecal* slf, ZkVec2f dimension) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->dimension = dimension;
}

ZkVec2f ZkVisualDecal_getOffset(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->offset;
}

void ZkVisualDecal_setOffset(ZkVisualDecal* slf, ZkVec2f offset) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->offset = offset;
}

ZkBool ZkVisualDecal_getTwoSided(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->two_sided;
}

void ZkVisualDecal_setTwoSided(ZkVisualDecal* slf, ZkBool twoSided) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->two_sided = twoSided;
}

ZkAlphaFunction ZkVisualDecal_getAlphaFunc(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAlphaFunction>(SLF->alpha_func);
}

void ZkVisualDecal_setAlphaFunc(ZkVisualDecal* slf, ZkAlphaFunction alphaFunc) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->alpha_func = static_cast<zenkit::AlphaFunction>(alphaFunc);
}

float ZkVisualDecal_getTextureAnimFps(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->texture_anim_fps;
}

void ZkVisualDecal_setTextureAnimFps(ZkVisualDecal* slf, float textureAnimFps) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->texture_anim_fps = textureAnimFps;
}

uint8_t ZkVisualDecal_getAlphaWeight(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->alpha_weight;
}

void ZkVisualDecal_setAlphaWeight(ZkVisualDecal* slf, uint8_t alphaWeight) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->alpha_weight = alphaWeight;
}

ZkBool ZkVisualDecal_getIgnoreDaylight(ZkVisualDecal const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ignore_daylight;
}

void ZkVisualDecal_setIgnoreDaylight(ZkVisualDecal* slf, ZkBool ignoreDaylight) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ignore_daylight = ignoreDaylight;
}
