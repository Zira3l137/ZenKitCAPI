// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/MultiResolutionMesh.h"

#include "Internal.hh"

ZKC_LOADER(ZkMultiResolutionMesh);
ZKC_PATH_LOADER(ZkMultiResolutionMesh);
ZKC_VFS_LOADER(ZkMultiResolutionMesh);
ZKC_DELETER(ZkMultiResolutionMesh);

ZkSize ZkMultiResolutionMesh_getPositionCount(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->positions.size();
}

ZkVec3f ZkMultiResolutionMesh_getPosition(ZkMultiResolutionMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->positions, i);
	return slf->positions[i];
}

void ZkMultiResolutionMesh_enumeratePositions(ZkMultiResolutionMesh const* slf, ZkVec3fEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->positions) {
		if (cb(ctx, v)) break;
	}
}

ZkSize ZkMultiResolutionMesh_getNormalCount(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->normals.size();
}

ZkVec3f ZkMultiResolutionMesh_getNormal(ZkMultiResolutionMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->normals, i);
	return slf->normals[i];
}

void ZkMultiResolutionMesh_enumerateNormals(ZkMultiResolutionMesh const* slf, ZkVec3fEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->normals) {
		if (cb(ctx, v)) break;
	}
}

ZkSize ZkMultiResolutionMesh_getSubMeshCount(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	return slf->sub_meshes.size();
}

ZkSubMesh const* ZkMultiResolutionMesh_getSubMesh(ZkMultiResolutionMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->sub_meshes, i);
	return &slf->sub_meshes[i];
}

void ZkMultiResolutionMesh_enumerateSubMeshes(ZkMultiResolutionMesh const* slf, ZkSubMeshEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& subMesh : slf->sub_meshes) {
		if (cb(ctx, &subMesh)) return;
	}
}

ZkSize ZkMultiResolutionMesh_getMaterialCount(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->materials.size();
}

ZkMaterial const* ZkMultiResolutionMesh_getMaterial(ZkMultiResolutionMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->materials, i);
	return &slf->materials[i];
}

void ZkMultiResolutionMesh_enumerateMaterials(ZkMultiResolutionMesh const* slf, ZkMaterialEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& material : slf->materials) {
		if (cb(ctx, &material)) return;
	}
}

ZkBool ZkMultiResolutionMesh_getAlphaTest(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->alpha_test;
}

ZkAxisAlignedBoundingBox ZkMultiResolutionMesh_getBbox(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->bbox;
}

ZkOrientedBoundingBox const* ZkMultiResolutionMesh_getOrientedBbox(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->obbox;
}

ZkMaterial const* ZkSubMesh_getMaterial(ZkSubMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->mat;
}

ZkMeshTriangle const* ZkSubMesh_getTriangles(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->triangles.size();
	return slf->triangles.data();
}

ZkSize ZkSubMesh_getWedgeCount(ZkSubMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->wedges.size();
}

ZkMeshWedge ZkSubMesh_getWedge(ZkSubMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->wedges, i);
	return slf->wedges[i];
}

void ZkSubMesh_enumerateWedges(ZkSubMesh const* slf, ZkMeshWedgeEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	ZkMeshWedge cWedge;
	for (auto& v : slf->wedges) {
		cWedge = v;
		if (cb(ctx, &cWedge)) break;
	}
}

float const* ZkSubMesh_getColors(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->colors.size();
	return slf->colors.data();
}

uint16_t const* ZkSubMesh_getTrianglePlaneIndices(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->triangle_plane_indices.size();
	return slf->triangle_plane_indices.data();
}

ZkSize ZkSubMesh_getTrianglePlaneCount(ZkSubMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->triangle_planes.size();
}

ZkMeshPlane ZkSubMesh_getTrianglePlane(ZkSubMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->triangle_planes, i);
	return slf->triangle_planes[i];
}

void ZkSubMesh_enumerateTrianglePlanes(ZkSubMesh const* slf, ZkMeshPlaneEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	ZkMeshPlane cPlane;
	for (auto& v : slf->triangle_planes) {
		cPlane = v;
		if (cb(ctx, &cPlane)) break;
	}
}

ZkMeshTriangleEdge const* ZkSubMesh_getTriangleEdges(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->triangle_edges.size();
	return slf->triangle_edges.data();
}

ZkMeshEdge const* ZkSubMesh_getEdges(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->edges.size();
	return slf->edges.data();
}

float const* ZkSubMesh_getEdgeScores(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->edge_scores.size();
	return slf->edge_scores.data();
}

uint16_t const* ZkSubMesh_getWedgeMap(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->wedge_map.size();
	return slf->wedge_map.data();
}
