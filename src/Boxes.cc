// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Boxes.h"

ZkVec3f ZkOrientedBoundingBox_getCenter(ZkOrientedBoundingBox const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkOrientedBoundingBox_getCenter");
		return {};
	}

	return slf->center;
}

ZkVec3f ZkOrientedBoundingBox_getAxis(ZkOrientedBoundingBox const* slf, ZkSize i) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkOrientedBoundingBox_getAxis");
		return {};
	}

	if (i >= 3) {
		ZKC_LOG_ERROR("ZkOrientedBoundingBox_getAxis() failed: index out of range (0..2)");
		return {};
	}

	return slf->axes[i];
}

ZkVec3f ZkOrientedBoundingBox_getHalfWidth(ZkOrientedBoundingBox const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkOrientedBoundingBox_getHalfWidth");
		return {};
	}

	return slf->half_width;
}

ZkSize ZkOrientedBoundingBox_getChildCount(ZkOrientedBoundingBox const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkOrientedBoundingBox_getChildCount");
		return {};
	}

	return slf->children.size();
}

ZkOrientedBoundingBox const* ZkOrientedBoundingBox_getChild(ZkOrientedBoundingBox const* slf, ZkSize i) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkOrientedBoundingBox_getChildCount");
		return {};
	}

	if (i >= slf->children.size()) {
		ZKC_LOG_ERROR("ZkOrientedBoundingBox_getChild() failed: index out of range");
		return {};
	}

	return &slf->children[i];
}

void ZkOrientedBoundingBox_enumerateChildren(ZkOrientedBoundingBox const* slf, ZkOrientedBoundingBoxEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkOrientedBoundingBox_enumerateChildren");
		return;
	}

	for (auto& child : slf->children) {
		if (cb(ctx, &child)) break;
	}
}

ZkAxisAlignedBoundingBox ZkOrientedBoundingBox_toAabb(ZkOrientedBoundingBox const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkOrientedBoundingBox_toAabb");
		return {};
	}

	return slf->as_bbox();
}
