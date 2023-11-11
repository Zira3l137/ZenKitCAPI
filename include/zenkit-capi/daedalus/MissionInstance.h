// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkMissionInstance = zenkit::IMission;
#else
typedef struct ZkInternal_MissionInstance ZkMissionInstance;
#endif

ZKC_API ZkString ZkMissionInstance_getName(ZkMissionInstance const* slf);
ZKC_API ZkString ZkMissionInstance_getDescription(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getDuration(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getImportant(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getOfferConditions(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getOffer(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getSuccessConditions(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getSuccess(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getFailureConditions(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getFailure(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getObsoleteConditions(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getObsolete(ZkMissionInstance const* slf);
ZKC_API int32_t ZkMissionInstance_getRunning(ZkMissionInstance const* slf);
