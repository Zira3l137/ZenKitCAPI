// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Date.h"
#include "Library.h"
#include "MultiResolutionMesh.h"
#include "SoftSkinMesh.h"
#include "Vector.h"

#ifdef __cplusplus
	#include <zenkit/ModelMesh.hh>
using ZkSoftSkinMesh = zenkit::SoftSkinMesh;
#else
typedef struct ZkInternal_SoftSkinMesh ZkSoftSkinMesh;
#endif

typedef struct ZkInternal_SoftSkinWedgeNormal {
	ZkVec3f normal;
	uint32_t index;

#ifdef __cplusplus
	ZkInternal_SoftSkinWedgeNormal() : normal(), index(0) {}
	ZkInternal_SoftSkinWedgeNormal(zenkit::SoftSkinWedgeNormal const& v) : normal(v.normal), index(v.index) {}
#endif
} ZkSoftSkinWedgeNormal;

typedef struct ZkInternal_SoftSkinWeightEntry {
	float weight;
	ZkVec3f position;
	uint8_t node_index;

#ifdef __cplusplus
	ZkInternal_SoftSkinWeightEntry() : weight(0), position(), node_index(0) {}
	ZkInternal_SoftSkinWeightEntry(zenkit::SoftSkinWeightEntry const& v)
	    : weight(v.weight), position(v.position), node_index(v.node_index) {}
#endif
} ZkSoftSkinWeightEntry;

typedef ZkBool (*ZkSoftSkinMeshEnumerator)(void* ctx, ZkSoftSkinMesh const* mesh);
typedef ZkBool (*ZkSoftSkinWeightEnumerator)(void* ctx, ZkSoftSkinWeightEntry* entry);
typedef ZkBool (*ZkSoftSkinWedgeNormalEnumerator)(void* ctx, ZkSoftSkinWedgeNormal normal);

ZKC_API ZkSize ZkSoftSkinMesh_getNodeCount(ZkSoftSkinMesh const* slf);
ZKC_API ZkMultiResolutionMesh const* ZkSoftSkinMesh_getMesh(ZkSoftSkinMesh const* slf);
ZKC_API ZkOrientedBoundingBox const* ZkSoftSkinMesh_getBbox(ZkSoftSkinMesh const* slf, ZkSize node);
ZKC_API void
ZkSoftSkinMesh_enumerateBoundingBoxes(ZkSoftSkinMesh const* slf, ZkOrientedBoundingBoxEnumerator cb, void* ctx);

ZKC_API ZkSize ZkSoftSkinMesh_getWeightTotal(ZkSoftSkinMesh const* slf);
ZKC_API ZkSize ZkSoftSkinMesh_getWeightCount(ZkSoftSkinMesh const* slf, ZkSize node);
ZKC_API ZkSoftSkinWeightEntry ZkSoftSkinMesh_getWeight(ZkSoftSkinMesh const* slf, ZkSize node, ZkSize i);
ZKC_API void
ZkSoftSkinMesh_enumerateWeights(ZkSoftSkinMesh const* slf, ZkSize node, ZkSoftSkinWeightEnumerator cb, void* ctx);

ZKC_API ZkSize ZkSoftSkinMesh_getWedgeNormalCount(ZkSoftSkinMesh const* slf);
ZKC_API ZkSoftSkinWedgeNormal ZkSoftSkinMesh_getWedgeNormal(ZkSoftSkinMesh const* slf, ZkSize i);
ZKC_API void
ZkSoftSkinMesh_enumerateWedgeNormals(ZkSoftSkinMesh const* slf, ZkSoftSkinWedgeNormalEnumerator cb, void* ctx);

ZKC_API int32_t const* ZkSoftSkinMesh_getNodes(ZkSoftSkinMesh const* slf, ZkSize* count);
