// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Vector.h"

#ifdef __cplusplus
	#include "zenkit/Boxes.hh"
#endif

typedef struct ZkInternal_AxisAlignedBoundingBox {
#ifdef __cplusplus
	explicit inline ZkInternal_AxisAlignedBoundingBox(zenkit::AxisAlignedBoundingBox const& aabb)
	    : min(aabb.min), max(aabb.max) {}
#endif

	ZkVec3f min, max;
} ZkAxisAlignedBoundingBox;
