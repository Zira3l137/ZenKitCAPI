#pragma once
#include "Library.h"

#ifdef __cplusplus
	#include <zenkit/Object.hh>

	#include <memory>

template <typename T>
using ZkSharedHandle = std::shared_ptr<T>;
using ZkObject = ZkSharedHandle<zenkit::Object>;

#else
typedef struct ZkInternal_SharedHandle ZkSharedHandle;
typedef struct ZkInternal_Object ZkObject;
#endif

ZKC_API ZkObject* ZkObject_takeRef(ZkObject* slf);
