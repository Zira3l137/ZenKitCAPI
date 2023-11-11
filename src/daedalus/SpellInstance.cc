#include "zenkit-capi/daedalus/SpellInstance.h"
#include "../Internal.hh"

float ZkSpellInstance_getTimePerMana(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->time_per_mana;
}

int32_t ZkSpellInstance_getDamagePerLevel(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->damage_per_level;
}

int32_t ZkSpellInstance_getDamageType(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->damage_type;
}

int32_t ZkSpellInstance_getSpellType(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->spell_type;
}

int32_t ZkSpellInstance_getCanTurnDuringInvest(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->can_turn_during_invest;
}

int32_t ZkSpellInstance_getCanChangeTargetDuringInvest(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->can_change_target_during_invest;
}

int32_t ZkSpellInstance_getIsMultiEffect(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->is_multi_effect;
}

int32_t ZkSpellInstance_getTargetCollectAlgo(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_collect_algo;
}

int32_t ZkSpellInstance_getTargetCollectType(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_collect_type;
}

int32_t ZkSpellInstance_getTargetCollectRange(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_collect_range;
}

int32_t ZkSpellInstance_getTargetCollectAzi(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_collect_azi;
}

int32_t ZkSpellInstance_getTargetCollectElevation(ZkSpellInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_collect_elev;
}

