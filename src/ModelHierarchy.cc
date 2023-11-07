// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/ModelHierarchy.h"

ZkModelHierarchy* ZkModelHierarchy_load(ZkRead* buf) {
	if (buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_load");
		return nullptr;
	}

	try {
		ZkModelHierarchy obj {};
		obj.load(buf);
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkModelHierarchy_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelHierarchy* ZkModelHierarchy_loadPath(ZkString path) {
	if (path == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkModelHierarchy obj {};
		obj.load(buf.get());
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkModelHierarchy_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelHierarchy* ZkModelHierarchy_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkModelHierarchy_load(rd.get());
}

void ZkModelHierarchy_del(ZkModelHierarchy* slf) {
	delete slf;
}

ZkSize ZkModelHierarchy_getNodeCount(ZkModelHierarchy const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getNodeCount");
		return 0;
	}

	return slf->nodes.size();
}

ZkModelHierarchyNode ZkModelHierarchy_getNode(ZkModelHierarchy const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getNode");
		return {};
	}

	if (i >= slf->nodes.size()) {
		CZK_LOG_ERROR("ZkModelHierarchy_getNode() failed: index out of range");
		return {};
	}

	return ZkModelHierarchyNode {
	    slf->nodes[i].parent_index,
	    slf->nodes[i].name.c_str(),
	    slf->nodes[i].transform,
	};
}

ZkAxisAlignedBoundingBox ZkModelHierarchy_getBbox(ZkModelHierarchy const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getBbox");
		return {};
	}

	return slf->bbox;
}

ZkAxisAlignedBoundingBox ZkModelHierarchy_getCollisionBbox(ZkModelHierarchy const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getCollisionBbox");
		return {};
	}

	return slf->collision_bbox;
}

ZkVec3f ZkModelHierarchy_getRootTranslation(ZkModelHierarchy const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getRootTranslation");
		return {};
	}

	return slf->root_translation;
}

uint32_t ZkModelHierarchy_getChecksum(ZkModelHierarchy const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getChecksum");
		return {};
	}

	return slf->checksum;
}

ZkDate ZkModelHierarchy_getSourceDate(ZkModelHierarchy const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getSourceDate");
		return {};
	}

	return slf->source_date;
}

ZkString ZkModelHierarchy_getSourcePath(ZkModelHierarchy const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_getSourcePath");
		return {};
	}

	return slf->source_path.c_str();
}

void ZkModelHierarchy_enumerateNodes(ZkModelHierarchy const* slf, ZkModelHierarchyNodeEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelHierarchy_enumerateNodes");
		return;
	}

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
