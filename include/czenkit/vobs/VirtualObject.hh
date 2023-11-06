// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/vobs/VirtualObject.hh>
using ZkVirtualObject = zenkit::VirtualObject;
#else
typedef struct ZkInternal_VirtualObject ZkVirtualObject;
#endif

typedef ZkBool (*ZkVirtualObjectEnumerator)(void* ctx, ZkVirtualObject const* vob);
