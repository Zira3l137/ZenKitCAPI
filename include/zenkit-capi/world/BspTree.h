// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/world/BspTree.hh>
using ZkBspTree = zenkit::BspTree;
using ZkBspSector = zenkit::BspSector;
#else
typedef struct ZkInternal_BspTree ZkBspTree;
typedef struct ZkInternal_BspSector ZkBspSector;
#endif

typedef struct ZkInternal_BspNode {
	ZkVec4f plane;
	ZkAxisAlignedBoundingBox bbox;
	uint32_t polygonIndex;
	uint32_t polygonCount;

	int32_t frontIndex;
	int32_t backIndex;
	int32_t parentIndex;

#ifdef __cplusplus
	ZkInternal_BspNode()
	    : plane(), bbox(), polygonIndex(0), polygonCount(0), frontIndex(-1), backIndex(-1), parentIndex(-1) {}

	ZkInternal_BspNode(zenkit::BspNode const& node)
	    : plane(node.plane), bbox(node.bbox), polygonIndex(node.polygon_index), polygonCount(node.polygon_count),
	      frontIndex(node.front_index), backIndex(node.back_index), parentIndex(node.parent_index) {}
#endif
} ZkBspNode;

typedef enum {
	ZkBspTreeType_INDOOR = 0,
	ZkBspTreeType_OUTDOOR = 1,
} ZkBspTreeType;

typedef ZkBool (*ZkBspSectorEnumerator)(void* ctx, ZkBspSector const* sector);
typedef ZkBool (*ZkBspNodeEnumerator)(void* ctx, ZkBspNode* node);

ZKC_API ZkBspTreeType ZkBspTree_getType(ZkBspTree const* slf);
ZKC_API uint32_t const* ZkBspTree_getPolygonIndices(ZkBspTree const* slf, ZkSize* count);
ZKC_API uint32_t const* ZkBspTree_getLeafPolygonIndices(ZkBspTree const* slf, ZkSize* count);
ZKC_API uint32_t const* ZkBspTree_getPortalPolygonIndices(ZkBspTree const* slf, ZkSize* count);

ZKC_API ZkSize ZkBspTree_getLightPointCount(ZkBspTree const* slf);
ZKC_API ZkVec3f ZkBspTree_getLightPoint(ZkBspTree const* slf, ZkSize i);
ZKC_API void ZkBspTree_enumerateLightPoints(ZkBspTree const* slf, ZkVec3fEnumerator cb, void* ctx);

ZKC_API uint64_t const* ZkBspTree_getLeafNodeIndices(ZkBspTree const* slf, ZkSize* count);

ZKC_API ZkSize ZkBspTree_getNodeCount(ZkBspTree const* slf);
ZKC_API ZkBspNode ZkBspTree_getNode(ZkBspTree const* slf, ZkSize i);
ZKC_API void ZkBspTree_enumerateNodes(ZkBspTree const* slf, ZkBspNodeEnumerator cb, void* ctx);

ZKC_API ZkSize ZkBspTree_getSectorCount(ZkBspTree const* slf);
ZKC_API ZkBspSector const* ZkBspTree_getSector(ZkBspTree const* slf, ZkSize i);
ZKC_API void ZkBspTree_enumerateSectors(ZkBspTree const* slf, ZkBspSectorEnumerator cb, void* ctx);

ZKC_API ZkString ZkBspSector_getName(ZkBspSector const* slf);
ZKC_API uint32_t const* ZkBspSector_getNodeIndices(ZkBspSector const* slf, ZkSize* count);
ZKC_API uint32_t const* ZkBspSector_getPortalPolygonIndices(ZkBspSector const* slf, ZkSize* count);
