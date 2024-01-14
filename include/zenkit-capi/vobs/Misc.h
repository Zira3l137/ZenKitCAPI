// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "../Material.h"
#include "../Object.h"
#include "../Vector.h"

#include "VirtualObject.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Misc.hh>
using ZkAnimate = ZkSharedHandle<zenkit::VAnimate>;
using ZkItem = ZkSharedHandle<zenkit::VItem>;
using ZkLensFlare = ZkSharedHandle<zenkit::VLensFlare>;
using ZkParticleEffectController = ZkSharedHandle<zenkit::VParticleEffectController>;
using ZkMessageFilter = ZkSharedHandle<zenkit::VMessageFilter>;
using ZkCodeMaster = ZkSharedHandle<zenkit::VCodeMaster>;
using ZkMoverController = ZkSharedHandle<zenkit::VMoverController>;
using ZkTouchDamage = ZkSharedHandle<zenkit::VTouchDamage>;
using ZkEarthquake = ZkSharedHandle<zenkit::VEarthquake>;
using ZkNpcTalent = ZkSharedHandle<zenkit::VNpc::Talent>;
using ZkNpcSlot = zenkit::VNpc::Slot;
#else
typedef struct ZkInternal_Animate ZkAnimate;
typedef struct ZkInternal_Item ZkItem;
typedef struct ZkInternal_LensFlare ZkLensFlare;
typedef struct ZkInternal_ParticleEffectController ZkParticleEffectController;
typedef struct ZkInternal_MessageFilter ZkMessageFilter;
typedef struct ZkInternal_CodeMaster ZkCodeMaster;
typedef struct ZkInternal_MoverController ZkMoverController;
typedef struct ZkInternal_TouchDamager ZkTouchDamage;
typedef struct ZkInternal_Earthquake ZkEarthquake;
typedef struct ZkInternal_NpcTalent ZkNpcTalent;
typedef struct ZkInternal_NpcSlot ZkNpcSlot;
#endif

typedef enum {
	ZkMessageFilterAction_NONE = 0,
	ZkMessageFilterAction_TRIGGER = 1,
	ZkMessageFilterAction_UNTRIGGER = 2,
	ZkMessageFilterAction_ENABLE = 3,
	ZkMessageFilterAction_DISABLE = 4,
	ZkMessageFilterAction_TOGGLE = 5,
} ZkMessageFilterAction;

typedef enum {
	ZkMoverMessageType_FIXED_DIRECT = 0,
	ZkMoverMessageType_FIXED_ORDER = 1,
	ZkMoverMessageType_NEXT = 2,
	ZkMoverMessageType_PREVIOUS = 3,
} ZkMoverMessageType;

typedef enum {
	ZkTouchCollisionType_NONE = 0,
	ZkTouchCollisionType_BOX = 1,
	ZkTouchCollisionType_POINT = 2,
} ZkTouchCollisionType;

ZKC_API ZkAnimate* ZkAnimate_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkAnimate* ZkAnimate_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkAnimate_del(ZkAnimate* slf);
ZKC_API ZkBool ZkAnimate_getStartOn(ZkAnimate const* slf);
ZKC_API void ZkAnimate_setStartOn(ZkAnimate* slf, ZkBool startOn);
ZKC_API ZkBool ZkAnimate_getIsRunning(ZkAnimate const* slf);
ZKC_API void ZkAnimate_setIsRunning(ZkAnimate* slf, ZkBool isRunning);

ZKC_API ZkItem* ZkItem_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkItem* ZkItem_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkItem_del(ZkItem* slf);
ZKC_API ZkString ZkItem_getInstance(ZkItem const* slf);
ZKC_API void ZkItem_setInstance(ZkItem* slf, ZkString instance);
ZKC_API int ZkItem_getAmount(ZkItem const* slf);
ZKC_API void ZkItem_setAmount(ZkItem* slf, int amount);
ZKC_API int ZkItem_getFlags(ZkItem const* slf);
ZKC_API void ZkItem_setFlags(ZkItem* slf, int flags);

ZKC_API ZkLensFlare* ZkLensFlare_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkLensFlare* ZkLensFlare_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkLensFlare_del(ZkLensFlare* slf);
ZKC_API ZkString ZkLensFlare_getEffect(ZkLensFlare const* slf);
ZKC_API void ZkLensFlare_setEffect(ZkLensFlare* slf, ZkString effect);

ZKC_API ZkParticleEffectController* ZkParticleEffectController_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkParticleEffectController* ZkParticleEffectController_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkParticleEffectController_del(ZkParticleEffectController* slf);
ZKC_API ZkString ZkParticleEffectController_getEffectName(ZkParticleEffectController const* slf);
ZKC_API void ZkParticleEffectController_setEffectName(ZkParticleEffectController* slf, ZkString effectName);
ZKC_API ZkBool ZkParticleEffectController_getKillWhenDone(ZkParticleEffectController const* slf);
ZKC_API void ZkParticleEffectController_setKillWhenDone(ZkParticleEffectController* slf, ZkBool killWhenDone);
ZKC_API ZkBool ZkParticleEffectController_getInitiallyRunning(ZkParticleEffectController const* slf);
ZKC_API void ZkParticleEffectController_setInitiallyRunning(ZkParticleEffectController* slf, ZkBool initiallyRunning);

ZKC_API ZkMessageFilter* ZkMessageFilter_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkMessageFilter* ZkMessageFilter_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkMessageFilter_del(ZkMessageFilter* slf);
ZKC_API ZkString ZkMessageFilter_getTarget(ZkMessageFilter const* slf);
ZKC_API void ZkMessageFilter_setTarget(ZkMessageFilter* slf, ZkString target);
ZKC_API ZkMessageFilterAction ZkMessageFilter_getOnTrigger(ZkMessageFilter const* slf);
ZKC_API void ZkMessageFilter_setOnTrigger(ZkMessageFilter* slf, ZkMessageFilterAction onTrigger);
ZKC_API ZkMessageFilterAction ZkMessageFilter_getOnUntrigger(ZkMessageFilter const* slf);
ZKC_API void ZkMessageFilter_setOnUntrigger(ZkMessageFilter* slf, ZkMessageFilterAction onUntrigger);

ZKC_API ZkCodeMaster* ZkCodeMaster_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkCodeMaster* ZkCodeMaster_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkCodeMaster_del(ZkCodeMaster* slf);
ZKC_API ZkString ZkCodeMaster_getTarget(ZkCodeMaster const* slf);
ZKC_API void ZkCodeMaster_setTarget(ZkCodeMaster* slf, ZkString target);
ZKC_API ZkBool ZkCodeMaster_getOrdered(ZkCodeMaster const* slf);
ZKC_API void ZkCodeMaster_setOrdered(ZkCodeMaster* slf, ZkBool ordered);
ZKC_API ZkBool ZkCodeMaster_getFirstFalseIsFailure(ZkCodeMaster const* slf);
ZKC_API void ZkCodeMaster_setFirstFalseIsFailure(ZkCodeMaster* slf, ZkBool firstFalseIsFailure);
ZKC_API ZkString ZkCodeMaster_getFailureTarget(ZkCodeMaster const* slf);
ZKC_API void ZkCodeMaster_setFailureTarget(ZkCodeMaster* slf, ZkString failureTarget);
ZKC_API ZkBool ZkCodeMaster_getUntriggeredCancels(ZkCodeMaster const* slf);
ZKC_API void ZkCodeMaster_setUntriggeredCancels(ZkCodeMaster* slf, ZkBool untriggeredCancels);
ZKC_API ZkSize ZkCodeMaster_getSlaveCount(ZkCodeMaster const* slf);
ZKC_API ZkString ZkCodeMaster_getSlave(ZkCodeMaster const* slf, ZkSize i);
ZKC_API void ZkCodeMaster_enumerateSlaves(ZkCodeMaster const* slf, ZkStringEnumerator cb, void* ctx);
ZKC_API void ZkCodeMaster_addSlave(ZkCodeMaster* slf, ZkString slave);
ZKC_API void ZkCodeMaster_removeSlave(ZkCodeMaster* slf, ZkSize i);
ZKC_API void ZkCodeMaster_removeSlaves(ZkCodeMaster* slf, ZkStringEnumerator pred, void* ctx);

ZKC_API ZkMoverController* ZkMoverController_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkMoverController* ZkMoverController_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkMoverController_del(ZkMoverController* slf);
ZKC_API ZkString ZkMoverController_getTarget(ZkMoverController const* slf);
ZKC_API void ZkMoverController_setTarget(ZkMoverController* slf, ZkString target);
ZKC_API ZkMoverMessageType ZkMoverController_getMessage(ZkMoverController const* slf);
ZKC_API void ZkMoverController_setMessage(ZkMoverController* slf, ZkMoverMessageType message);
ZKC_API int32_t ZkMoverController_getKey(ZkMoverController const* slf);
ZKC_API void ZkMoverController_setKey(ZkMoverController* slf, int32_t key);

ZKC_API ZkTouchDamage* ZkTouchDamage_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTouchDamage* ZkTouchDamage_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTouchDamage_del(ZkTouchDamage* slf);
ZKC_API float ZkTouchDamage_getDamage(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setDamage(ZkTouchDamage* slf, float damage);
ZKC_API ZkBool ZkTouchDamage_getIsBarrier(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsBarrier(ZkTouchDamage* slf, ZkBool isBarrier);
ZKC_API ZkBool ZkTouchDamage_getIsBlunt(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsBlunt(ZkTouchDamage* slf, ZkBool isBlunt);
ZKC_API ZkBool ZkTouchDamage_getIsEdge(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsEdge(ZkTouchDamage* slf, ZkBool isEdge);
ZKC_API ZkBool ZkTouchDamage_getIsFire(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsFire(ZkTouchDamage* slf, ZkBool isFire);
ZKC_API ZkBool ZkTouchDamage_getIsFly(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsFly(ZkTouchDamage* slf, ZkBool isFly);
ZKC_API ZkBool ZkTouchDamage_getIsMagic(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsMagic(ZkTouchDamage* slf, ZkBool isMagic);
ZKC_API ZkBool ZkTouchDamage_getIsPoint(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsPoint(ZkTouchDamage* slf, ZkBool isPoint);
ZKC_API ZkBool ZkTouchDamage_getIsFall(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setIsFall(ZkTouchDamage* slf, ZkBool isFall);
ZKC_API float ZkTouchDamage_getRepeatDelaySeconds(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setRepeatDelaySeconds(ZkTouchDamage* slf, float repeatDelaySeconds);
ZKC_API float ZkTouchDamage_getVolumeScale(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setVolumeScale(ZkTouchDamage* slf, float volumeScale);
ZKC_API ZkTouchCollisionType ZkTouchDamage_getCollisionType(ZkTouchDamage const* slf);
ZKC_API void ZkTouchDamage_setCollisionType(ZkTouchDamage* slf, ZkTouchCollisionType collisionType);

ZKC_API ZkEarthquake* ZkEarthquake_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkEarthquake* ZkEarthquake_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkEarthquake_del(ZkEarthquake* slf);
ZKC_API float ZkEarthquake_getRadius(ZkEarthquake const* slf);
ZKC_API void ZkEarthquake_setRadius(ZkEarthquake* slf, float radius);
ZKC_API float ZkEarthquake_getDuration(ZkEarthquake const* slf);
ZKC_API void ZkEarthquake_setDuration(ZkEarthquake* slf, float duration);
ZKC_API ZkVec3f ZkEarthquake_getAmplitude(ZkEarthquake const* slf);
ZKC_API void ZkEarthquake_setAmplitude(ZkEarthquake* slf, ZkVec3f amplitude);

ZKC_API ZkString ZkNpc_getNpcInstance(ZkNpc const* slf);
ZKC_API ZkVec3f ZkNpc_getModelScale(ZkNpc const* slf);
ZKC_API float ZkNpc_getModelFatness(ZkNpc const* slf);
ZKC_API int ZkNpc_getFlags(ZkNpc const* slf);
ZKC_API int ZkNpc_getGuild(ZkNpc const* slf);
ZKC_API int ZkNpc_getGuildTrue(ZkNpc const* slf);
ZKC_API int ZkNpc_getLevel(ZkNpc const* slf);
ZKC_API int ZkNpc_getXp(ZkNpc const* slf);
ZKC_API int ZkNpc_getXpNextLevel(ZkNpc const* slf);
ZKC_API int ZkNpc_getLp(ZkNpc const* slf);
ZKC_API int ZkNpc_getFightTactic(ZkNpc const* slf);
ZKC_API int ZkNpc_getFightMode(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getWounded(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getMad(ZkNpc const* slf);
ZKC_API int ZkNpc_getMadTime(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getPlayer(ZkNpc const* slf);
ZKC_API ZkString ZkNpc_getStartAiState(ZkNpc const* slf);
ZKC_API ZkString ZkNpc_getScriptWaypoint(ZkNpc const* slf);
ZKC_API int ZkNpc_getAttitude(ZkNpc const* slf);
ZKC_API int ZkNpc_getAttitudeTemp(ZkNpc const* slf);
ZKC_API int ZkNpc_getNameNr(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getMoveLock(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getCurrentStateValid(ZkNpc const* slf);
ZKC_API ZkString ZkNpc_getCurrentStateName(ZkNpc const* slf);
ZKC_API int ZkNpc_getCurrentStateIndex(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getCurrentStateIsRoutine(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getNextStateValid(ZkNpc const* slf);
ZKC_API ZkString ZkNpc_getNextStateName(ZkNpc const* slf);
ZKC_API int ZkNpc_getNextStateIndex(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getNextStateIsRoutine(ZkNpc const* slf);
ZKC_API int ZkNpc_getLastAiState(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getHasRoutine(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getRoutineChanged(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getRoutineOverlay(ZkNpc const* slf);
ZKC_API int ZkNpc_getRoutineOverlayCount(ZkNpc const* slf);
ZKC_API int ZkNpc_getWalkmodeRoutine(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getWeaponmodeRoutine(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getStartNewRoutine(ZkNpc const* slf);
ZKC_API int ZkNpc_getAiStateDriven(ZkNpc const* slf);
ZKC_API ZkVec3f ZkNpc_getAiStatePos(ZkNpc const* slf);
ZKC_API ZkString ZkNpc_getCurrentRoutine(ZkNpc const* slf);
ZKC_API ZkBool ZkNpc_getRespawn(ZkNpc const* slf);
ZKC_API int ZkNpc_getRespawnTime(ZkNpc const* slf);
ZKC_API int ZkNpc_getBsInterruptableOverride(ZkNpc const* slf);
ZKC_API int ZkNpc_getNpcType(ZkNpc const* slf);
ZKC_API int ZkNpc_getSpellMana(ZkNpc const* slf);
ZKC_API ZkVirtualObject* ZkNpc_getCarryVob(ZkNpc const* slf);
ZKC_API ZkVirtualObject* ZkNpc_getEnemy(ZkNpc const* slf);

ZKC_API void ZkNpc_setNpcInstance(ZkNpc* slf, ZkString npcInstance);
ZKC_API void ZkNpc_setModelScale(ZkNpc* slf, ZkVec3f modelScale);
ZKC_API void ZkNpc_setModelFatness(ZkNpc* slf, float modelFatness);
ZKC_API void ZkNpc_setFlags(ZkNpc* slf, int flags);
ZKC_API void ZkNpc_setGuild(ZkNpc* slf, int guild);
ZKC_API void ZkNpc_setGuildTrue(ZkNpc* slf, int guildTrue);
ZKC_API void ZkNpc_setLevel(ZkNpc* slf, int level);
ZKC_API void ZkNpc_setXp(ZkNpc* slf, int xp);
ZKC_API void ZkNpc_setXpNextLevel(ZkNpc* slf, int xpNextLevel);
ZKC_API void ZkNpc_setLp(ZkNpc* slf, int lp);
ZKC_API void ZkNpc_setFightTactic(ZkNpc* slf, int fightTactic);
ZKC_API void ZkNpc_setFightMode(ZkNpc* slf, int fightMode);
ZKC_API void ZkNpc_setWounded(ZkNpc* slf, ZkBool wounded);
ZKC_API void ZkNpc_setMad(ZkNpc* slf, ZkBool mad);
ZKC_API void ZkNpc_setMadTime(ZkNpc* slf, int madTime);
ZKC_API void ZkNpc_setPlayer(ZkNpc* slf, ZkBool player);
ZKC_API void ZkNpc_setStartAiState(ZkNpc* slf, ZkString startAiState);
ZKC_API void ZkNpc_setScriptWaypoint(ZkNpc* slf, ZkString scriptWaypoint);
ZKC_API void ZkNpc_setAttitude(ZkNpc* slf, int attitude);
ZKC_API void ZkNpc_setAttitudeTemp(ZkNpc* slf, int attitudeTemp);
ZKC_API void ZkNpc_setNameNr(ZkNpc* slf, int nameNr);
ZKC_API void ZkNpc_setMoveLock(ZkNpc* slf, ZkBool moveLock);
ZKC_API void ZkNpc_setCurrentStateValid(ZkNpc* slf, ZkBool currentStateValid);
ZKC_API void ZkNpc_setCurrentStateName(ZkNpc* slf, ZkString currentStateName);
ZKC_API void ZkNpc_setCurrentStateIndex(ZkNpc* slf, int currentStateIndex);
ZKC_API void ZkNpc_setCurrentStateIsRoutine(ZkNpc* slf, ZkBool currentStateIsRoutine);
ZKC_API void ZkNpc_setNextStateValid(ZkNpc* slf, ZkBool nextStateValid);
ZKC_API void ZkNpc_setNextStateName(ZkNpc* slf, ZkString nextStateName);
ZKC_API void ZkNpc_setNextStateIndex(ZkNpc* slf, int nextStateIndex);
ZKC_API void ZkNpc_setNextStateIsRoutine(ZkNpc* slf, ZkBool nextStateIsRoutine);
ZKC_API void ZkNpc_setLastAiState(ZkNpc* slf, int lastAiState);
ZKC_API void ZkNpc_setHasRoutine(ZkNpc* slf, ZkBool hasRoutine);
ZKC_API void ZkNpc_setRoutineChanged(ZkNpc* slf, ZkBool routineChanged);
ZKC_API void ZkNpc_setRoutineOverlay(ZkNpc* slf, ZkBool routineOverlay);
ZKC_API void ZkNpc_setRoutineOverlayCount(ZkNpc* slf, int routineOverlayCount);
ZKC_API void ZkNpc_setWalkmodeRoutine(ZkNpc* slf, int walkmodeRoutine);
ZKC_API void ZkNpc_setWeaponmodeRoutine(ZkNpc* slf, ZkBool weaponmodeRoutine);
ZKC_API void ZkNpc_setStartNewRoutine(ZkNpc* slf, ZkBool startNewRoutine);
ZKC_API void ZkNpc_setAiStateDriven(ZkNpc* slf, int aiStateDriven);
ZKC_API void ZkNpc_setAiStatePos(ZkNpc* slf, ZkVec3f aiStatePos);
ZKC_API void ZkNpc_setCurrentRoutine(ZkNpc* slf, ZkString currentRoutine);
ZKC_API void ZkNpc_setRespawn(ZkNpc* slf, ZkBool respawn);
ZKC_API void ZkNpc_setRespawnTime(ZkNpc* slf, int respawnTime);
ZKC_API void ZkNpc_setBsInterruptableOverride(ZkNpc* slf, int bsInterruptableOverride);
ZKC_API void ZkNpc_setNpcType(ZkNpc* slf, int npcType);
ZKC_API void ZkNpc_setSpellMana(ZkNpc* slf, int spellMana);
ZKC_API void ZkNpc_setCarryVob(ZkNpc* slf, ZkVirtualObject* carryVob);
ZKC_API void ZkNpc_setEnemy(ZkNpc* slf, ZkVirtualObject* enemy);

ZKC_API ZkSize ZkNpc_getOverlayCount(ZkNpc const* slf);
ZKC_API ZkString ZkNpc_getOverlay(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_clearOverlays(ZkNpc* slf);
ZKC_API void ZkNpc_removeOverlay(ZkNpc* slf, ZkSize i);
ZKC_API void ZkNpc_setOverlay(ZkNpc* slf, ZkSize i, ZkString overlay);
ZKC_API void ZkNpc_addOverlay(ZkNpc* slf, ZkString overlay);

ZKC_API ZkSize ZkNpc_getTalentCount(ZkNpc const* slf);
ZKC_API ZkNpcTalent* ZkNpc_getTalent(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_clearTalents(ZkNpc* slf);
ZKC_API void ZkNpc_removeTalent(ZkNpc* slf, ZkSize i);
ZKC_API void ZkNpc_setTalent(ZkNpc* slf, ZkSize i, ZkNpcTalent* talent);
ZKC_API void ZkNpc_addTalent(ZkNpc* slf, ZkNpcTalent* talent);

ZKC_API ZkSize ZkNpc_getItemCount(ZkNpc const* slf);
ZKC_API ZkItem* ZkNpc_getItem(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_clearItems(ZkNpc* slf);
ZKC_API void ZkNpc_removeItem(ZkNpc* slf, ZkSize i);
ZKC_API void ZkNpc_setItem(ZkNpc* slf, ZkSize i, ZkItem* item);
ZKC_API void ZkNpc_addItem(ZkNpc* slf, ZkItem* item);

ZKC_API ZkSize ZkNpc_getSlotCount(ZkNpc const* slf);
ZKC_API ZkNpcSlot* ZkNpc_getSlot(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_clearSlots(ZkNpc* slf);
ZKC_API void ZkNpc_removeSlot(ZkNpc* slf, ZkSize i);
ZKC_API ZkNpcSlot* ZkNpc_addSlot(ZkNpc* slf);

ZKC_API int ZkNpc_getProtection(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_setProtection(ZkNpc* slf, ZkSize i, int v);

ZKC_API int ZkNpc_getAttribute(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_setAttribute(ZkNpc* slf, ZkSize i, int v);

ZKC_API int ZkNpc_getHitChance(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_setHitChance(ZkNpc* slf, ZkSize i, int v);

ZKC_API int ZkNpc_getMission(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_setMission(ZkNpc* slf, ZkSize i, int v);

ZKC_API int const* ZkNpc_getAiVars(ZkNpc const* slf, ZkSize* len);
ZKC_API void ZkNpc_setAiVars(ZkNpc const* slf, int const* vars, ZkSize len);

ZKC_API ZkString ZkNpc_getPacked(ZkNpc const* slf, ZkSize i);
ZKC_API void ZkNpc_setPacked(ZkNpc const* slf, ZkSize i, ZkString v);

ZKC_API ZkNpcTalent* ZkNpcTalent_new(void);
ZKC_API void ZkNpcTalent_del(ZkNpcTalent* slf);
ZKC_API int ZkNpcTalent_getTalent(ZkNpcTalent const* slf);
ZKC_API int ZkNpcTalent_getValue(ZkNpcTalent const* slf);
ZKC_API int ZkNpcTalent_getSkill(ZkNpcTalent const* slf);
ZKC_API void ZkNpcTalent_setTalent(ZkNpcTalent* slf, int v);
ZKC_API void ZkNpcTalent_setValue(ZkNpcTalent* slf, int v);
ZKC_API void ZkNpcTalent_setSkill(ZkNpcTalent* slf, int v);

ZKC_API ZkBool ZkNpcSlot_getUsed(ZkNpcSlot const* slf);
ZKC_API ZkString ZkNpcSlot_getName(ZkNpcSlot const* slf);
ZKC_API ZkItem* ZkNpcSlot_getItem(ZkNpcSlot* slf);
ZKC_API ZkBool ZkNpcSlot_getInInventory(ZkNpcSlot const* slf);
ZKC_API void ZkNpcSlot_setUsed(ZkNpcSlot* slf, ZkBool used);
ZKC_API void ZkNpcSlot_setName(ZkNpcSlot* slf, ZkString name);
ZKC_API void ZkNpcSlot_setItem(ZkNpcSlot* slf, ZkItem* item);
ZKC_API void ZkNpcSlot_setInInventory(ZkNpcSlot* slf, ZkBool inInventory);
