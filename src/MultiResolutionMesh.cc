// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/MultiResolutionMesh.h"

#include "Internal.hh"

ZkMultiResolutionMesh* ZkMultiResolutionMesh_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_load");
		return nullptr;
	}

	try {
		ZkMultiResolutionMesh obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMultiResolutionMesh_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkMultiResolutionMesh obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMultiResolutionMesh_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkMultiResolutionMesh_load(rd.get());
}

void ZkMultiResolutionMesh_del(ZkMultiResolutionMesh* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

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
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_getSubMeshCount");
		return 0;
	}

	return slf->sub_meshes.size();
}

ZkSubMesh const* ZkMultiResolutionMesh_getSubMesh(ZkMultiResolutionMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_getSubMesh");
		return nullptr;
	}

	if (i >= slf->sub_meshes.size()) {
		ZKC_LOG_ERROR("ZkMultiResolutionMesh_getSubMesh() failed: index out of range");
		return nullptr;
	}

	return &slf->sub_meshes[i];
}

void ZkMultiResolutionMesh_enumerateSubMeshes(ZkMultiResolutionMesh const* slf, ZkSubMeshEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_enumerateSubMeshes");
		return;
	}

	for (auto& subMesh : slf->sub_meshes) {
		if (cb(ctx, &subMesh)) return;
	}
}

ZkSize ZkMultiResolutionMesh_getMaterialCount(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_getMaterialCount");
		return 0;
	}

	return slf->materials.size();
}

ZkMaterial const* ZkMultiResolutionMesh_getMaterial(ZkMultiResolutionMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_getMaterial");
		return nullptr;
	}

	if (i >= slf->materials.size()) {
		ZKC_LOG_ERROR("ZkMultiResolutionMesh_getMaterial() failed: index out of range");
		return nullptr;
	}

	return &slf->materials[i];
}

void ZkMultiResolutionMesh_enumerateMaterials(ZkMultiResolutionMesh const* slf, ZkMaterialEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_enumerateMaterials");
		return;
	}

	for (auto& material : slf->materials) {
		if (cb(ctx, &material)) return;
	}
}

ZkBool ZkMultiResolutionMesh_getAlphaTest(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_getAlphaTest");
		return false;
	}

	return slf->alpha_test;
}

ZkAxisAlignedBoundingBox ZkMultiResolutionMesh_getBbox(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_getBbox");
		return {};
	}

	return slf->bbox;
}

ZkOrientedBoundingBox const* ZkMultiResolutionMesh_getOrientedBbox(ZkMultiResolutionMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMultiResolutionMesh_getOrientedBbox");
		return nullptr;
	}

	return &slf->obbox;
}

ZkMaterial const* ZkSubMesh_getMaterial(ZkSubMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getMaterial");
		return nullptr;
	}

	return &slf->mat;
}

ZkMeshTriangle const* ZkSubMesh_getTriangles(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getTriangles");
		return nullptr;
	}

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
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getColors");
		return nullptr;
	}

	*count = slf->colors.size();
	return slf->colors.data();
}

uint16_t const* ZkSubMesh_getTrianglePlaneIndices(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getTrianglePlaneIndices");
		return nullptr;
	}

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
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getTriangleEdges");
		return nullptr;
	}

	*count = slf->triangle_edges.size();
	return slf->triangle_edges.data();
}

ZkMeshEdge const* ZkSubMesh_getEdges(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getEdges");
		return nullptr;
	}

	*count = slf->edges.size();
	return slf->edges.data();
}

float const* ZkSubMesh_getEdgeScores(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getEdgeScores");
		return nullptr;
	}

	*count = slf->edge_scores.size();
	return slf->edge_scores.data();
}

uint16_t const* ZkSubMesh_getWedgeMap(ZkSubMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkSubMesh_getWedgeMap");
		return nullptr;
	}

	*count = slf->wedge_map.size();
	return slf->wedge_map.data();
}
