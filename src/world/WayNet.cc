// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/world/WayNet.h"

ZkWayEdge const* ZkWayNet_getEdges(ZkWayNet const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayNet_getEdges");
		return nullptr;
	}

	*count = slf->edges.size();
	return slf->edges.data();
}

ZkSize ZkWayNet_getPointCount(ZkWayNet const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayNet_getPointCount");
		return 0;
	}

	return slf->waypoints.size();
}

ZkWayPoint const* ZkWayNet_getPoint(ZkWayNet const* slf, ZkSize i) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayNet_getPoint");
		return nullptr;
	}

	if (i >= slf->waypoints.size()) {
		ZKC_LOG_ERROR("ZkWayNet_getPoint() failed: index out of range");
		return nullptr;
	}

	return &slf->waypoints[i];
}

void ZkWayNet_enumeratePoints(ZkWayNet const* slf, ZkWayPointEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayNet_enumeratePoints");
		return;
	}

	for (auto& point : slf->waypoints) {
		if (cb(ctx, &point)) break;
	}
}

ZkString ZkWayPoint_getName(ZkWayPoint const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayPoint_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

int32_t ZkWayPoint_getWaterDepth(ZkWayPoint const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayPoint_getWaterDepth");
		return 0;
	}

	return slf->water_depth;
}

ZkBool ZkWayPoint_getUnderWater(ZkWayPoint const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayPoint_getUnderWater");
		return 0;
	}

	return slf->under_water;
}

ZkVec3f ZkWayPoint_getPosition(ZkWayPoint const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayPoint_getPosition");
		return {};
	}

	return slf->position;
}

ZkVec3f ZkWayPoint_getDirection(ZkWayPoint const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayPoint_getDirection");
		return {};
	}

	return slf->direction;
}

ZkBool ZkWayPoint_getFreePoint(ZkWayPoint const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWayPoint_getFreePoint");
		return {};
	}

	return slf->free_point;
}
