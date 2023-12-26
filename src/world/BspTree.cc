// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/world/BspTree.h"

#include "../Internal.hh"

ZkBspTreeType ZkBspTree_getType(ZkBspTree const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getMode");
		return ZkBspTreeType_INDOOR;
	}

	return static_cast<ZkBspTreeType>(slf->mode);
}

uint32_t const* ZkBspTree_getPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getPolygonIndices");
		return nullptr;
	}

	*count = slf->polygon_indices.size();
	return slf->polygon_indices.data();
}

uint32_t const* ZkBspTree_getLeafPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getLeafPolygonIndices");
		return nullptr;
	}

	*count = slf->leaf_polygons.size();
	return slf->leaf_polygons.data();
}

uint32_t const* ZkBspTree_getPortalPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getPortalPolygonIndices");
		return nullptr;
	}

	*count = slf->portal_polygon_indices.size();
	return slf->portal_polygon_indices.data();
}

ZkSize ZkBspTree_getLightPointCount(ZkBspTree const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->light_points.size();
}

ZkVec3f ZkBspTree_getLightPoint(ZkBspTree const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->light_points, i);
	return slf->light_points[i];
}

void ZkBspTree_enumerateLightPoints(ZkBspTree const* slf, ZkVec3fEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& point : slf->light_points) {
		if (cb(ctx, point)) break;
	}
}

uint64_t const* ZkBspTree_getLeafNodeIndices(ZkBspTree const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getLeafNodeIndices");
		return nullptr;
	}

	*count = slf->leaf_node_indices.size();
	return slf->leaf_node_indices.data();
}

ZkSize ZkBspTree_getNodeCount(ZkBspTree const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->nodes.size();
}

ZkBspNode ZkBspTree_getNode(ZkBspTree const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->nodes, i);
	return slf->nodes[i];
}

void ZkBspTree_enumerateNodes(ZkBspTree const* slf, ZkBspNodeEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	ZkBspNode cNode;
	for (auto& node : slf->nodes) {
		cNode = node;

		if (cb(ctx, &cNode)) break;
	}
}

ZkSize ZkBspTree_getSectorCount(ZkBspTree const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getSectorCount");
		return 0;
	}

	return slf->sectors.size();
}

ZkBspSector const* ZkBspTree_getSector(ZkBspTree const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getSector");
		return nullptr;
	}

	if (i >= slf->sectors.size()) {
		ZKC_LOG_ERROR("ZkBspTree_getSector() failed: index out of range");
		return nullptr;
	}

	return &slf->sectors[i];
}

void ZkBspTree_enumerateSectors(ZkBspTree const* slf, ZkBspSectorEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_enumerateSectors");
		return;
	}

	for (auto& sector : slf->sectors) {
		if (cb(ctx, &sector)) break;
	}
}

ZkString ZkBspSector_getName(ZkBspSector const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspSector_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

uint32_t const* ZkBspSector_getNodeIndices(ZkBspSector const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspSector_getNodeIndices");
		return nullptr;
	}

	*count = slf->node_indices.size();
	return slf->node_indices.data();
}

uint32_t const* ZkBspSector_getPortalPolygonIndices(ZkBspSector const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspSector_getPortalPolygonIndices");
		return nullptr;
	}

	*count = slf->portal_polygon_indices.size();
	return slf->portal_polygon_indices.data();
}
