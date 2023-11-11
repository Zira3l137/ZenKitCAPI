// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Boxes.h"
#include "Library.h"
#include "Material.h"
#include "Stream.h"
#include "Vector.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/MultiResolutionMesh.hh>
using ZkMultiResolutionMesh = zenkit::MultiResolutionMesh;
using ZkSubMesh = zenkit::SubMesh;

using ZkMeshTriangle = zenkit::MeshTriangle;
using ZkMeshWedge = zenkit::MeshWedge;
using ZkMeshPlane = zenkit::MeshPlane;
using ZkMeshTriangleEdge = zenkit::MeshTriangleEdge;
using ZkMeshEdge = zenkit::MeshEdge;

#else
typedef struct ZkInternal_MultiResolutionMesh ZkMultiResolutionMesh;
typedef struct ZkInternal_SubMesh ZkSubMesh;

typedef struct {
	uint16_t wedges[3];
} ZkMeshTriangle;

typedef struct {
	ZkVec3f normal;
	ZkVec2f texture;
	uint16_t index;
} ZkMeshWedge;

typedef struct {
	float distance;
	ZkVec3f normal;
} ZkMeshPlane;

typedef struct {
	uint16_t edges[3];
} ZkMeshTriangleEdge;

typedef struct {
	uint16_t edges[2];
} ZkMeshEdge;
#endif

typedef ZkBool (*ZkSubMeshEnumerator)(void*, ZkSubMesh const*);

ZKC_API ZkMultiResolutionMesh* ZkMultiResolutionMesh_load(ZkRead* buf);
ZKC_API ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadPath(ZkString path);
ZKC_API ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkMultiResolutionMesh_del(ZkMultiResolutionMesh* slf);

ZKC_API ZkVec3f const* ZkMultiResolutionMesh_getPositions(ZkMultiResolutionMesh const* slf, ZkSize* count);
ZKC_API ZkVec3f const* ZkMultiResolutionMesh_getNormals(ZkMultiResolutionMesh const* slf, ZkSize* count);

ZKC_API ZkSize ZkMultiResolutionMesh_getSubMeshCount(ZkMultiResolutionMesh const* slf);
ZKC_API ZkSubMesh const* ZkMultiResolutionMesh_getSubMesh(ZkMultiResolutionMesh const* slf, ZkSize i);
ZKC_API void
ZkMultiResolutionMesh_enumerateSubMeshes(ZkMultiResolutionMesh const* slf, ZkSubMeshEnumerator cb, void* ctx);

ZKC_API ZkSize ZkMultiResolutionMesh_getMaterialCount(ZkMultiResolutionMesh const* slf);
ZKC_API ZkMaterial const* ZkMultiResolutionMesh_getMaterial(ZkMultiResolutionMesh const* slf, ZkSize i);
ZKC_API void
ZkMultiResolutionMesh_enumerateMaterials(ZkMultiResolutionMesh const* slf, ZkMaterialEnumerator cb, void* ctx);

ZKC_API ZkBool ZkMultiResolutionMesh_getAlphaTest(ZkMultiResolutionMesh const* slf);
ZKC_API ZkAxisAlignedBoundingBox ZkMultiResolutionMesh_getBbox(ZkMultiResolutionMesh const* slf);
ZKC_API ZkOrientedBoundingBox const* ZkMultiResolutionMesh_getOrientedBbox(ZkMultiResolutionMesh const* slf);

ZKC_API ZkMaterial const* ZkSubMesh_getMaterial(ZkSubMesh const* slf);
ZKC_API ZkMeshTriangle const* ZkSubMesh_getTriangles(ZkSubMesh const* slf, ZkSize* count);
ZKC_API ZkMeshWedge const* ZkSubMesh_getWedges(ZkSubMesh const* slf, ZkSize* count);
ZKC_API float const* ZkSubMesh_getColors(ZkSubMesh const* slf, ZkSize* count);
ZKC_API uint16_t const* ZkSubMesh_getTrianglePlaneIndices(ZkSubMesh const* slf, ZkSize* count);
ZKC_API ZkMeshPlane const* ZkSubMesh_getTrianglePlanes(ZkSubMesh const* slf, ZkSize* count);
ZKC_API ZkMeshTriangleEdge const* ZkSubMesh_getTriangleEdges(ZkSubMesh const* slf, ZkSize* count);
ZKC_API ZkMeshEdge const* ZkSubMesh_getEdges(ZkSubMesh const* slf, ZkSize* count);
ZKC_API float const* ZkSubMesh_getEdgeScores(ZkSubMesh const* slf, ZkSize* count);
ZKC_API uint16_t const* ZkSubMesh_getWedgeMap(ZkSubMesh const* slf, ZkSize* count);
