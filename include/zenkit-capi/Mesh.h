// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Boxes.h"
#include "Date.h"
#include "Material.h"
#include "Stream.h"
#include "Texture.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/Mesh.hh>
using ZkMesh = zenkit::Mesh;
using ZkLightMap = zenkit::LightMap;
using ZkPolygon = zenkit::Polygon;
#else
typedef struct ZkInternal_Mesh ZkMesh;
typedef struct ZkInternal_LightMap ZkLightMap;
typedef struct ZkInternal_Polygon ZkPolygon;
#endif

typedef struct ZkInternal_Vertex {
	ZkVec2f texture;
	uint32_t light;
	ZkVec3f normal;

#ifdef __cplusplus
	ZkInternal_Vertex() : texture(), light(0), normal() {}
	ZkInternal_Vertex(zenkit::VertexFeature const& v) : texture(v.texture), light(v.light), normal(v.normal) {}
#endif
} ZkVertex;

typedef ZkBool (*ZkVertexEnumerator)(void* ctx, ZkVertex* vertex);
typedef ZkBool (*ZkLightMapEnumerator)(void* ctx, ZkLightMap const* lightMap);
typedef ZkBool (*ZkPolygonEnumerator)(void* ctx, ZkPolygon const* polygon);

ZKC_API ZkMesh* ZkMesh_load(ZkRead* buf);
ZKC_API ZkMesh* ZkMesh_loadPath(ZkString path);
ZKC_API ZkMesh* ZkMesh_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkMesh_del(ZkMesh* slf);

ZKC_API ZkDate ZkMesh_getSourceDate(ZkMesh const* slf);
ZKC_API ZkString ZkMesh_getName(ZkMesh const* slf);
ZKC_API ZkAxisAlignedBoundingBox ZkMesh_getBoundingBox(ZkMesh const* slf);
ZKC_API ZkOrientedBoundingBox const* ZkMesh_getOrientedBoundingBox(ZkMesh const* slf);

ZKC_API ZkSize ZkMesh_getMaterialCount(ZkMesh const* slf);
ZKC_API ZkMaterial const* ZkMesh_getMaterial(ZkMesh const* slf, ZkSize i);
ZKC_API void ZkMesh_enumerateMaterials(ZkMesh const* slf, ZkMaterialEnumerator cb, void* ctx);

ZKC_API ZkSize ZkMesh_getPositionCount(ZkMesh const* slf);
ZKC_API ZkVec3f ZkMesh_getPosition(ZkMesh const* slf, ZkSize i);
ZKC_API void ZkMesh_enumeratePositions(ZkMesh const* slf, ZkVec3fEnumerator cb, void* ctx);

ZKC_API ZkSize ZkMesh_getVertexCount(ZkMesh const* slf);
ZKC_API ZkVertex ZkMesh_getVertex(ZkMesh const* slf, ZkSize i);
ZKC_API void ZkMesh_enumerateVertices(ZkMesh const* slf, ZkVertexEnumerator cb, void* ctx);

ZKC_API ZkSize ZkMesh_getLightMapCount(ZkMesh const* slf);
ZKC_API ZkLightMap const* ZkMesh_getLightMap(ZkMesh const* slf, ZkSize i);
ZKC_API void ZkMesh_enumerateLightMaps(ZkMesh const* slf, ZkLightMapEnumerator cb, void* ctx);

ZKC_API ZkSize ZkMesh_getPolygonCount(ZkMesh const* slf);
ZKC_API ZkPolygon const* ZkMesh_getPolygon(ZkMesh const* slf, ZkSize i);
ZKC_API void ZkMesh_enumeratePolygons(ZkMesh const* slf, ZkPolygonEnumerator cb, void* ctx);

ZKC_API ZkTexture const* ZkLightMap_getImage(ZkLightMap const* slf);
ZKC_API ZkVec3f ZkLightMap_getOrigin(ZkLightMap const* slf);
ZKC_API ZkVec3f ZkLightMap_getNormal(ZkLightMap const* slf, ZkSize i);

ZKC_API uint32_t ZkPolygon_getMaterialIndex(ZkPolygon const* slf);
ZKC_API int32_t ZkPolygon_getLightMapIndex(ZkPolygon const* slf);
ZKC_API uint32_t const* ZkPolygon_getPositionIndices(ZkPolygon const* slf, ZkMesh const* msh, ZkSize* count);
ZKC_API uint32_t const* ZkPolygon_getFeatureIndices(ZkPolygon const* slf, ZkMesh const* msh, ZkSize* count);
ZKC_API ZkBool ZkPolygon_getIsPortal(ZkPolygon const* slf);
ZKC_API ZkBool ZkPolygon_getIsOccluder(ZkPolygon const* slf);
ZKC_API ZkBool ZkPolygon_getIsSector(ZkPolygon const* slf);
ZKC_API ZkBool ZkPolygon_getShouldRelight(ZkPolygon const* slf);
ZKC_API ZkBool ZkPolygon_getIsOutdoor(ZkPolygon const* slf);
ZKC_API ZkBool ZkPolygon_getIsGhostOccluder(ZkPolygon const* slf);
ZKC_API ZkBool ZkPolygon_getIsDynamicallyLit(ZkPolygon const* slf);
ZKC_API ZkBool ZkPolygon_getIsLod(ZkPolygon const* slf);
ZKC_API uint8_t ZkPolygon_getNormalAxis(ZkPolygon const* slf);
ZKC_API int16_t ZkPolygon_getSectorIndex(ZkPolygon const* slf);
