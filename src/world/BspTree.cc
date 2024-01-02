// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/world/BspTree.h"

#include "../Internal.hh"

ZkBspTreeType ZkBspTree_getType(ZkBspTree const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkBspTreeType>(slf->mode);
}

uint32_t const* ZkBspTree_getPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->polygon_indices.size();
	return slf->polygon_indices.data();
}

uint32_t const* ZkBspTree_getLeafPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->leaf_polygons.size();
	return slf->leaf_polygons.data();
}

uint32_t const* ZkBspTree_getPortalPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

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
	ZKC_CHECK_NULL(slf, count);

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
	ZKC_CHECK_NULL(slf);
	return slf->sectors.size();
}

ZkBspSector const* ZkBspTree_getSector(ZkBspTree const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->sectors, i);
	return &slf->sectors[i];
}

void ZkBspTree_enumerateSectors(ZkBspTree const* slf, ZkBspSectorEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& sector : slf->sectors) {
		if (cb(ctx, &sector)) break;
	}
}

ZkString ZkBspSector_getName(ZkBspSector const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

uint32_t const* ZkBspSector_getNodeIndices(ZkBspSector const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->node_indices.size();
	return slf->node_indices.data();
}

uint32_t const* ZkBspSector_getPortalPolygonIndices(ZkBspSector const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->portal_polygon_indices.size();
	return slf->portal_polygon_indices.data();
}
