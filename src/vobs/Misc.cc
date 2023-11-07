// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/vobs/Misc.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>

CZK_VOB_LOADER(ZkAnimate)
CZK_VOB_PATH_LOADER(ZkAnimate)
CZK_DELETER(ZkAnimate)

ZkBool ZkAnimate_getStartOn(ZkAnimate const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->start_on;
}

CZK_VOB_LOADER(ZkItem)
CZK_VOB_PATH_LOADER(ZkItem)
CZK_DELETER(ZkItem)

ZkString ZkItem_getInstance(ZkItem const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->instance.c_str();
}

CZK_VOB_LOADER(ZkLensFlare)
CZK_VOB_PATH_LOADER(ZkLensFlare)
CZK_DELETER(ZkLensFlare)

ZkString ZkLensFlare_getEffect(ZkLensFlare const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->fx.c_str();
}

CZK_VOB_LOADER(ZkParticleEffectController)
CZK_VOB_PATH_LOADER(ZkParticleEffectController)
CZK_DELETER(ZkParticleEffectController)

ZkString ZkParticleEffectController_getEffectName(ZkParticleEffectController const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->pfx_name.c_str();
}

ZkBool ZkParticleEffectController_getKillWhenDone(ZkParticleEffectController const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->kill_when_done;
}

ZkBool ZkParticleEffectController_getInitiallyRunning(ZkParticleEffectController const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->initially_running;
}

CZK_VOB_LOADER(ZkMessageFilter)
CZK_VOB_PATH_LOADER(ZkMessageFilter)
CZK_DELETER(ZkMessageFilter)

ZkString ZkMessageFilter_getTarget(ZkMessageFilter const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->target.c_str();
}

ZkMessageFilterAction ZkMessageFilter_getOnTrigger(ZkMessageFilter const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(slf->on_trigger);
}

ZkMessageFilterAction ZkMessageFilter_getOnUntrigger(ZkMessageFilter const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(slf->on_untrigger);
}

CZK_VOB_LOADER(ZkCodeMaster)
CZK_VOB_PATH_LOADER(ZkCodeMaster)
CZK_DELETER(ZkCodeMaster)

ZkString ZkCodeMaster_getTarget(ZkCodeMaster const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->target.c_str();
}

ZkBool ZkCodeMaster_getOrdered(ZkCodeMaster const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->ordered;
}

ZkBool ZkCodeMaster_getFirstFalseIsFailure(ZkCodeMaster const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->first_false_is_failure;
}

ZkString ZkCodeMaster_getFailureTarget(ZkCodeMaster const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->failure_target.c_str();
}

ZkBool ZkCodeMaster_getUntriggeredCancels(ZkCodeMaster const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->untriggered_cancels;
}

ZkSize ZkCodeMaster_getSlaveCount(ZkCodeMaster const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->slaves.size();
}

ZkString ZkCodeMaster_getSlave(ZkCodeMaster const* slf, ZkSize i) {
	CZK_CHECK_NULL(slf);
	CZK_CHECK_LEN(slf->slaves, i);
	return slf->slaves[i].c_str();
}

void ZkCodeMaster_enumerateSlaves(ZkCodeMaster const* slf, ZkStringEnumerator cb, void* ctx) {
	CZK_CHECK_NULLV(slf, cb);

	for (auto& it : slf->slaves) {
		if (cb(ctx, it.c_str())) break;
	}
}

CZK_VOB_LOADER(ZkMoverController)
CZK_VOB_PATH_LOADER(ZkMoverController)
CZK_DELETER(ZkMoverController)

ZkString ZkMoverController_getTarget(ZkMoverController const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->target.c_str();
}

ZkMoverMessageType ZkMoverController_getMessage(ZkMoverController const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMoverMessageType>(slf->message);
}

int32_t ZkMoverController_getKey(ZkMoverController const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->key;
}

CZK_VOB_LOADER(ZkTouchDamage)
CZK_VOB_PATH_LOADER(ZkTouchDamage)
CZK_DELETER(ZkTouchDamage)

float ZkTouchDamage_getDamage(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->damage;
}

ZkBool ZkTouchDamage_getIsBarrier(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->barrier;
}

ZkBool ZkTouchDamage_getIsBlunt(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->blunt;
}

ZkBool ZkTouchDamage_getIsEdge(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->edge;
}

ZkBool ZkTouchDamage_getIsFire(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->fire;
}

ZkBool ZkTouchDamage_getIsFly(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->fly;
}

ZkBool ZkTouchDamage_getIsMagic(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->magic;
}

ZkBool ZkTouchDamage_getIsPoint(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->point;
}

ZkBool ZkTouchDamage_getIsFall(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->fall;
}

float ZkTouchDamage_getRepeatDelaySeconds(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->repeat_delay_sec;
}

float ZkTouchDamage_getVolumeScale(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->volume_scale;
}

ZkTouchCollisionType ZkTouchDamage_getCollisionType(ZkTouchDamage const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkTouchCollisionType>(slf->collision);
}

CZK_VOB_LOADER(ZkEarthquake)
CZK_VOB_PATH_LOADER(ZkEarthquake)
CZK_DELETER(ZkEarthquake)

float ZkEarthquake_getRadius(ZkEarthquake const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->radius;
}

float ZkEarthquake_getDuration(ZkEarthquake const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->duration;
}

ZkVec3f ZkEarthquake_getAmplitude(ZkEarthquake const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->amplitude;
}
