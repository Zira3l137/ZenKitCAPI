#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkInfoInstance = zenkit::IInfo;
#else
typedef struct ZkInternal_InfoInstance ZkInfoInstance;
#endif

ZKC_API int32_t ZkInfoInstance_getNpc(ZkInfoInstance const* slf);
ZKC_API int32_t ZkInfoInstance_getNr(ZkInfoInstance const* slf);
ZKC_API int32_t ZkInfoInstance_getImportant(ZkInfoInstance const* slf);
ZKC_API int32_t ZkInfoInstance_getCondition(ZkInfoInstance const* slf);
ZKC_API int32_t ZkInfoInstance_getInformation(ZkInfoInstance const* slf);
ZKC_API ZkString ZkInfoInstance_getDescription(ZkInfoInstance const* slf);
ZKC_API int32_t ZkInfoInstance_getTrade(ZkInfoInstance const* slf);
ZKC_API int32_t ZkInfoInstance_getPermanent(ZkInfoInstance const* slf);

