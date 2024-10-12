#include "zenkit-capi/daedalus/InfoInstance.h"
#include "../Internal.hh"

int32_t ZkInfoInstance_getNpc(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->npc;
}

void ZkInfoInstance_setNpc(ZkInfoInstance* slf, int32_t npc) {
	ZKC_CHECK_NULLV(slf);
	SLF->npc = npc;
}

int32_t ZkInfoInstance_getNr(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->nr;
}

void ZkInfoInstance_setNr(ZkInfoInstance* slf, int32_t nr) {
	ZKC_CHECK_NULLV(slf);
	SLF->nr = nr;
}

int32_t ZkInfoInstance_getImportant(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->important;
}

void ZkInfoInstance_setImportant(ZkInfoInstance* slf, int32_t important) {
	ZKC_CHECK_NULLV(slf);
	SLF->important = important;
}

int32_t ZkInfoInstance_getCondition(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->condition;
}

void ZkInfoInstance_setCondition(ZkInfoInstance* slf, int32_t condition) {
	ZKC_CHECK_NULLV(slf);
	SLF->condition = condition;
}

int32_t ZkInfoInstance_getInformation(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->information;
}

void ZkInfoInstance_setInformation(ZkInfoInstance* slf, int32_t information) {
	ZKC_CHECK_NULLV(slf);
	SLF->information = information;
}

ZkString ZkInfoInstance_getDescription(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->description.c_str();
}

void ZkInfoInstance_setDescription(ZkInfoInstance* slf, ZkString description) {
	ZKC_CHECK_NULLV(slf);
	SLF->description = description;
}

int32_t ZkInfoInstance_getTrade(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->trade;
}

void ZkInfoInstance_setTrade(ZkInfoInstance* slf, int32_t trade) {
	ZKC_CHECK_NULLV(slf);
	SLF->trade = trade;
}

int32_t ZkInfoInstance_getPermanent(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->permanent;
}

void ZkInfoInstance_setPermanent(ZkInfoInstance* slf, int32_t permanent) {
	ZKC_CHECK_NULLV(slf);
	SLF->permanent = permanent;
}
