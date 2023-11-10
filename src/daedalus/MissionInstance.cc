#include "czenkit/daedalus/MissionInstance.h"
#include "../Internal.hh"

ZkString ZkMissionInstance_getName(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkString ZkMissionInstance_getDescription(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->description.c_str();
}

int32_t ZkMissionInstance_getDuration(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->duration;
}

int32_t ZkMissionInstance_getImportant(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->important;
}

int32_t ZkMissionInstance_getOfferConditions(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->offer_conditions;
}

int32_t ZkMissionInstance_getOffer(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->offer;
}

int32_t ZkMissionInstance_getSuccessConditions(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->success_conditions;
}

int32_t ZkMissionInstance_getSuccess(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->success;
}

int32_t ZkMissionInstance_getFailureConditions(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->failure_conditions;
}

int32_t ZkMissionInstance_getFailure(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->failure;
}

int32_t ZkMissionInstance_getObsoleteConditions(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->obsolete_conditions;
}

int32_t ZkMissionInstance_getObsolete(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->obsolete;
}

int32_t ZkMissionInstance_getRunning(ZkMissionInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->running;
}
