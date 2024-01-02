// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Boxes.h"

#include "Internal.hh"

ZkVec3f ZkOrientedBoundingBox_getCenter(ZkOrientedBoundingBox const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->center;
}

ZkVec3f ZkOrientedBoundingBox_getAxis(ZkOrientedBoundingBox const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(3, i);
	return slf->axes[i];
}

ZkVec3f ZkOrientedBoundingBox_getHalfWidth(ZkOrientedBoundingBox const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->half_width;
}

ZkSize ZkOrientedBoundingBox_getChildCount(ZkOrientedBoundingBox const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->children.size();
}

ZkOrientedBoundingBox const* ZkOrientedBoundingBox_getChild(ZkOrientedBoundingBox const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->children, i);
	return &slf->children[i];
}

void ZkOrientedBoundingBox_enumerateChildren(ZkOrientedBoundingBox const* slf,
                                             ZkOrientedBoundingBoxEnumerator cb,
                                             void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& child : slf->children) {
		if (cb(ctx, &child)) break;
	}
}

ZkAxisAlignedBoundingBox ZkOrientedBoundingBox_toAabb(ZkOrientedBoundingBox const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->as_bbox();
}
