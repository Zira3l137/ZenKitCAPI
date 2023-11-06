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
using ZkVertex = zenkit::VertexFeature;
using ZkLightMap = zenkit::LightMap;
using ZkPolygon = zenkit::Polygon;
#else
typedef struct ZkInternal_Mesh ZkMesh;
typedef struct ZkInternal_LightMap ZkLightMap;
typedef struct ZkInternal_Polygon ZkPolygon;

typedef struct {
	ZkVec2f texture;
	uint32_t light;
	ZkVec3f normal;
} ZkVertex;
#endif

typedef ZkBool (*ZkLightMapEnumerator)(void* ctx, ZkLightMap const* lightMap);
typedef ZkBool (*ZkPolygonEnumerator)(void* ctx, ZkPolygon const* polygon);

CZK_API ZkMesh* ZkMesh_load(ZkRead* buf);
CZK_API ZkMesh* ZkMesh_loadPath(ZkString path);
CZK_API ZkMesh* ZkMesh_loadVfs(ZkVfs* vfs, ZkString name);
CZK_API void ZkMesh_del(ZkMesh* slf);

CZK_API ZkDate ZkMesh_getSourceDate(ZkMesh const* slf);
CZK_API ZkString ZkMesh_getName(ZkMesh const* slf);
CZK_API ZkAxisAlignedBoundingBox ZkMesh_getBoundingBox(ZkMesh const* slf);
CZK_API ZkOrientedBoundingBox const* ZkMesh_getOrientedBoundingBox(ZkMesh const* slf);

CZK_API ZkSize ZkMesh_getMaterialCount(ZkMesh const* slf);
CZK_API ZkMaterial const* ZkMesh_getMaterial(ZkMesh const* slf, long i);
CZK_API void ZkMesh_enumerateMaterials(ZkMesh const* slf, ZkMaterialEnumerator cb, void* ctx);

CZK_API ZkVec3f const* ZkMesh_getPositions(ZkMesh const* slf, ZkSize* count);
CZK_API ZkVertex const* ZkMesh_getVertices(ZkMesh const* slf, ZkSize* count);

CZK_API ZkSize ZkMesh_getLightMapCount(ZkMesh const* slf);
CZK_API ZkLightMap const* ZkMesh_getLightMap(ZkMesh const* slf, long i);
CZK_API void ZkMesh_enumerateLightMaps(ZkMesh const* slf, ZkLightMapEnumerator cb, void* ctx);

CZK_API ZkSize ZkMesh_getPolygonCount(ZkMesh const* slf);
CZK_API ZkPolygon const* ZkMesh_getPolygon(ZkMesh const* slf, long i);
CZK_API void ZkMesh_enumeratePolygons(ZkMesh const* slf, ZkPolygonEnumerator cb, void* ctx);

CZK_API ZkTexture const* ZkLightMap_getImage(ZkLightMap const* slf);
CZK_API ZkVec3f ZkLightMap_getOrigin(ZkLightMap const* slf);
CZK_API ZkVec3f ZkLightMap_getNormal(ZkLightMap const* slf, ZkSize i);

CZK_API uint32_t ZkPolygon_getMaterialIndex(ZkPolygon const* slf);
CZK_API int32_t ZkPolygon_getLightMapIndex(ZkPolygon const* slf);
CZK_API uint32_t const* ZkPolygon_getPositionIndices(ZkPolygon const* slf, ZkSize* count);
CZK_API uint32_t const* ZkPolygon_getPolygonIndices(ZkPolygon const* slf, ZkSize* count);
CZK_API ZkBool ZkPolygon_getIsPortal(ZkPolygon const* slf);
CZK_API ZkBool ZkPolygon_getIsOccluder(ZkPolygon const* slf);
CZK_API ZkBool ZkPolygon_getIsSector(ZkPolygon const* slf);
CZK_API ZkBool ZkPolygon_getShouldRelight(ZkPolygon const* slf);
CZK_API ZkBool ZkPolygon_getIsOutdoor(ZkPolygon const* slf);
CZK_API ZkBool ZkPolygon_getIsGhostOccluder(ZkPolygon const* slf);
CZK_API ZkBool ZkPolygon_getIsDynamicallyLit(ZkPolygon const* slf);
CZK_API ZkBool ZkPolygon_getIsLod(ZkPolygon const* slf);
CZK_API uint8_t ZkPolygon_getNormalAxis(ZkPolygon const* slf);
CZK_API uint16_t ZkPolygon_getSectorIndex(ZkPolygon const* slf);
