#include "zenkit-capi/daedalus/InfoInstance.h"
#include "../Internal.hh"

int32_t ZkInfoInstance_getNpc(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->npc;
}

void ZkInfoInstance_setNpc(ZkInfoInstance* slf, int32_t npc) {
	ZKC_CHECK_NULLV(slf);
	slf->npc = npc;
}

int32_t ZkInfoInstance_getNr(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nr;
}

void ZkInfoInstance_setNr(ZkInfoInstance* slf, int32_t nr) {
	ZKC_CHECK_NULLV(slf);
	slf->nr = nr;
}

int32_t ZkInfoInstance_getImportant(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->important;
}

void ZkInfoInstance_setImportant(ZkInfoInstance* slf, int32_t important) {
	ZKC_CHECK_NULLV(slf);
	slf->important = important;
}

int32_t ZkInfoInstance_getCondition(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->condition;
}

void ZkInfoInstance_setCondition(ZkInfoInstance* slf, int32_t condition) {
	ZKC_CHECK_NULLV(slf);
	slf->condition = condition;
}

int32_t ZkInfoInstance_getInformation(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->information;
}

void ZkInfoInstance_setInformation(ZkInfoInstance* slf, int32_t information) {
	ZKC_CHECK_NULLV(slf);
	slf->information = information;
}

ZkString ZkInfoInstance_getDescription(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->description.c_str();
}

void ZkInfoInstance_setDescription(ZkInfoInstance* slf, ZkString description) {
	ZKC_CHECK_NULLV(slf);
	slf->description = description;
}

int32_t ZkInfoInstance_getTrade(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trade;
}

void ZkInfoInstance_setTrade(ZkInfoInstance* slf, int32_t trade) {
	ZKC_CHECK_NULLV(slf);
	slf->trade = trade;
}

int32_t ZkInfoInstance_getPermanent(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->permanent;
}

void ZkInfoInstance_setPermanent(ZkInfoInstance* slf, int32_t permanent) {
	ZKC_CHECK_NULLV(slf);
	slf->permanent = permanent;
}
