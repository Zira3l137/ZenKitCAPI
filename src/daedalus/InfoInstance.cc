#include "czenkit/daedalus/InfoInstance.h"
#include "../Internal.hh"

int32_t ZkInfoInstance_getNpc(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc;
}

int32_t ZkInfoInstance_getNr(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->nr;
}

int32_t ZkInfoInstance_getImportant(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->important;
}

int32_t ZkInfoInstance_getCondition(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->condition;
}

int32_t ZkInfoInstance_getInformation(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->information;
}

ZkString ZkInfoInstance_getDescription(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->description.c_str();
}

int32_t ZkInfoInstance_getTrade(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->trade;
}

int32_t ZkInfoInstance_getPermanent(ZkInfoInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->permanent;
}
