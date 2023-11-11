#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkItemReactInstance = zenkit::IItemReact;
#else
typedef struct ZkInternal_ItemReactInstance ZkItemReactInstance;
#endif

ZKC_API int32_t ZkItemReactInstance_getNpc(ZkItemReactInstance const* slf);
ZKC_API int32_t ZkItemReactInstance_getTradeItem(ZkItemReactInstance const* slf);
ZKC_API int32_t ZkItemReactInstance_getTradeAmount(ZkItemReactInstance const* slf);
ZKC_API int32_t ZkItemReactInstance_getRequestedCategory(ZkItemReactInstance const* slf);
ZKC_API int32_t ZkItemReactInstance_getRequestedItem(ZkItemReactInstance const* slf);
ZKC_API int32_t ZkItemReactInstance_getRequestedAmount(ZkItemReactInstance const* slf);
ZKC_API int32_t ZkItemReactInstance_getReaction(ZkItemReactInstance const* slf);
