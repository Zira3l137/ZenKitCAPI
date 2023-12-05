// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "../ModelAnimation.h"
#include "../Stream.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Trigger.hh>
using ZkTrigger = zenkit::VTrigger;
using ZkMover = zenkit::VMover;
using ZkTriggerList = zenkit::VTriggerList;
using ZkTriggerListTarget = zenkit::VTriggerList::Target;
using ZkTriggerScript = zenkit::VTriggerScript;
using ZkTriggerChangeLevel = zenkit::VTriggerChangeLevel;
using ZkTriggerWorldStart = zenkit::VTriggerWorldStart;
using ZkTriggerUntouch = zenkit::VTriggerUntouch;
#else
typedef struct ZkInternal_Trigger ZkTrigger;
typedef struct ZkInternal_Mover ZkMover;
typedef struct ZkInternal_TriggerList ZkTriggerList;
typedef struct ZkInternal_TriggerUntouch ZkTriggerUntouch;
#endif

typedef ZkBool (*ZkTriggerListTargetEnumerator)(void* ctx, ZkTriggerListTarget const* target);

typedef enum {
	ZkMoverBehavior_TOGGLE = 0,
	ZkMoverBehavior_TRIGGER_CONTROL = 1,
	ZkMoverBehavior_OPEN_TIME = 2,
	ZkMoverBehavior_LOOP = 3,
	ZkMoverBehavior_SINGLE_KEYS = 4,
} ZkMoverBehavior;

typedef enum {
	ZkMoverLerpType_CURVE = 0,
	ZkMoverLerpType_LINEAR = 1,
} ZkMoverLerpType;

typedef enum {
	ZkMoverSpeedType_CONSTANT = 0,
	ZkMoverSpeedType_SLOW_START_END = 1,
	ZkMoverSpeedType_SLOW_START = 2,
	ZkMoverSpeedType_SLOW_END = 3,
	ZkMoverSpeedType_SEGMENT_SLOW_START_END = 4,
	ZkMoverSpeedType_SEGMENT_SLOW_START = 5,
	ZkMoverSpeedType_SEGMENT_SLOW_END = 6,
} ZkMoverSpeedType;

typedef enum {
	ZkTriggerBatchMode_ALL = 0,
	ZkTriggerBatchMode_NEXT = 1,
	ZkTriggerBatchMode_RANDOM = 2,
} ZkTriggerBatchMode;

ZKC_API ZkTrigger* ZkTrigger_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTrigger* ZkTrigger_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTrigger_del(ZkTrigger* slf);

ZKC_API ZkString ZkTrigger_getTarget(ZkTrigger const* slf);
ZKC_API uint8_t ZkTrigger_getFlags(ZkTrigger const* slf);
ZKC_API uint8_t ZkTrigger_getFilterFlags(ZkTrigger const* slf);
ZKC_API ZkString ZkTrigger_getVobTarget(ZkTrigger const* slf);
ZKC_API int32_t ZkTrigger_getMaxActivationCount(ZkTrigger const* slf);
ZKC_API float ZkTrigger_getRetriggerDelaySeconds(ZkTrigger const* slf);
ZKC_API float ZkTrigger_getDamageThreshold(ZkTrigger const* slf);
ZKC_API float ZkTrigger_getFireDelaySeconds(ZkTrigger const* slf);

ZKC_API ZkMover* ZkMover_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkMover* ZkMover_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkMover_del(ZkMover* slf);

ZKC_API ZkMoverBehavior ZkMover_getBehavior(ZkMover const* slf);
ZKC_API float ZkMover_getTouchBlockerDamage(ZkMover const* slf);
ZKC_API float ZkMover_getStayOpenTimeSeconds(ZkMover const* slf);
ZKC_API ZkBool ZkMover_getIsLocked(ZkMover const* slf);
ZKC_API ZkBool ZkMover_getAutoLink(ZkMover const* slf);
ZKC_API ZkBool ZkMover_getAutoRotate(ZkMover const* slf);
ZKC_API float ZkMover_getSpeed(ZkMover const* slf);
ZKC_API ZkMoverLerpType ZkMover_getLerpType(ZkMover const* slf);
ZKC_API ZkMoverSpeedType ZkMover_getSpeedType(ZkMover const* slf);
ZKC_API ZkAnimationSample const* ZkMover_getKeyframes(ZkMover const* slf, ZkSize* count);
ZKC_API ZkString ZkMover_getSfxOpenStart(ZkMover const* slf);
ZKC_API ZkString ZkMover_getSfxOpenEnd(ZkMover const* slf);
ZKC_API ZkString ZkMover_getSfxTransitioning(ZkMover const* slf);
ZKC_API ZkString ZkMover_getSfxCloseStart(ZkMover const* slf);
ZKC_API ZkString ZkMover_getSfxCloseEnd(ZkMover const* slf);
ZKC_API ZkString ZkMover_getSfxLock(ZkMover const* slf);
ZKC_API ZkString ZkMover_getSfxUnlock(ZkMover const* slf);
ZKC_API ZkString ZkMover_getSfxUseLocked(ZkMover const* slf);

ZKC_API ZkTriggerList* ZkTriggerList_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerList* ZkTriggerList_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerList_del(ZkTriggerList* slf);

ZKC_API ZkTriggerBatchMode ZkTriggerList_getMode(ZkTriggerList const* slf);
ZKC_API ZkSize ZkTriggerList_getTargetCount(ZkTriggerList const* slf);
ZKC_API ZkTriggerListTarget const* ZkTriggerList_getTarget(ZkTriggerList const* slf, ZkSize i);
ZKC_API void ZkTriggerList_enumerateTargets(ZkTriggerList const* slf, ZkTriggerListTargetEnumerator cb, void* ctx);

ZKC_API ZkString ZkTriggerListTarget_getName(ZkTriggerListTarget const* slf);
ZKC_API float ZkTriggerListTarget_getDelaySeconds(ZkTriggerListTarget const* slf);

ZKC_API ZkTriggerScript* ZkTriggerScript_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerScript* ZkTriggerScript_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerScript_del(ZkTriggerScript* slf);
ZKC_API ZkString ZkTriggerScript_getFunction(ZkTriggerScript const* slf);

ZKC_API ZkTriggerChangeLevel* ZkTriggerChangeLevel_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerChangeLevel* ZkTriggerChangeLevel_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerChangeLevel_del(ZkTriggerChangeLevel* slf);
ZKC_API ZkString ZkTriggerChangeLevel_getLevelName(ZkTriggerChangeLevel const* slf);
ZKC_API ZkString ZkTriggerChangeLevel_getStartVob(ZkTriggerChangeLevel const* slf);

ZKC_API ZkTriggerWorldStart* ZkTriggerWorldStart_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerWorldStart* ZkTriggerWorldStart_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerWorldStart_del(ZkTriggerWorldStart* slf);
ZKC_API ZkString ZkTriggerWorldStart_getTarget(ZkTriggerWorldStart const* slf);
ZKC_API ZkBool ZkTriggerWorldStart_getFireOnce(ZkTriggerWorldStart const* slf);

ZKC_API ZkTriggerUntouch* ZkTriggerUntouch_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerUntouch* ZkTriggerUntouch_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerUntouch_del(ZkTriggerUntouch* slf);
ZKC_API ZkString ZkTriggerUntouch_getTarget(ZkTriggerUntouch const* slf);
