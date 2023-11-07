// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Vector.h"

#ifdef __cplusplus
	#include "zenkit/Boxes.hh"

using ZkAxisAlignedBoundingBox = zenkit::AxisAlignedBoundingBox;
using ZkOrientedBoundingBox = zenkit::OrientedBoundingBox;
#else
typedef struct {
	ZkVec3f min;
	ZkVec3f max;
} ZkAxisAlignedBoundingBox;

typedef struct ZkInternal_OrientedBoundingBox ZkOrientedBoundingBox;
#endif

typedef ZkBool (*ZkOrientedBoundingBoxEnumerator)(void*, ZkOrientedBoundingBox const* box);

CZK_API ZkVec3f ZkOrientedBoundingBox_getCenter(ZkOrientedBoundingBox const* slf);
CZK_API ZkVec3f ZkOrientedBoundingBox_getAxis(ZkOrientedBoundingBox const* slf, ZkSize i);
CZK_API ZkVec3f ZkOrientedBoundingBox_getHalfWidth(ZkOrientedBoundingBox const* slf);
CZK_API ZkSize ZkOrientedBoundingBox_getChildCount(ZkOrientedBoundingBox const* slf);
CZK_API ZkOrientedBoundingBox const* ZkOrientedBoundingBox_getChild(ZkOrientedBoundingBox const* slf, ZkSize i);
CZK_API void ZkOrientedBoundingBox_enumerateChildren(ZkOrientedBoundingBox const* slf,
                                                     ZkOrientedBoundingBoxEnumerator cb,
                                                     void* ctx);
CZK_API ZkAxisAlignedBoundingBox ZkOrientedBoundingBox_toAabb(ZkOrientedBoundingBox const* slf);
