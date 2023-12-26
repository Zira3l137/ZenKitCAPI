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
using ZkMeshTriangleEdge = zenkit::MeshTriangleEdge;
using ZkMeshEdge = zenkit::MeshEdge;

#else
typedef struct ZkInternal_MultiResolutionMesh ZkMultiResolutionMesh;
typedef struct ZkInternal_SubMesh ZkSubMesh;

typedef struct {
	uint16_t wedges[3];
} ZkMeshTriangle;

typedef struct {
	uint16_t edges[3];
} ZkMeshTriangleEdge;

typedef struct {
	uint16_t edges[2];
} ZkMeshEdge;
#endif

typedef struct ZkInternal_MeshWedge {
	ZkVec3f normal;
	ZkVec2f texture;
	uint16_t index;

#ifdef __cplusplus
	ZkInternal_MeshWedge() : normal(), texture(), index(0) {}
	ZkInternal_MeshWedge(zenkit::MeshWedge const& v) : normal(v.normal), texture(v.texture), index(v.index) {}
#endif
} ZkMeshWedge;

typedef struct ZkInternal_MeshPlane {
	float distance;
	ZkVec3f normal;

#ifdef __cplusplus
	ZkInternal_MeshPlane() : distance(0), normal() {}
	ZkInternal_MeshPlane(zenkit::MeshPlane const& v) : distance(v.distance), normal(v.normal) {}
#endif
} ZkMeshPlane;

typedef ZkBool (*ZkSubMeshEnumerator)(void*, ZkSubMesh const*);
typedef ZkBool (*ZkMeshWedgeEnumerator)(void*, ZkMeshWedge*);
typedef ZkBool (*ZkMeshPlaneEnumerator)(void*, ZkMeshPlane*);

ZKC_API ZkMultiResolutionMesh* ZkMultiResolutionMesh_load(ZkRead* buf);
ZKC_API ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadPath(ZkString path);
ZKC_API ZkMultiResolutionMesh* ZkMultiResolutionMesh_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkMultiResolutionMesh_del(ZkMultiResolutionMesh* slf);

ZKC_API ZkSize ZkMultiResolutionMesh_getPositionCount(ZkMultiResolutionMesh const* slf);
ZKC_API ZkVec3f ZkMultiResolutionMesh_getPosition(ZkMultiResolutionMesh const* slf, ZkSize i);
ZKC_API void
ZkMultiResolutionMesh_enumeratePositions(ZkMultiResolutionMesh const* slf, ZkVec3fEnumerator cb, void* ctx);

ZKC_API ZkSize ZkMultiResolutionMesh_getNormalCount(ZkMultiResolutionMesh const* slf);
ZKC_API ZkVec3f ZkMultiResolutionMesh_getNormal(ZkMultiResolutionMesh const* slf, ZkSize i);
ZKC_API void ZkMultiResolutionMesh_enumerateNormals(ZkMultiResolutionMesh const* slf, ZkVec3fEnumerator cb, void* ctx);

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

ZKC_API ZkSize ZkSubMesh_getWedgeCount(ZkSubMesh const* slf);
ZKC_API ZkMeshWedge ZkSubMesh_getWedge(ZkSubMesh const* slf, ZkSize i);
ZKC_API void ZkSubMesh_enumerateWedges(ZkSubMesh const* slf, ZkMeshWedgeEnumerator cb, void* ctx);

ZKC_API float const* ZkSubMesh_getColors(ZkSubMesh const* slf, ZkSize* count);
ZKC_API uint16_t const* ZkSubMesh_getTrianglePlaneIndices(ZkSubMesh const* slf, ZkSize* count);

ZKC_API ZkSize ZkSubMesh_getTrianglePlaneCount(ZkSubMesh const* slf);
ZKC_API ZkMeshPlane ZkSubMesh_getTrianglePlane(ZkSubMesh const* slf, ZkSize i);
ZKC_API void ZkSubMesh_enumerateTrianglePlanes(ZkSubMesh const* slf, ZkMeshPlaneEnumerator cb, void* ctx);

ZKC_API ZkMeshTriangleEdge const* ZkSubMesh_getTriangleEdges(ZkSubMesh const* slf, ZkSize* count);
ZKC_API ZkMeshEdge const* ZkSubMesh_getEdges(ZkSubMesh const* slf, ZkSize* count);
ZKC_API float const* ZkSubMesh_getEdgeScores(ZkSubMesh const* slf, ZkSize* count);
ZKC_API uint16_t const* ZkSubMesh_getWedgeMap(ZkSubMesh const* slf, ZkSize* count);
