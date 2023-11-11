// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/world/BspTree.h"

ZkBspTreeType ZkBspTree_getType(ZkBspTree const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getMode");
		return ZkBspTreeType_INDOOR;
	}

	return static_cast<ZkBspTreeType>(slf->mode);
}

uint32_t const* ZkBspTree_getPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getPolygonIndices");
		return nullptr;
	}

	*count = slf->polygon_indices.size();
	return slf->polygon_indices.data();
}

uint32_t const* ZkBspTree_getLeafPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getLeafPolygonIndices");
		return nullptr;
	}

	*count = slf->leaf_polygons.size();
	return slf->leaf_polygons.data();
}

uint32_t const* ZkBspTree_getPortalPolygonIndices(ZkBspTree const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getPortalPolygonIndices");
		return nullptr;
	}

	*count = slf->portal_polygon_indices.size();
	return slf->portal_polygon_indices.data();
}

ZkVec3f const* ZkBspTree_getLightPoints(ZkBspTree const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getLightPoints");
		return nullptr;
	}

	*count = slf->light_points.size();
	return slf->light_points.data();
}

uint64_t const* ZkBspTree_getLeafNodeIndices(ZkBspTree const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getLeafNodeIndices");
		return nullptr;
	}

	*count = slf->leaf_node_indices.size();
	return slf->leaf_node_indices.data();
}

ZkBspNode const* ZkBspTree_getNodes(ZkBspTree const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getNodes");
		return nullptr;
	}

	*count = slf->nodes.size();
	return slf->nodes.data();
}

ZkSize ZkBspTree_getSectorCount(ZkBspTree const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_getSectorCount");
		return 0;
	}

	return slf->sectors.size();
}

ZkBspSector const* ZkBspTree_getSector(ZkBspTree const* slf, ZkSize i) {
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
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspTree_enumerateSectors");
		return;
	}

	for (auto& sector : slf->sectors) {
		if (cb(ctx, &sector)) break;
	}
}

ZkString ZkBspSector_getName(ZkBspSector const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspSector_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

uint32_t const* ZkBspSector_getNodeIndices(ZkBspSector const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspSector_getNodeIndices");
		return nullptr;
	}

	*count = slf->node_indices.size();
	return slf->node_indices.data();
}

uint32_t const* ZkBspSector_getPortalPolygonIndices(ZkBspSector const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkBspSector_getPortalPolygonIndices");
		return nullptr;
	}

	*count = slf->portal_polygon_indices.size();
	return slf->portal_polygon_indices.data();
}
