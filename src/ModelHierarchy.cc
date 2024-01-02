// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/ModelHierarchy.h"

#include "Internal.hh"

ZKC_LOADER(ZkModelHierarchy);
ZKC_PATH_LOADER(ZkModelHierarchy);
ZKC_VFS_LOADER(ZkModelHierarchy);
ZKC_DELETER(ZkModelHierarchy);

ZkSize ZkModelHierarchy_getNodeCount(ZkModelHierarchy const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->nodes.size();
}

ZkModelHierarchyNode ZkModelHierarchy_getNode(ZkModelHierarchy const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->nodes, i);

	return ZkModelHierarchyNode {
	    slf->nodes[i].parent_index,
	    slf->nodes[i].name.c_str(),
	    slf->nodes[i].transform,
	};
}

ZkAxisAlignedBoundingBox ZkModelHierarchy_getBbox(ZkModelHierarchy const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->bbox;
}

ZkAxisAlignedBoundingBox ZkModelHierarchy_getCollisionBbox(ZkModelHierarchy const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->collision_bbox;
}

ZkVec3f ZkModelHierarchy_getRootTranslation(ZkModelHierarchy const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->root_translation;
}

uint32_t ZkModelHierarchy_getChecksum(ZkModelHierarchy const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->checksum;
}

ZkDate ZkModelHierarchy_getSourceDate(ZkModelHierarchy const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->source_date;
}

ZkString ZkModelHierarchy_getSourcePath(ZkModelHierarchy const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->source_path.c_str();
}

void ZkModelHierarchy_enumerateNodes(ZkModelHierarchy const* slf, ZkModelHierarchyNodeEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	ZkModelHierarchyNode n;
	for (auto& node : slf->nodes) {
		n = {
		    node.parent_index,
		    node.name.c_str(),
		    node.transform,
		};

		if (cb(ctx, &n)) break;
	}
}
