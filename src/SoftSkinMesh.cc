// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/SoftSkinMesh.h"

#include "Internal.hh"

ZkSize ZkSoftSkinMesh_getNodeCount(ZkSoftSkinMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getNodeCount");
		return 0;
	}

	return slf->nodes.size();
}

ZkMultiResolutionMesh const* ZkSoftSkinMesh_getMesh(ZkSoftSkinMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getMesh");
		return nullptr;
	}

	return &slf->mesh;
}

ZkOrientedBoundingBox const* ZkSoftSkinMesh_getBbox(ZkSoftSkinMesh const* slf, ZkSize node) {
	ZKC_TRACE_FN();
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
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_enumerateBoundingBoxes");
		return;
	}

	for (auto& bbox : slf->bboxes) {
		if (cb(ctx, &bbox)) break;
	}
}

ZkSize ZkSoftSkinMesh_getWeightTotal(ZkSoftSkinMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->weights.size();
}

ZkSize ZkSoftSkinMesh_getWeightCount(ZkSoftSkinMesh const* slf, ZkSize node) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->weights, node);
	return slf->weights[node].size();
}

ZkSoftSkinWeightEntry ZkSoftSkinMesh_getWeight(ZkSoftSkinMesh const* slf, ZkSize node, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->weights, node);
	ZKC_CHECK_LEN(slf->weights[node], i);
	return slf->weights[node][i];
}

void ZkSoftSkinMesh_enumerateWeights(ZkSoftSkinMesh const* slf, ZkSize node, ZkSoftSkinWeightEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);
	ZKC_CHECK_LENV(slf->weights, node);

	ZkSoftSkinWeightEntry cWeight;
	for (auto& w : slf->weights[node]) {
		cWeight = w;
		if (cb(ctx, &cWeight)) break;
	}
}

ZkSize ZkSoftSkinMesh_getWedgeNormalCount(ZkSoftSkinMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->wedge_normals.size();
}

ZkSoftSkinWedgeNormal ZkSoftSkinMesh_getWedgeNormal(ZkSoftSkinMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->wedge_normals, i);
	return slf->wedge_normals[i];
}

void ZkSoftSkinMesh_enumerateWedgeNormals(ZkSoftSkinMesh const* slf, ZkSoftSkinWedgeNormalEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& n : slf->wedge_normals) {
		if (cb(ctx, n)) break;
	}
}

int32_t const* ZkSoftSkinMesh_getNodes(ZkSoftSkinMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSoftSkinMesh_getNodes");
		return nullptr;
	}

	*count = slf->nodes.size();
	return slf->nodes.data();
}
