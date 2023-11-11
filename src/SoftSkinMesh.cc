// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/SoftSkinMesh.h"

ZkSize ZkSoftSkinMesh_getNodeCount(ZkSoftSkinMesh const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getNodeCount");
		return 0;
	}

	return slf->nodes.size();
}

ZkMultiResolutionMesh const* ZkSoftSkinMesh_getMesh(ZkSoftSkinMesh const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getMesh");
		return nullptr;
	}

	return &slf->mesh;
}

ZkOrientedBoundingBox const* ZkSoftSkinMesh_getBbox(ZkSoftSkinMesh const* slf, ZkSize node) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getBbox");
		return nullptr;
	}

	if (node >= slf->bboxes.size()) {
		ZKC_LOG_ERROR("ZkSoftSkinMesh_getBbox() failed: index out of range");
		return nullptr;
	}

	return &slf->bboxes[node];
}

void ZkSoftSkinMesh_enumerateBoundingBoxes(ZkSoftSkinMesh const* slf, ZkOrientedBoundingBoxEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_enumerateBoundingBoxes");
		return;
	}

	for (auto& bbox : slf->bboxes) {
		if (cb(ctx, &bbox)) break;
	}
}

ZkSoftSkinWeightEntry const* ZkSoftSkinMesh_getWeights(ZkSoftSkinMesh const* slf, ZkSize node, ZkSize* count) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getWeights");
		return nullptr;
	}

	if (node >= slf->weights.size()) {
		ZKC_LOG_ERROR("ZkSoftSkinMesh_getWeights() failed: index out of range");
		return nullptr;
	}

	*count = slf->weights[node].size();
	return slf->weights[node].data();
}

void ZkSoftSkinMesh_enumerateWeights(ZkSoftSkinMesh const* slf, ZkSoftSkinWeightEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_enumerateWeights");
		return;
	}

	for (auto& weights : slf->weights) {
		if (cb(ctx, weights.data(), weights.size())) break;
	}
}

ZkSoftSkinWedgeNormal const* ZkSoftSkinMesh_getWedgeNormals(ZkSoftSkinMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getWedgeNormals");
		return nullptr;
	}

	*count = slf->weights.size();
	return slf->wedge_normals.data();
}

int32_t const* ZkSoftSkinMesh_getNodes(ZkSoftSkinMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getNodes");
		return nullptr;
	}

	*count = slf->nodes.size();
	return slf->nodes.data();
}
