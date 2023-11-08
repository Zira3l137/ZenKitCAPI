// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/vobs/Trigger.h"

#include "../Internal.hh"

CZK_VOB_LOADER(ZkTrigger)
CZK_VOB_PATH_LOADER(ZkTrigger)
CZK_DELETER(ZkTrigger)

ZkString ZkTrigger_getTarget(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->target.c_str();
}

uint8_t ZkTrigger_getFlags(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->flags;
}

uint8_t ZkTrigger_getFilterFlags(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->filter_flags;
}

ZkString ZkTrigger_getVobTarget(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vob_target.c_str();
}

int32_t ZkTrigger_getMaxActivationCount(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->max_activation_count;
}

float ZkTrigger_getRetriggerDelaySeconds(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->retrigger_delay_sec;
}

float ZkTrigger_getDamageThreshold(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->damage_threshold;
}

float ZkTrigger_getFireDelaySeconds(ZkTrigger const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->fire_delay_sec;
}

CZK_VOB_LOADER(ZkMover)
CZK_VOB_PATH_LOADER(ZkMover)
CZK_DELETER(ZkMover)

ZkMoverBehavior ZkMover_getBehavior(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMoverBehavior>(slf->behavior);
}

float ZkMover_getTouchBlockerDamage(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->touch_blocker_damage;
}

float ZkMover_getStayOpenTimeSeconds(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->stay_open_time_sec;
}

ZkBool ZkMover_getIsLocked(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->locked;
}

ZkBool ZkMover_getAutoLink(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->auto_link;
}

ZkBool ZkMover_getAutoRotate(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->auto_rotate;
}

float ZkMover_getSpeed(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->speed;
}

ZkMoverLerpType ZkMover_getLerpType(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMoverLerpType>(slf->lerp_mode);
}

ZkMoverSpeedType ZkMover_getSpeedType(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMoverSpeedType>(slf->speed_mode);
}

ZkAnimationSample const* ZkMover_getKeyframes(ZkMover const* slf, ZkSize* count) {
	CZK_CHECK_NULL(slf, count);

	*count = slf->keyframes.size();
	return slf->keyframes.data();
}

ZkString ZkMover_getSfxOpenStart(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_open_start.c_str();
}

ZkString ZkMover_getSfxOpenEnd(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_open_end.c_str();
}

ZkString ZkMover_getSfxTransitioning(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_transitioning.c_str();
}

ZkString ZkMover_getSfxCloseStart(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_close_start.c_str();
}

ZkString ZkMover_getSfxCloseEnd(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_close_end.c_str();
}

ZkString ZkMover_getSfxLock(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_lock.c_str();
}

ZkString ZkMover_getSfxUnlock(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_unlock.c_str();
}

ZkString ZkMover_getSfxUseLocked(ZkMover const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_use_locked.c_str();
}

CZK_VOB_LOADER(ZkTriggerList)
CZK_VOB_PATH_LOADER(ZkTriggerList)
CZK_DELETER(ZkTriggerList)

ZkTriggerBatchMode ZkTriggerList_getMode(ZkTriggerList const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkTriggerBatchMode>(slf->mode);
}

ZkSize ZkTriggerList_getTargetCount(ZkTriggerList const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->targets.size();
}

ZkTriggerListTarget const* ZkTriggerList_getTarget(ZkTriggerList const* slf, ZkSize i) {
	CZK_CHECK_NULL(slf);
	CZK_CHECK_LEN(slf->targets, i);
	return &slf->targets[i];
}

void ZkTriggerList_enumerateTargets(ZkTriggerList const* slf, ZkTriggerListTargetEnumerator cb, void* ctx) {
	CZK_CHECK_NULLV(slf, cb);

	for (auto& target : slf->targets) {
		if (cb(ctx, &target)) break;
	}
}

ZkString ZkTriggerListTarget_getName(ZkTriggerListTarget const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->name.c_str();
}

float ZkTriggerListTarget_getDelaySeconds(ZkTriggerListTarget const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->delay;
}

CZK_VOB_LOADER(ZkTriggerScript)
CZK_VOB_PATH_LOADER(ZkTriggerScript)
CZK_DELETER(ZkTriggerScript)

ZkString ZkTriggerScript_getFunction(ZkTriggerScript const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->function.c_str();
}

CZK_VOB_LOADER(ZkTriggerChangeLevel)
CZK_VOB_PATH_LOADER(ZkTriggerChangeLevel)
CZK_DELETER(ZkTriggerChangeLevel)

ZkString ZkTriggerChangeLevel_getLevelName(ZkTriggerChangeLevel const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->level_name.c_str();
}

ZkString ZkTriggerChangeLevel_getStartVob(ZkTriggerChangeLevel const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->start_vob.c_str();
}

CZK_VOB_LOADER(ZkTriggerWorldStart)
CZK_VOB_PATH_LOADER(ZkTriggerWorldStart)
CZK_DELETER(ZkTriggerWorldStart)

ZkString ZkTriggerWorldStart_getTarget(ZkTriggerWorldStart const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->target.c_str();
}

ZkBool ZkTriggerWorldStart_getFireOnce(ZkTriggerWorldStart const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->fire_once;
}

CZK_VOB_LOADER(ZkTriggerUntouch)
CZK_VOB_PATH_LOADER(ZkTriggerUntouch)
CZK_DELETER(ZkTriggerUntouch)

ZkString ZkTriggerUntouch_getTarget(ZkTriggerUntouch const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->target.c_str();
}
