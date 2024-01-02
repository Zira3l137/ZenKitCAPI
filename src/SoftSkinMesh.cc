// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/SoftSkinMesh.h"

#include "Internal.hh"

ZkSize ZkSoftSkinMesh_getNodeCount(ZkSoftSkinMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->nodes.size();
}

ZkMultiResolutionMesh const* ZkSoftSkinMesh_getMesh(ZkSoftSkinMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->mesh;
}

ZkOrientedBoundingBox const* ZkSoftSkinMesh_getBbox(ZkSoftSkinMesh const* slf, ZkSize node) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->bboxes, node);
	return &slf->bboxes[node];
}

void ZkSoftSkinMesh_enumerateBoundingBoxes(ZkSoftSkinMesh const* slf, ZkOrientedBoundingBoxEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

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
	ZKC_CHECK_NULL(slf, count);

	*count = slf->nodes.size();
	return slf->nodes.data();
}
