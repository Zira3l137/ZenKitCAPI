// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Vector.h"
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/world/BspTree.hh>
using ZkBspTree = zenkit::BspTree;
using ZkBspNode = zenkit::BspNode;
using ZkBspSector = zenkit::BspSector;
#else
typedef struct ZkInternal_BspTree ZkBspTree;
typedef struct ZkInternal_BspSector ZkBspSector;

typedef struct {
	ZkVec4f plane;
	ZkAxisAlignedBoundingBox bbox;
	uint32_t polygonIndex;
	uint32_t polygonCount;

	int32_t frontIndex;
	int32_t backIndex;
	int32_t parentIndex;
} ZkBspNode;
#endif

typedef enum {
	ZkBspTreeType_INDOOR = 0,
	ZkBspTreeType_OUTDOOR = 1,
} ZkBspTreeType;

typedef ZkByte (*ZkBspSectorEnumerator)(void* ctx, ZkBspSector const* sector);

CZK_API ZkBspTreeType ZkBspTree_getType(ZkBspTree const* slf);
CZK_API uint32_t const* ZkBspTree_getPolygonIndices(ZkBspTree const* slf, ZkSize* count);
CZK_API uint32_t const* ZkBspTree_getLeafPolygonIndices(ZkBspTree const* slf, ZkSize* count);
CZK_API uint32_t const* ZkBspTree_getPortalPolygonIndices(ZkBspTree const* slf, ZkSize* count);
CZK_API ZkVec3f const* ZkBspTree_getLightPoints(ZkBspTree const* slf, ZkSize* count);
CZK_API uint64_t const* ZkBspTree_getLeafNodeIndices(ZkBspTree const* slf, ZkSize* count);
CZK_API ZkBspNode const* ZkBspTree_getNodes(ZkBspTree const* slf, ZkSize* count);

CZK_API ZkSize ZkBspTree_getSectorCount(ZkBspTree const* slf);
CZK_API ZkBspSector const* ZkBspTree_getSector(ZkBspTree const* slf, ZkSize i);
CZK_API void ZkBspTree_enumerateSectors(ZkBspTree const* slf, ZkBspSectorEnumerator cb, void* ctx);

CZK_API ZkString ZkBspSector_getName(ZkBspSector const* slf);
CZK_API uint32_t const* ZkBspSector_getNodeIndices(ZkBspSector const* slf, ZkSize* count);
CZK_API uint32_t const* ZkBspSector_getPortalPolygonIndices(ZkBspSector const* slf, ZkSize* count);
