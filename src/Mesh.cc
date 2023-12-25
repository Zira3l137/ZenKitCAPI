// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Mesh.h"

#include "Internal.hh"

ZkMesh* ZkMesh_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_load");
		return nullptr;
	}

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
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_loadPath");
		return nullptr;
	}

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
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_loadVfs");
		return nullptr;
	}

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
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getSourceDate");
		return {};
	}

	return slf->date;
}

ZkString ZkMesh_getName(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

ZkAxisAlignedBoundingBox ZkMesh_getBoundingBox(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getBoundingBox");
		return {};
	}

	return slf->bbox;
}

ZkOrientedBoundingBox const* ZkMesh_getOrientedBoundingBox(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getOrientedBoundingBox");
		return nullptr;
	}

	return &slf->obb;
}

ZkSize ZkMesh_getMaterialCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getMaterialCount");
		return 0;
	}

	return slf->materials.size();
}

ZkMaterial const* ZkMesh_getMaterial(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getMaterial");
		return nullptr;
	}

	if (i >= slf->materials.size()) {
		ZKC_LOG_ERROR("ZkMesh_getMaterial() failed: index out of range");
		return nullptr;
	}

	return &slf->materials[i];
}

void ZkMesh_enumerateMaterials(ZkMesh const* slf, ZkMaterialEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_enumerateMaterials");
		return;
	}

	for (auto& mesh : slf->materials) {
		if (cb(ctx, &mesh)) break;
	}
}

ZkVec3f const* ZkMesh_getPositions(ZkMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getPositions");
		return nullptr;
	}

	*count = slf->vertices.size();
	return slf->vertices.data();
}

ZkVertex const* ZkMesh_getVertices(ZkMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getVertices");
		return nullptr;
	}

	*count = slf->features.size();
	return slf->features.data();
}

ZkSize ZkMesh_getLightMapCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getLightMapCount");
		return 0;
	}

	return slf->lightmaps.size();
}

ZkLightMap const* ZkMesh_getLightMap(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getLightMap");
		return nullptr;
	}

	if (i >= slf->lightmaps.size()) {
		ZKC_LOG_ERROR("ZkMesh_getLightMap() failed: index out of range");
		return nullptr;
	}

	return &slf->lightmaps[i];
}

void ZkMesh_enumerateLightMaps(ZkMesh const* slf, ZkLightMapEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_enumerateLightMaps");
		return;
	}

	for (auto& lm : slf->lightmaps) {
		if (cb(ctx, &lm)) break;
	}
}

ZkSize ZkMesh_getPolygonCount(ZkMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getPolygonCount");
		return 0;
	}

	return slf->geometry.size();
}

ZkPolygon const* ZkMesh_getPolygon(ZkMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_getPolygon");
		return nullptr;
	}

	if (i >= slf->geometry.size()) {
		ZKC_LOG_ERROR("ZkMesh_getPolygon() failed: index out of range");
		return nullptr;
	}

	return &slf->geometry[i];
}

void ZkMesh_enumeratePolygons(ZkMesh const* slf, ZkPolygonEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMesh_enumeratePolygons");
		return;
	}

	for (auto& poly : slf->geometry) {
		if (cb(ctx, &poly)) break;
	}
}

ZkTexture const* ZkLightMap_getImage(ZkLightMap const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightMap_getImage");
		return nullptr;
	}

	return slf->image.get();
}

ZkVec3f ZkLightMap_getOrigin(ZkLightMap const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightMap_getOrigin");
		return {};
	}

	return slf->origin;
}

ZkVec3f ZkLightMap_getNormal(ZkLightMap const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkLightMap_getNormal");
		return {};
	}

	if (i >= 2) {
		ZKC_LOG_ERROR("ZkLightMap_getNormal() failed: index out of range");
		return {};
	}

	return slf->normals[i];
}

uint32_t ZkPolygon_getMaterialIndex(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getMaterialIndex");
		return {};
	}

	return slf->material;
}

int32_t ZkPolygon_getLightMapIndex(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getLightMapIndex");
		return {};
	}

	return slf->lightmap;
}

uint32_t const* ZkPolygon_getPositionIndices(ZkPolygon const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getPositionIndices");
		return {};
	}

	*count = slf->vertices.size();
	return slf->vertices.data();
}

uint32_t const* ZkPolygon_getFeatureIndices(ZkPolygon const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getFeatureIndices");
		return {};
	}

	*count = slf->features.size();
	return slf->features.data();
}

ZkBool ZkPolygon_getIsPortal(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getIsPortal");
		return {};
	}

	return slf->flags.is_portal;
}

ZkBool ZkPolygon_getIsOccluder(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getIsOccluder");
		return {};
	}

	return slf->flags.is_occluder;
}

ZkBool ZkPolygon_getIsSector(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getIsSector");
		return {};
	}

	return slf->flags.is_sector;
}

ZkBool ZkPolygon_getShouldRelight(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getShouldRelight");
		return {};
	}

	return slf->flags.should_relight;
}

ZkBool ZkPolygon_getIsOutdoor(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getIsOutdoor");
		return {};
	}

	return slf->flags.is_outdoor;
}

ZkBool ZkPolygon_getIsGhostOccluder(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getIsGhostOccluder");
		return {};
	}

	return slf->flags.is_ghost_occluder;
}

ZkBool ZkPolygon_getIsDynamicallyLit(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getIsDynamicallyLit");
		return {};
	}

	return slf->flags.is_dynamically_lit;
}

ZkBool ZkPolygon_getIsLod(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getIsLod");
		return {};
	}

	return slf->flags.is_lod;
}

uint8_t ZkPolygon_getNormalAxis(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getNormalAxis");
		return {};
	}

	return slf->flags.normal_axis;
}

int16_t ZkPolygon_getSectorIndex(ZkPolygon const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkPolygon_getSectorIndex");
		return {};
	}

	return slf->flags.sector_index;
}
