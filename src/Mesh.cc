// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Mesh.h"

#include "Internal.hh"

ZkMesh* ZkMesh_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(buf);

	try {
		ZkMesh obj {};
		obj.load(buf, false);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMesh_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMesh* ZkMesh_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(path);

	try {
		auto buf = zenkit::Read::from(path);

		ZkMesh obj {};
		obj.load(buf.get(), false);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMesh_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}
ZkMesh* ZkMesh_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(vfs, name);

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkMesh_load(rd.get());
}

void ZkMesh_del(ZkMesh* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkDate ZkMesh_getSourceDate(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->date;
}

ZkString ZkMesh_getName(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkAxisAlignedBoundingBox ZkMesh_getBoundingBox(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->bbox;
}

ZkOrientedBoundingBox const* ZkMesh_getOrientedBoundingBox(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->obb;
}

ZkSize ZkMesh_getMaterialCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->materials.size();
}

ZkMaterial const* ZkMesh_getMaterial(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->materials, i);
	return &slf->materials[i];
}

void ZkMesh_enumerateMaterials(ZkMesh const* slf, ZkMaterialEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& mesh : slf->materials) {
		if (cb(ctx, &mesh)) break;
	}
}

ZkSize ZkMesh_getPositionCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->vertices.size();
}

ZkVec3f ZkMesh_getPosition(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->vertices, i);
	return slf->vertices[i];
}

void ZkMesh_enumeratePositions(ZkMesh const* slf, ZkVec3fEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->vertices) {
		if (cb(ctx, v)) break;
	}
}

ZkSize ZkMesh_getVertexCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->features.size();
}

ZkVertex ZkMesh_getVertex(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->features, i);
	return slf->features[i];
}

void ZkMesh_enumerateVertices(ZkMesh const* slf, ZkVertexEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	ZkVertex cVertex;
	for (auto& v : slf->features) {
		cVertex = v;
		if (cb(ctx, &cVertex)) break;
	}
}

ZkSize ZkMesh_getLightMapCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->lightmaps.size();
}

ZkLightMap const* ZkMesh_getLightMap(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->lightmaps, i);
	return &slf->lightmaps[i];
}

void ZkMesh_enumerateLightMaps(ZkMesh const* slf, ZkLightMapEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& lm : slf->lightmaps) {
		if (cb(ctx, &lm)) break;
	}
}

ZkSize ZkMesh_getPolygonCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->geometry.size();
}

ZkPolygon const* ZkMesh_getPolygon(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->geometry, i);
	return &slf->geometry[i];
}

void ZkMesh_enumeratePolygons(ZkMesh const* slf, ZkPolygonEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& poly : slf->geometry) {
		if (cb(ctx, &poly)) break;
	}
}

ZkTexture const* ZkLightMap_getImage(ZkLightMap const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->image.get();
}

ZkVec3f ZkLightMap_getOrigin(ZkLightMap const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->origin;
}

ZkVec3f ZkLightMap_getNormal(ZkLightMap const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(2, i);
	return slf->normals[i];
}

uint32_t ZkPolygon_getMaterialIndex(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->material;
}

int32_t ZkPolygon_getLightMapIndex(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->lightmap;
}

uint32_t const* ZkPolygon_getPositionIndices(ZkPolygon const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->vertices.size();
	return slf->vertices.data();
}

uint32_t const* ZkPolygon_getFeatureIndices(ZkPolygon const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->features.size();
	return slf->features.data();
}

ZkBool ZkPolygon_getIsPortal(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.is_portal;
}

ZkBool ZkPolygon_getIsOccluder(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.is_occluder;
}

ZkBool ZkPolygon_getIsSector(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.is_sector;
}

ZkBool ZkPolygon_getShouldRelight(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.should_relight;
}

ZkBool ZkPolygon_getIsOutdoor(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.is_outdoor;
}

ZkBool ZkPolygon_getIsGhostOccluder(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.is_ghost_occluder;
}

ZkBool ZkPolygon_getIsDynamicallyLit(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.is_dynamically_lit;
}

ZkBool ZkPolygon_getIsLod(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.is_lod;
}

uint8_t ZkPolygon_getNormalAxis(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.normal_axis;
}

int16_t ZkPolygon_getSectorIndex(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags.sector_index;
}
