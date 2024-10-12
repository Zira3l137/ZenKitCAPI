#include "zenkit-capi/daedalus/MissionInstance.h"
#include "../Internal.hh"

ZkString ZkMissionInstance_getName(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->name.c_str();
}

void ZkMissionInstance_setName(ZkMissionInstance* slf, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	SLF->name = name;
}

ZkString ZkMissionInstance_getDescription(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->description.c_str();
}

void ZkMissionInstance_setDescription(ZkMissionInstance* slf, ZkString description) {
	ZKC_CHECK_NULLV(slf);
	SLF->description = description;
}

int32_t ZkMissionInstance_getDuration(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->duration;
}

void ZkMissionInstance_setDuration(ZkMissionInstance* slf, int32_t duration) {
	ZKC_CHECK_NULLV(slf);
	SLF->duration = duration;
}

int32_t ZkMissionInstance_getImportant(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->important;
}

void ZkMissionInstance_setImportant(ZkMissionInstance* slf, int32_t important) {
	ZKC_CHECK_NULLV(slf);
	SLF->important = important;
}

int32_t ZkMissionInstance_getOfferConditions(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->offer_conditions;
}

void ZkMissionInstance_setOfferConditions(ZkMissionInstance* slf, int32_t offerConditions) {
	ZKC_CHECK_NULLV(slf);
	SLF->offer_conditions = offerConditions;
}

int32_t ZkMissionInstance_getOffer(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->offer;
}

void ZkMissionInstance_setOffer(ZkMissionInstance* slf, int32_t offer) {
	ZKC_CHECK_NULLV(slf);
	SLF->offer = offer;
}

int32_t ZkMissionInstance_getSuccessConditions(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->success_conditions;
}

void ZkMissionInstance_setSuccessConditions(ZkMissionInstance* slf, int32_t successConditions) {
	ZKC_CHECK_NULLV(slf);
	SLF->success_conditions = successConditions;
}

int32_t ZkMissionInstance_getSuccess(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->success;
}

void ZkMissionInstance_setSuccess(ZkMissionInstance* slf, int32_t success) {
	ZKC_CHECK_NULLV(slf);
	SLF->success = success;
}

int32_t ZkMissionInstance_getFailureConditions(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->failure_conditions;
}

void ZkMissionInstance_setFailureConditions(ZkMissionInstance* slf, int32_t failureConditions) {
	ZKC_CHECK_NULLV(slf);
	SLF->failure_conditions = failureConditions;
}

int32_t ZkMissionInstance_getFailure(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->failure;
}

void ZkMissionInstance_setFailure(ZkMissionInstance* slf, int32_t failure) {
	ZKC_CHECK_NULLV(slf);
	SLF->failure = failure;
}

int32_t ZkMissionInstance_getObsoleteConditions(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->obsolete_conditions;
}

void ZkMissionInstance_setObsoleteConditions(ZkMissionInstance* slf, int32_t obsoleteConditions) {
	ZKC_CHECK_NULLV(slf);
	SLF->obsolete_conditions = obsoleteConditions;
}

int32_t ZkMissionInstance_getObsolete(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->obsolete;
}

void ZkMissionInstance_setObsolete(ZkMissionInstance* slf, int32_t obsolete) {
	ZKC_CHECK_NULLV(slf);
	SLF->obsolete = obsolete;
}

int32_t ZkMissionInstance_getRunning(ZkMissionInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->running;
}

void ZkMissionInstance_setRunning(ZkMissionInstance* slf, int32_t running) {
	ZKC_CHECK_NULLV(slf);
	SLF->running = running;
}
