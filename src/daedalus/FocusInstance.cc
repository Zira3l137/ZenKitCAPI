#include "czenkit/daedalus/FocusInstance.h"
#include "../Internal.hh"

float ZkFocusInstance_getNpcLongrange(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc_longrange;
}

float ZkFocusInstance_getNpcRange1(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc_range1;
}

float ZkFocusInstance_getNpcRange2(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc_range2;
}

float ZkFocusInstance_getNpcAzi(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc_azi;
}

float ZkFocusInstance_getNpcElevdo(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc_elevdo;
}

float ZkFocusInstance_getNpcElevup(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc_elevup;
}

int32_t ZkFocusInstance_getNpcPrio(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc_prio;
}

float ZkFocusInstance_getItemRange1(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->item_range1;
}

float ZkFocusInstance_getItemRange2(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->item_range2;
}

float ZkFocusInstance_getItemAzi(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->item_azi;
}

float ZkFocusInstance_getItemElevdo(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->item_elevdo;
}

float ZkFocusInstance_getItemElevup(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->item_elevup;
}

int32_t ZkFocusInstance_getItemPrio(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->item_prio;
}

float ZkFocusInstance_getMobRange1(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->mob_range1;
}

float ZkFocusInstance_getMobRange2(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->mob_range2;
}

float ZkFocusInstance_getMobAzi(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->mob_azi;
}

float ZkFocusInstance_getMobElevdo(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->mob_elevdo;
}

float ZkFocusInstance_getMobElevup(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->mob_elevup;
}

int32_t ZkFocusInstance_getMobPrio(ZkFocusInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->mob_prio;
}
