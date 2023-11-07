// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Stream.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/ModelScript.hh>
using ZkModelScript = zenkit::ModelScript;
using ZkAnimationCombine = zenkit::MdsAnimationCombine;
using ZkAnimationBlend = zenkit::MdsAnimationBlend;
using ZkAnimationAlias = zenkit::MdsAnimationAlias;
using ZkAnimation = zenkit::MdsAnimation;
using ZkEventTag = zenkit::MdsEventTag;
using ZkEventParticleEffect = zenkit::MdsParticleEffect;
using ZkEventParticleEffectStop = zenkit::MdsParticleEffectStop;
using ZkEventSoundEffect = zenkit::MdsSoundEffect;
using ZkEventSoundEffectGround = zenkit::MdsSoundEffectGround;
using ZkEventMorphAnimation = zenkit::MdsMorphAnimation;
using ZkEventCameraTremor = zenkit::MdsCameraTremor;
#else
typedef struct ZkInternal_ModelScript ZkModelScript;
typedef struct ZkInternal_AnimationCombine ZkAnimationCombine;
typedef struct ZkInternal_AnimationBlend ZkAnimationBlend;
typedef struct ZkInternal_AnimationAlias ZkAnimationAlias;
typedef struct ZkInternal_Animation ZkAnimation;
typedef struct ZkInternal_EventTag ZkEventTag;
typedef struct ZkInternal_EventParticleEffect ZkEventParticleEffect;
typedef struct ZkInternal_EventParticleEffectStop ZkEventParticleEffectStop;
typedef struct ZkInternal_EventSoundEffect ZkEventSoundEffect;
typedef struct ZkInternal_EventSoundEffectGround ZkEventSoundEffectGround;
typedef struct ZkInternal_EventMorphAnimation ZkEventMorphAnimation;
typedef struct ZkInternal_EventCameraTremor ZkEventCameraTremor;
#endif

typedef enum {
	ZkAnimationFlag_NONE = 0,
	ZkAnimationFlag_MOVE = 1,
	ZkAnimationFlag_ROTATE = 2,
	ZkAnimationFlag_QUEUE = 4,
	ZkAnimationFlag_FLY = 8,
	ZkAnimationFlag_IDLE = 16,
	ZkAnimationFlag_INPLACE = 32,
} ZkAnimationFlag;

typedef enum {
	ZkAnimationDirection_FORWARD = 0,
	ZkAnimationDirection_BACKWARD = 1,
} ZkAnimationDirection;

typedef enum {
	ZkEventType_UNKNOWN = 0,
	ZkEventType_ITEM_CREATE = 1,
	ZkEventType_ITEM_INSERT = 2,
	ZkEventType_ITEM_REMOVE = 3,
	ZkEventType_ITEM_DESTROY = 4,
	ZkEventType_ITEM_PLACE = 5,
	ZkEventType_ITEM_EXCHANGE = 6,
	ZkEventType_SET_FIGHT_MODE = 7,
	ZkEventType_MUNITION_PLACE = 8,
	ZkEventType_MUNITION_REMOVE = 9,
	ZkEventType_SOUND_DRAW = 10,
	ZkEventType_SOUND_UNDRAW = 11,
	ZkEventType_MESH_SWAP = 12,
	ZkEventType_TORCH_DRAW = 13,
	ZkEventType_TORCH_INVENTORY = 14,
	ZkEventType_TORCH_DROP = 15,
	ZkEventType_HIT_LIMB = 16,
	ZkEventType_HIT_DIRECTION = 17,
	ZkEventType_DAMAGE_MULTIPLIER = 18,
	ZkEventType_PARRY_FRAME = 19,
	ZkEventType_OPTIMAL_FRAME = 20,
	ZkEventType_HIT_END = 21,
	ZkEventType_COMBO_WINDOW = 22,
} ZkEventType;

typedef enum {
	ZkFightMode_FIST = 0,
	ZkFightMode_SINGLE_HANDED = 1,
	ZkFightMode_DUAL_HANDED = 2,
	ZkFightMode_BOW = 3,
	ZkFightMode_CROSSBOW = 4,
	ZkFightMode_MAGIC = 5,
	ZkFightMode_NONE = 6,
	ZkFightMode_INVALID = 0xFF,
} ZkFightMode;

typedef ZkBool (*ZkAnimationCombineEnumerator)(void* ctx, ZkAnimationCombine const* val);
typedef ZkBool (*ZkAnimationBlendEnumerator)(void* ctx, ZkAnimationBlend const* val);
typedef ZkBool (*ZkAnimationAliasEnumerator)(void* ctx, ZkAnimationAlias const* val);
typedef ZkBool (*ZkAnimationEnumerator)(void* ctx, ZkAnimation const* val);
typedef ZkBool (*ZkEventTagEnumerator)(void* ctx, ZkEventTag const* val);
typedef ZkBool (*ZkEventParticlEffectEnumerator)(void* ctx, ZkEventParticleEffect const* val);
typedef ZkBool (*ZkEventParticleEffectStopEnumerator)(void* ctx, ZkEventParticleEffectStop const* val);
typedef ZkBool (*ZkEventSoundEffectEnumerator)(void* ctx, ZkEventSoundEffect const* val);
typedef ZkBool (*ZkEventSoundEffectGroundEnumerator)(void* ctx, ZkEventSoundEffectGround const* val);
typedef ZkBool (*ZkEventMorphAnimationEnumerator)(void* ctx, ZkEventMorphAnimation const* val);
typedef ZkBool (*ZkEventCameraTremorEnumerator)(void* ctx, ZkEventCameraTremor const* val);

CZK_API ZkModelScript* ZkModelScript_load(ZkRead* buf);
CZK_API ZkModelScript* ZkModelScript_loadPath(ZkString path);
CZK_API ZkModelScript* ZkModelScript_loadVfs(ZkVfs* vfs, ZkString name);
CZK_API void ZkModelScript_del(ZkModelScript* slf);

CZK_API ZkString ZkModelScript_getSkeletonName(ZkModelScript const* slf);
CZK_API ZkBool ZkModelScript_getSkeletonMeshDisabled(ZkModelScript const* slf);

CZK_API ZkSize ZkModelScript_getMeshCount(ZkModelScript const* slf);
CZK_API ZkSize ZkModelScript_getDisabledAnimationsCount(ZkModelScript const* slf);
CZK_API ZkSize ZkModelScript_getAnimationCombineCount(ZkModelScript const* slf);
CZK_API ZkSize ZkModelScript_getAnimationBlendCount(ZkModelScript const* slf);
CZK_API ZkSize ZkModelScript_getAnimationAliasCount(ZkModelScript const* slf);
CZK_API ZkSize ZkModelScript_getModelTagCount(ZkModelScript const* slf);
CZK_API ZkSize ZkModelScript_getAnimationCount(ZkModelScript const* slf);

CZK_API ZkString ZkModelScript_getDisabledAnimation(ZkModelScript const* slf, ZkSize i);
CZK_API ZkString ZkModelScript_getMesh(ZkModelScript const* slf, ZkSize i);
CZK_API ZkAnimationCombine const* ZkModelScript_getAnimationCombine(ZkModelScript const* slf, ZkSize i);
CZK_API ZkAnimationBlend const* ZkModelScript_getAnimationBlend(ZkModelScript const* slf, ZkSize i);
CZK_API ZkAnimationAlias const* ZkModelScript_getAnimationAlias(ZkModelScript const* slf, ZkSize i);
CZK_API ZkString ZkModelScript_getModelTag(ZkModelScript const* slf, ZkSize i);
CZK_API ZkAnimation const* ZkModelScript_getAnimation(ZkModelScript const* slf, ZkSize i);

CZK_API void ZkModelScript_enumerateAnimationCombines(ZkModelScript const* slf, ZkAnimationCombineEnumerator cb, void* ctx);
CZK_API void ZkModelScript_enumerateMeshes(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx);
CZK_API void ZkModelScript_enumerateDisabledAnimations(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx);
CZK_API void ZkModelScript_enumerateAnimationBlends(ZkModelScript const* slf, ZkAnimationBlendEnumerator cb, void* ctx);
CZK_API void ZkModelScript_enumerateAnimationAliases(ZkModelScript const* slf, ZkAnimationAliasEnumerator cb, void* ctx);
CZK_API void ZkModelScript_enumerateModelTags(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx);
CZK_API void ZkModelScript_enumerateAnimations(ZkModelScript const* slf, ZkAnimationEnumerator cb, void* ctx);

// ZkAnimation

CZK_API ZkString ZkAnimation_getName(ZkAnimation const* slf);
CZK_API uint32_t ZkAnimation_getLayer(ZkAnimation const* slf);
CZK_API ZkString ZkAnimation_getNext(ZkAnimation const* slf);
CZK_API float ZkAnimation_getBlendIn(ZkAnimation const* slf);
CZK_API float ZkAnimation_getBlendOut(ZkAnimation const* slf);
CZK_API ZkAnimationFlag ZkAnimation_getFlags(ZkAnimation const* slf);
CZK_API ZkString ZkAnimation_getModel(ZkAnimation const* slf);
CZK_API ZkAnimationDirection ZkAnimation_getDirection(ZkAnimation const* slf);
CZK_API int32_t ZkAnimation_getFirstFrame(ZkAnimation const* slf);
CZK_API int32_t ZkAnimation_getLastFrame(ZkAnimation const* slf);
CZK_API float ZkAnimation_getFps(ZkAnimation const* slf);
CZK_API float ZkAnimation_getSpeed(ZkAnimation const* slf);
CZK_API float ZkAnimation_getCollisionVolumeScale(ZkAnimation const* slf);

CZK_API ZkSize ZkAnimation_getEventTagCount(ZkAnimation const* slf);
CZK_API ZkSize ZkAnimation_getParticleEffectCount(ZkAnimation const* slf);
CZK_API ZkSize ZkAnimation_getParticleEffectStopCount(ZkAnimation const* slf);
CZK_API ZkSize ZkAnimation_getSoundEffectCount(ZkAnimation const* slf);
CZK_API ZkSize ZkAnimation_getSoundEffectGroundCount(ZkAnimation const* slf);
CZK_API ZkSize ZkAnimation_getMorphAnimationCount(ZkAnimation const* slf);
CZK_API ZkSize ZkAnimation_getCameraTremorCount(ZkAnimation const* slf);

CZK_API ZkEventTag const* ZkAnimation_getEventTag(ZkAnimation const* slf, ZkSize i);
CZK_API ZkEventParticleEffect const* ZkAnimation_getParticleEffect(ZkAnimation const* slf, ZkSize i);
CZK_API ZkEventParticleEffectStop const* ZkAnimation_getParticleEffectStop(ZkAnimation const* slf, ZkSize i);
CZK_API ZkEventSoundEffect const* ZkAnimation_getSoundEffect(ZkAnimation const* slf, ZkSize i);
CZK_API ZkEventSoundEffectGround const* ZkAnimation_getSoundEffectGround(ZkAnimation const* slf, ZkSize i);
CZK_API ZkEventMorphAnimation const* ZkAnimation_getMorphAnimation(ZkAnimation const* slf, ZkSize i);
CZK_API ZkEventCameraTremor const* ZkAnimation_getCameraTremor(ZkAnimation const* slf, ZkSize i);

CZK_API void ZkAnimation_enumerateEventTags(ZkAnimation const* slf, ZkEventTagEnumerator cb, void* ctx);
CZK_API void ZkAnimation_enumerateParticleEffects(ZkAnimation const* slf, ZkEventParticlEffectEnumerator cb, void* ctx);
CZK_API void ZkAnimation_enumerateParticleEffectStops(ZkAnimation const* slf, ZkEventParticleEffectStopEnumerator cb, void* ctx);
CZK_API void ZkAnimation_enumerateSoundEffects(ZkAnimation const* slf, ZkEventSoundEffectEnumerator cb, void* ctx);
CZK_API void ZkAnimation_enumerateSoundEffectGrounds(ZkAnimation const* slf, ZkEventSoundEffectGroundEnumerator cb, void* ctx);
CZK_API void ZkAnimation_enumerateMorphAnimations(ZkAnimation const* slf, ZkEventMorphAnimationEnumerator cb, void* ctx);
CZK_API void ZkAnimation_enumerateCameraTremors(ZkAnimation const* slf, ZkEventCameraTremorEnumerator cb, void* ctx);

// ZkEventTag

CZK_API int32_t ZkEventTag_getFrame(ZkEventTag const* slf);
CZK_API ZkEventType ZkEventTag_getType(ZkEventTag const* slf);
CZK_API ZkString ZkEventTag_getSlot(ZkEventTag const* slf, ZkSize i);
CZK_API ZkString ZkEventTag_getItem(ZkEventTag const* slf);
CZK_API int32_t const* ZkEventTag_getFrames(ZkEventTag const* slf, ZkSize* count);
CZK_API ZkFightMode ZkEventTag_getFightMode(ZkEventTag const* slf);
CZK_API ZkBool ZkEventTag_getIsAttached(ZkEventTag const* slf);

// ZkEventParticleEffect

CZK_API int32_t ZkEventParticleEffect_getFrame(ZkEventParticleEffect const* slf);
CZK_API int32_t ZkEventParticleEffect_getIndex(ZkEventParticleEffect const* slf);
CZK_API ZkString ZkEventParticleEffect_getName(ZkEventParticleEffect const* slf);
CZK_API ZkString ZkEventParticleEffect_getPosition(ZkEventParticleEffect const* slf);
CZK_API ZkBool ZkEventParticleEffect_getIsAttached(ZkEventParticleEffect const* slf);

// ZkEventParticleEffectStop

CZK_API int32_t ZkEventParticleEffectStop_getFrame(ZkEventParticleEffectStop const* slf);
CZK_API int32_t ZkEventParticleEffectStop_getIndex(ZkEventParticleEffectStop const* slf);

// ZkEventCameraTremor

CZK_API int32_t ZkEventCameraTremor_getFrame(ZkEventCameraTremor const* slf);
CZK_API int32_t ZkEventCameraTremor_getField1(ZkEventCameraTremor const* slf);
CZK_API int32_t ZkEventCameraTremor_getField2(ZkEventCameraTremor const* slf);
CZK_API int32_t ZkEventCameraTremor_getField3(ZkEventCameraTremor const* slf);
CZK_API int32_t ZkEventCameraTremor_getField4(ZkEventCameraTremor const* slf);

// ZkEventSoundEffect

CZK_API int32_t ZkEventSoundEffect_getFrame(ZkEventSoundEffect const* slf);
CZK_API ZkString ZkEventSoundEffect_getName(ZkEventSoundEffect const* slf);
CZK_API float ZkEventSoundEffect_getRange(ZkEventSoundEffect const* slf);
CZK_API ZkBool ZkEventSoundEffect_getEmptySlot(ZkEventSoundEffect const* slf);

// ZkEventSoundEffectGround

CZK_API int32_t ZkEventSoundEffectGround_getFrame(ZkEventSoundEffectGround const* slf);
CZK_API ZkString ZkEventSoundEffectGround_getName(ZkEventSoundEffectGround const* slf);
CZK_API float ZkEventSoundEffectGround_getRange(ZkEventSoundEffectGround const* slf);
CZK_API ZkBool ZkEventSoundEffectGround_getEmptySlot(ZkEventSoundEffectGround const* slf);

// ZkMorphAnimation

CZK_API int32_t ZkMorphAnimation_getFrame(ZkEventMorphAnimation const* slf);
CZK_API ZkString ZkMorphAnimation_getAnimation(ZkEventMorphAnimation const* slf);
CZK_API ZkString ZkMorphAnimation_getNode(ZkEventMorphAnimation const* slf);

// ZkAnimationCombine

CZK_API ZkString ZkAnimationCombine_getName(ZkAnimationCombine const* slf);
CZK_API uint32_t ZkAnimationCombine_getLayer(ZkAnimationCombine const* slf);
CZK_API ZkString ZkAnimationCombine_getNext(ZkAnimationCombine const* slf);
CZK_API float ZkAnimationCombine_getBlendIn(ZkAnimationCombine const* slf);
CZK_API float ZkAnimationCombine_getBlendOut(ZkAnimationCombine const* slf);
CZK_API ZkAnimationFlag ZkAnimationCombine_getFlags(ZkAnimationCombine const* slf);
CZK_API ZkString ZkAnimationCombine_getModel(ZkAnimationCombine const* slf);
CZK_API int32_t ZkAnimationCombine_getLastFrame(ZkAnimationCombine const* slf);

// ZkAnimationBlend

CZK_API ZkString ZkAnimationBlend_getName(ZkAnimationBlend const* slf);
CZK_API ZkString ZkAnimationBlend_getNext(ZkAnimationBlend const* slf);
CZK_API float ZkAnimationBlend_getBlendIn(ZkAnimationBlend const* slf);
CZK_API float ZkAnimationBlend_getBlendOut(ZkAnimationBlend const* slf);

// ZkAnimationAlias

CZK_API ZkString ZkAnimationAlias_getName(ZkAnimationAlias const* slf);
CZK_API uint32_t ZkAnimationAlias_getLayer(ZkAnimationAlias const* slf);
CZK_API ZkString ZkAnimationAlias_getNext(ZkAnimationAlias const* slf);
CZK_API float ZkAnimationAlias_getBlendIn(ZkAnimationAlias const* slf);
CZK_API float ZkAnimationAlias_getBlendOut(ZkAnimationAlias const* slf);
CZK_API ZkAnimationFlag ZkAnimationAlias_getFlags(ZkAnimationAlias const* slf);
CZK_API ZkString ZkAnimationAlias_getAlias(ZkAnimationAlias const* slf);
CZK_API ZkAnimationDirection ZkAnimationAlias_getDirection(ZkAnimationAlias const* slf);
