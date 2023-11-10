#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkInfoInstance = zenkit::IInfo;
#else
typedef struct ZkInternal_InfoInstance ZkInfoInstance;
#endif

CZK_API int32_t ZkInfoInstance_getNpc(ZkInfoInstance const* slf);
CZK_API int32_t ZkInfoInstance_getNr(ZkInfoInstance const* slf);
CZK_API int32_t ZkInfoInstance_getImportant(ZkInfoInstance const* slf);
CZK_API int32_t ZkInfoInstance_getCondition(ZkInfoInstance const* slf);
CZK_API int32_t ZkInfoInstance_getInformation(ZkInfoInstance const* slf);
CZK_API ZkString ZkInfoInstance_getDescription(ZkInfoInstance const* slf);
CZK_API int32_t ZkInfoInstance_getTrade(ZkInfoInstance const* slf);
CZK_API int32_t ZkInfoInstance_getPermanent(ZkInfoInstance const* slf);

