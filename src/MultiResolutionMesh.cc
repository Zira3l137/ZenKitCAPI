// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/MultiResolutionMesh.h"

ZkMultiResolutionMesh* ZkMultiResolutionMesh_load(ZkRead* buf) {
	if (buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_load");
		return nullptr;
	}

	try {
		ZkMultiResolutionMesh obj {};
		obj.load(buf);
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkMultiResolutionMesh_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadPath(ZkString path) {
	if (path == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkMultiResolutionMesh obj {};
		obj.load(buf.get());
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkMultiResolutionMesh_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkMultiResolutionMesh_load(rd.get());
}

void ZkMultiResolutionMesh_del(ZkMultiResolutionMesh* slf) {
	delete slf;
}

ZkVec3f const* ZkMultiResolutionMesh_getPositions(ZkMultiResolutionMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getPositions");
		return nullptr;
	}

	*count = slf->positions.size();
	return slf->positions.data();
}

ZkVec3f const* ZkMultiResolutionMesh_getNormals(ZkMultiResolutionMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getNormals");
		return nullptr;
	}

	*count = slf->normals.size();
	return slf->normals.data();
}

ZkSize ZkMultiResolutionMesh_getSubMeshCount(ZkMultiResolutionMesh const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getSubMeshCount");
		return 0;
	}

	return slf->sub_meshes.size();
}

ZkSubMesh const* ZkMultiResolutionMesh_getSubMesh(ZkMultiResolutionMesh const* slf, long i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getSubMesh");
		return nullptr;
	}

	if (i >= slf->sub_meshes.size()) {
		CZK_LOG_ERROR("ZkMultiResolutionMesh_getSubMesh() failed: index out of range");
		return nullptr;
	}

	return &slf->sub_meshes[i];
}

void ZkMultiResolutionMesh_enumerateSubMeshes(ZkMultiResolutionMesh const* slf, ZkSubMeshEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_enumerateSubMeshes");
		return;
	}

	for (auto& subMesh : slf->sub_meshes) {
		if (cb(ctx, &subMesh)) return;
	}
}

ZkSize ZkMultiResolutionMesh_getMaterialCount(ZkMultiResolutionMesh const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getMaterialCount");
		return 0;
	}

	return slf->materials.size();
}

ZkMaterial const* ZkMultiResolutionMesh_getMaterial(ZkMultiResolutionMesh const* slf, long i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getMaterial");
		return nullptr;
	}

	if (i >= slf->materials.size()) {
		CZK_LOG_ERROR("ZkMultiResolutionMesh_getMaterial() failed: index out of range");
		return nullptr;
	}

	return &slf->materials[i];
}

void ZkMultiResolutionMesh_enumerateMaterials(ZkMultiResolutionMesh const* slf, ZkMaterialEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_enumerateMaterials");
		return;
	}

	for (auto& material : slf->materials) {
		if (cb(ctx, &material)) return;
	}
}

ZkBool ZkMultiResolutionMesh_getAlphaTest(ZkMultiResolutionMesh const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getAlphaTest");
		return false;
	}

	return slf->alpha_test;
}

ZkAxisAlignedBoundingBox ZkMultiResolutionMesh_getBbox(ZkMultiResolutionMesh const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getBbox");
		return {};
	}

	return slf->bbox;
}

ZkOrientedBoundingBox const* ZkMultiResolutionMesh_getOrientedBbox(ZkMultiResolutionMesh const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMultiResolutionMesh_getOrientedBbox");
		return nullptr;
	}

	return &slf->obbox;
}

ZkMaterial const* ZkSubMesh_getMaterial(ZkSubMesh const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getMaterial");
		return nullptr;
	}

	return &slf->mat;
}

ZkMeshTriangle const* ZkSubMesh_getTriangles(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getTriangles");
		return nullptr;
	}

	*count = slf->triangles.size();
	return slf->triangles.data();
}

ZkMeshWedge const* ZkSubMesh_getWedges(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getWedges");
		return nullptr;
	}

	*count = slf->wedges.size();
	return slf->wedges.data();
}

float const* ZkSubMesh_getColors(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getColors");
		return nullptr;
	}

	*count = slf->colors.size();
	return slf->colors.data();
}

uint16_t const* ZkSubMesh_getTrianglePlaneIndices(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getTrianglePlaneIndices");
		return nullptr;
	}

	*count = slf->triangle_plane_indices.size();
	return slf->triangle_plane_indices.data();
}

ZkMeshPlane const* ZkSubMesh_getTrianglePlanes(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getTrianglePlanes");
		return nullptr;
	}

	*count = slf->triangle_planes.size();
	return slf->triangle_planes.data();
}

ZkMeshTriangleEdge const* ZkSubMesh_getTriangleEdges(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getTriangleEdges");
		return nullptr;
	}

	*count = slf->triangle_edges.size();
	return slf->triangle_edges.data();
}

ZkMeshEdge const* ZkSubMesh_getEdges(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getEdges");
		return nullptr;
	}

	*count = slf->edges.size();
	return slf->edges.data();
}

float const* ZkSubMesh_getEdgeScores(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getEdgeScores");
		return nullptr;
	}

	*count = slf->edge_scores.size();
	return slf->edge_scores.data();
}

uint16_t const* ZkSubMesh_getWedgeMap(ZkSubMesh const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkSubMesh_getWedgeMap");
		return nullptr;
	}

	*count = slf->wedge_map.size();
	return slf->wedge_map.data();
}
