#include "zenkit-capi/daedalus/SpellInstance.h"
#include "../Internal.hh"

float ZkSpellInstance_getTimePerMana(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->time_per_mana;
}

void ZkSpellInstance_setTimePerMana(ZkSpellInstance* slf, float timePerMana) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->time_per_mana = timePerMana;
}

int32_t ZkSpellInstance_getDamagePerLevel(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->damage_per_level;
}

void ZkSpellInstance_setDamagePerLevel(ZkSpellInstance* slf, int32_t damagePerLevel) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->damage_per_level = damagePerLevel;
}

int32_t ZkSpellInstance_getDamageType(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->damage_type;
}

void ZkSpellInstance_setDamageType(ZkSpellInstance* slf, int32_t damageType) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->damage_type = damageType;
}

int32_t ZkSpellInstance_getSpellType(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->spell_type;
}

void ZkSpellInstance_setSpellType(ZkSpellInstance* slf, int32_t spellType) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->spell_type = spellType;
}

int32_t ZkSpellInstance_getCanTurnDuringInvest(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->can_turn_during_invest;
}

void ZkSpellInstance_setCanTurnDuringInvest(ZkSpellInstance* slf, int32_t canTurnDuringInvest) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->can_turn_during_invest = canTurnDuringInvest;
}

int32_t ZkSpellInstance_getCanChangeTargetDuringInvest(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->can_change_target_during_invest;
}

void ZkSpellInstance_setCanChangeTargetDuringInvest(ZkSpellInstance* slf, int32_t canChangeTargetDuringInvest) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->can_change_target_during_invest = canChangeTargetDuringInvest;
}

int32_t ZkSpellInstance_getIsMultiEffect(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->is_multi_effect;
}

void ZkSpellInstance_setIsMultiEffect(ZkSpellInstance* slf, int32_t isMultiEffect) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->is_multi_effect = isMultiEffect;
}

int32_t ZkSpellInstance_getTargetCollectAlgo(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_collect_algo;
}

void ZkSpellInstance_setTargetCollectAlgo(ZkSpellInstance* slf, int32_t targetCollectAlgo) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->target_collect_algo = targetCollectAlgo;
}

int32_t ZkSpellInstance_getTargetCollectType(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_collect_type;
}

void ZkSpellInstance_setTargetCollectType(ZkSpellInstance* slf, int32_t targetCollectType) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->target_collect_type = targetCollectType;
}

int32_t ZkSpellInstance_getTargetCollectRange(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_collect_range;
}

void ZkSpellInstance_setTargetCollectRange(ZkSpellInstance* slf, int32_t targetCollectRange) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->target_collect_range = targetCollectRange;
}

int32_t ZkSpellInstance_getTargetCollectAzi(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_collect_azi;
}

void ZkSpellInstance_setTargetCollectAzi(ZkSpellInstance* slf, int32_t targetCollectAzi) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->target_collect_azi = targetCollectAzi;
}

int32_t ZkSpellInstance_getTargetCollectElevation(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_collect_elev;
}

void ZkSpellInstance_setTargetCollectElevation(ZkSpellInstance* slf, int32_t targetCollectElevation) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->target_collect_elev = targetCollectElevation;
}
