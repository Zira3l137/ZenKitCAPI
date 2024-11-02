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

ZkVirtualObject* ZkVirtualObject_new(ZkVobType type) {
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
	return new ZkVirtualObject(std::move(obj));
}

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

	if (!SLF->visual) {
		return nullptr;
	}

	return &SLF->visual;
}

void ZkVirtualObject_setVisual(ZkVirtualObject* slf, ZkVisual* visual) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->visual = visual ? *visual : nullptr;
}

ZkByte ZkVirtualObject_getSleepMode(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->sleep_mode;
}

void ZkVirtualObject_setSleepMode(ZkVirtualObject* slf, ZkByte sleepMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->sleep_mode = sleepMode;
}

float ZkVirtualObject_getNextOnTimer(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->next_on_timer;
}

void ZkVirtualObject_setNextOnTimer(ZkVirtualObject* slf, float nextOnTimer) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->next_on_timer = nextOnTimer;
}

ZkAi* ZkVirtualObject_getAi(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ai ? &SLF->ai : nullptr;
}

void ZkVirtualObject_setAi(ZkVirtualObject* slf, ZkAi* ai) {
	ZKC_CHECK_NULLV(slf);
	SLF->ai = ai ? *ai : nullptr;
}

ZkEventManager* ZkVirtualObject_getEventManager(ZkVirtualObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->event_manager ? &SLF->event_manager : nullptr;
}

void ZkVirtualObject_setEventManager(ZkVirtualObject* slf, ZkEventManager* em) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->event_manager = em ? *em : nullptr;
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

void ZkVirtualObject_addChild(ZkVirtualObject* slf, ZkVirtualObject* object) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, object);
	SLF->children.push_back(*object);
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

ZkVisual* ZkVisual_new(ZkVisualType type) {
	ZKC_TRACE_FN();

	switch (type) {
	case ZkVisualType_DECAL:
		return new ZkVisual(std::make_shared<zenkit::VisualDecal>());
	case ZkVisualType_MESH:
		return new ZkVisual(std::make_shared<zenkit::VisualMesh>());
	case ZkVisualType_MULTI_RESOLUTION_MESH:
		return new ZkVisual(std::make_shared<zenkit::VisualMultiResolutionMesh>());
	case ZkVisualType_PARTICLE_EFFECT:
		return new ZkVisual(std::make_shared<zenkit::VisualParticleEffect>());
	case ZkVisualType_CAMERA:
		return new ZkVisual(std::make_shared<zenkit::VisualCamera>());
	case ZkVisualType_MODEL:
		return new ZkVisual(std::make_shared<zenkit::VisualModel>());
	case ZkVisualType_MORPH_MESH:
		return new ZkVisual(std::make_shared<zenkit::VisualMorphMesh>());
	default:
		ZKC_LOG_ERROR("ZkVisual_new() failed: invalid visual type");
		return nullptr;
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

ZkAi* ZkAi_new(ZkAiType type) {
	ZKC_TRACE_FN();
	switch (type) {
	case ZkAiType_HUMAN:
		return new ZkAi(std::make_shared<zenkit::AiHuman>());
	case ZkAiType_MOVE:
		return new ZkAi(std::make_shared<zenkit::AiMove>());
	default:
		ZKC_LOG_ERROR("ZkAi_new() failed: invalid AI type");
		return nullptr;
	}
}

ZKC_DELETER(ZkAi);

ZkAiType ZkAi_getType(ZkAi const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->get_object_type() == zenkit::ObjectType::oCAIHuman ? ZkAiType_HUMAN : ZkAiType_MOVE;
}

int ZkAiHuman_getWaterLevel(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->water_level;
}

float ZkAiHuman_getFloorY(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->floor_y;
}

float ZkAiHuman_getWaterY(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->water_y;
}

float ZkAiHuman_getCeilY(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ceil_y;
}

float ZkAiHuman_getFeetY(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->feet_y;
}

float ZkAiHuman_getHeadY(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->head_y;
}

float ZkAiHuman_getFallDistY(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fall_dist_y;
}

float ZkAiHuman_getFallStartY(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fall_start_y;
}

ZkNpc* ZkAiHuman_getNpc(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	auto npc = SLF->npc.lock();
	return npc ? new ZkNpc(std::move(npc)) : nullptr;
}

int ZkAiHuman_getWalkMode(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->walk_mode;
}

int ZkAiHuman_getWeaponMode(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->weapon_mode;
}

int ZkAiHuman_getWmodeAst(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->wmode_ast;
}

int ZkAiHuman_getWmodeSelect(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->wmode_select;
}

ZkBool ZkAiHuman_getChangeWeapon(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->change_weapon;
}

int ZkAiHuman_getActionMode(ZkAiHuman const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->action_mode;
}

void ZkAiHuman_setWaterLevel(ZkAiHuman* slf, int water_level) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->water_level = water_level;
}

void ZkAiHuman_setFloorY(ZkAiHuman* slf, float floor_y) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->floor_y = floor_y;
}

void ZkAiHuman_setWaterY(ZkAiHuman* slf, float water_y) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->water_y = water_y;
}

void ZkAiHuman_setCeilY(ZkAiHuman* slf, float ceil_y) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ceil_y = ceil_y;
}

void ZkAiHuman_setFeetY(ZkAiHuman* slf, float feet_y) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->feet_y = feet_y;
}

void ZkAiHuman_setHeadY(ZkAiHuman* slf, float head_y) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->head_y = head_y;
}

void ZkAiHuman_setFallDistY(ZkAiHuman* slf, float fall_dist_y) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fall_dist_y = fall_dist_y;
}

void ZkAiHuman_setFallStartY(ZkAiHuman* slf, float fall_start_y) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fall_start_y = fall_start_y;
}

void ZkAiHuman_setNpc(ZkAiHuman* slf, ZkNpc* npc) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npc = npc ? *npc : nullptr;
}

void ZkAiHuman_setWalkMode(ZkAiHuman* slf, int walk_mode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->walk_mode = walk_mode;
}

void ZkAiHuman_setWeaponMode(ZkAiHuman* slf, int weapon_mode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->weapon_mode = weapon_mode;
}

void ZkAiHuman_setWmodeAst(ZkAiHuman* slf, int wmode_ast) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->wmode_ast = wmode_ast;
}

void ZkAiHuman_setWmodeSelect(ZkAiHuman* slf, int wmode_select) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->wmode_select = wmode_select;
}

void ZkAiHuman_setChangeWeapon(ZkAiHuman* slf, ZkBool change_weapon) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->change_weapon = change_weapon;
}

void ZkAiHuman_setActionMode(ZkAiHuman* slf, int action_mode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->action_mode = action_mode;
}

ZkVirtualObject* ZkAiMove_getVob(ZkAiMove const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	auto vob = SLF->vob.lock();
	return vob ? new ZkVirtualObject(std::move(vob)) : nullptr;
}

void ZkAiMove_setVob(ZkAiMove* slf, ZkVirtualObject* vob) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->vob = vob ? *vob : nullptr;
}

ZkNpc* ZkAiMove_getOwner(ZkAiMove const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	auto owner = SLF->owner.lock();
	return owner ? new ZkNpc(std::move(owner)) : nullptr;
}

void ZkAiMove_setOwner(ZkAiMove* slf, ZkNpc* owner) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->owner = owner ? *owner : nullptr;
}

ZkEventManager* ZkEventManager_new(void) {
	ZKC_TRACE_FN();
	return new ZkEventManager(std::make_shared<zenkit::EventManager>());
}

ZKC_DELETER(ZkEventManager);

ZkBool ZkEventManager_getCleared(ZkEventManager const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->cleared;
}

void ZkEventManager_setCleared(ZkEventManager* slf, ZkBool cleared) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->cleared = cleared;
}

ZkBool ZkEventManager_getActive(ZkEventManager const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->active;
}

void ZkEventManager_setActive(ZkEventManager* slf, ZkBool active) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->active = active;
}

ZkCutsceneContextFwd* ZkEventManager_getCutscene(ZkEventManager const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());

	auto handle = SLF->cutscene.lock();
	if (handle == nullptr) return nullptr;

	return ZKC_WRAP_NEW(handle);
}

void ZkEventManager_setCutscene(ZkEventManager* slf, ZkCutsceneContextFwd* cutscene) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());

	if (cutscene == nullptr) {
		SLF->cutscene.reset();
		return;
	}

	SLF->cutscene = *cutscene;
}
