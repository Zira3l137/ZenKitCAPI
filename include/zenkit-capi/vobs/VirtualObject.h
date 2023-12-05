// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Material.h"
#include "../Matrix.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/vobs/VirtualObject.hh>
using ZkVirtualObject = zenkit::VirtualObject;
using ZkVisual = zenkit::Visual;
using ZkDecal = zenkit::VisualDecal;
#else
typedef struct ZkInternal_VirtualObject ZkVirtualObject;
typedef struct ZkInternal_Visual ZkVisual;
typedef struct ZkInternal_Decal ZkDecal;
#endif

typedef ZkBool (*ZkVirtualObjectEnumerator)(void* ctx, ZkVirtualObject const* vob);

typedef enum {
	ZkVobType_zCVob = 0,
	ZkVobType_zCVobLevelCompo = 1,
	ZkVobType_oCItem = 2,
	ZkVobType_oCNpc = 3,
	ZkVobType_zCMoverController = 4,
	ZkVobType_zCVobScreenFX = 5,
	ZkVobType_zCVobStair = 6,
	ZkVobType_zCPFXController = 7,
	ZkVobType_zCVobAnimate = 8,
	ZkVobType_zCVobLensFlare = 9,
	ZkVobType_zCVobLight = 10,
	ZkVobType_zCVobSpot = 11,
	ZkVobType_zCVobStartpoint = 12,
	ZkVobType_zCMessageFilter = 13,
	ZkVobType_zCCodeMaster = 14,
	ZkVobType_zCTriggerWorldStart = 15,
	ZkVobType_zCCSCamera = 16,
	ZkVobType_zCCamTrj_KeyFrame = 17,
	ZkVobType_oCTouchDamage = 18,
	ZkVobType_zCTriggerUntouch = 19,
	ZkVobType_zCEarthquake = 20,
	ZkVobType_oCMOB = 21,
	ZkVobType_oCMobInter = 22,
	ZkVobType_oCMobBed = 23,
	ZkVobType_oCMobFire = 24,
	ZkVobType_oCMobLadder = 25,
	ZkVobType_oCMobSwitch = 26,
	ZkVobType_oCMobWheel = 27,
	ZkVobType_oCMobContainer = 28,
	ZkVobType_oCMobDoor = 29,
	ZkVobType_zCTrigger = 30,
	ZkVobType_zCTriggerList = 31,
	ZkVobType_oCTriggerScript = 32,
	ZkVobType_oCTriggerChangeLevel = 33,
	ZkVobType_oCCSTrigger = 34,
	ZkVobType_zCMover = 35,
	ZkVobType_zCVobSound = 36,
	ZkVobType_zCVobSoundDaytime = 37,
	ZkVobType_oCZoneMusic = 38,
	ZkVobType_oCZoneMusicDefault = 39,
	ZkVobType_zCZoneZFog = 40,
	ZkVobType_zCZoneZFogDefault = 41,
	ZkVobType_zCZoneVobFarPlane = 42,
	ZkVobType_zCZoneVobFarPlaneDefault = 43,
	ZkVobType_ignored = 44,
	ZkVobType_unknown = 45,
} ZkVobType;

typedef enum {
	ZkSpriteAlignment_NONE = 0,
	ZkSpriteAlignment_YAW = 1,
	ZkSpriteAlignment_FULL = 2,
} ZkSpriteAlignment;

typedef enum {
	ZkShadowType_NONE = 0,
	ZkShadowType_BLOB = 1,
} ZkShadowType;

typedef enum {
	ZkAnimationType_NONE = 0,
	ZkAnimationType_WIND = 1,
	ZkAnimationType_WIND_ALT = 2,
} ZkAnimationType;

typedef enum {
	ZkVisualType_DECAL = 0,
	ZkVisualType_MESH = 1,
	ZkVisualType_MULTI_RESOLUTION_MESH = 2,
	ZkVisualType_PARTICLE_EFFECT = 3,
	ZkVisualType_CAMERA = 4,
	ZkVisualType_MODEL = 5,
	ZkVisualType_MORPH_MESH = 6,
	ZkVisualType_UNKNOWN = 7,
} ZkVisualType;

ZKC_API ZkVirtualObject* ZkVirtualObject_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkVirtualObject* ZkVirtualObject_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkVirtualObject_del(ZkVirtualObject* slf);

ZKC_API ZkVobType ZkVirtualObject_getType(ZkVirtualObject const* slf);
ZKC_API uint32_t ZkVirtualObject_getId(ZkVirtualObject const* slf);
ZKC_API ZkAxisAlignedBoundingBox ZkVirtualObject_getBbox(ZkVirtualObject const* slf);
ZKC_API ZkVec3f ZkVirtualObject_getPosition(ZkVirtualObject const* slf);
ZKC_API ZkMat3x3 ZkVirtualObject_getRotation(ZkVirtualObject const* slf);
ZKC_API ZkBool ZkVirtualObject_getShowVisual(ZkVirtualObject const* slf);
ZKC_API ZkSpriteAlignment ZkVirtualObject_getSpriteCameraFacingMode(ZkVirtualObject const* slf);
ZKC_API ZkBool ZkVirtualObject_getCdStatic(ZkVirtualObject const* slf);
ZKC_API ZkBool ZkVirtualObject_getCdDynamic(ZkVirtualObject const* slf);
ZKC_API ZkBool ZkVirtualObject_getVobStatic(ZkVirtualObject const* slf);
ZKC_API ZkShadowType ZkVirtualObject_getDynamicShadows(ZkVirtualObject const* slf);
ZKC_API ZkBool ZkVirtualObject_getPhysicsEnabled(ZkVirtualObject const* slf);
ZKC_API ZkAnimationType ZkVirtualObject_getAnimMode(ZkVirtualObject const* slf);
ZKC_API int32_t ZkVirtualObject_getBias(ZkVirtualObject const* slf);
ZKC_API ZkBool ZkVirtualObject_getAmbient(ZkVirtualObject const* slf);
ZKC_API float ZkVirtualObject_getAnimStrength(ZkVirtualObject const* slf);
ZKC_API float ZkVirtualObject_getFarClipScale(ZkVirtualObject const* slf);
ZKC_API ZkString ZkVirtualObject_getPresetName(ZkVirtualObject const* slf);
ZKC_API ZkString ZkVirtualObject_getName(ZkVirtualObject const* slf);
ZKC_API ZkVisual const* ZkVirtualObject_getVisual(ZkVirtualObject const* slf);

ZKC_API ZkSize ZkVirtualObject_getChildCount(ZkVirtualObject const* slf);
ZKC_API ZkVirtualObject const* ZkVirtualObject_getChild(ZkVirtualObject const* slf, ZkSize i);
ZKC_API void ZkVirtualObject_enumerateChildren(ZkVirtualObject const* slf, ZkVirtualObjectEnumerator cb, void* ctx);

// TODO(lmichaelis): Implement save-games
// ZKC_API std::optional<SaveState> ZkVirtualObject_getSaved(ZkVirtualObject const* slf);

ZKC_API ZkString ZkVisual_getName(ZkVisual const* slf);
ZKC_API ZkVisualType ZkVisual_getType(ZkVisual const* slf);

ZKC_API ZkString ZkDecal_getName(ZkDecal const* slf);
ZKC_API ZkVec2f ZkDecal_getDimension(ZkDecal const* slf);
ZKC_API ZkVec2f ZkDecal_getOffset(ZkDecal const* slf);
ZKC_API ZkBool ZkDecal_getTwoSided(ZkDecal const* slf);
ZKC_API ZkAlphaFunction ZkDecal_getAlphaFunc(ZkDecal const* slf);
ZKC_API float ZkDecal_getTextureAnimFps(ZkDecal const* slf);
ZKC_API uint8_t ZkDecal_getAlphaWeight(ZkDecal const* slf);
ZKC_API ZkBool ZkDecal_getIgnoreDaylight(ZkDecal const* slf);
