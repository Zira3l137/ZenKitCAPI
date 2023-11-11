// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/World.h"

ZkWorld* ZkWorld_load(ZkRead* buf) {
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_load");
		return nullptr;
	}

	try {
		ZkWorld obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkWorld* ZkWorld_loadPath(ZkString path) {
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkWorld obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkWorld* ZkWorld_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkWorld_load(rd.get());
}

void ZkWorld_del(ZkWorld* slf) {
	delete slf;
}

ZkMesh const* ZkWorld_getMesh(ZkWorld const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_getMesh");
		return nullptr;
	}

	return &slf->world_mesh;
}

ZkWayNet const* ZkWorld_getWayNet(ZkWorld const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_getWayNet");
		return nullptr;
	}

	return &slf->world_way_net;
}

ZkBspTree const* ZkWorld_getBspTree(ZkWorld const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_getBspTree");
		return nullptr;
	}

	return &slf->world_bsp_tree;
}

ZkSize ZkWorld_getRootObjectCount(ZkWorld const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_getRootObjectCount");
		return 0;
	}

	return slf->world_vobs.size();
}

ZkVirtualObject const* ZkWorld_getRootObject(ZkWorld const* slf, ZkSize i) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_getRootObject");
		return nullptr;
	}

	if (i >= slf->world_vobs.size()) {
		ZKC_LOG_ERROR("ZkWorld_getRootObject() failed: index out of range");
		return nullptr;
	}

	return slf->world_vobs[i].get();
}

void ZkWorld_enumerateRootObjects(ZkWorld const* slf, ZkVirtualObjectEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld_enumerateRootObjects");
		return;
	}

	for (auto& obj : slf->world_vobs) {
		if (cb(ctx, obj.get())) break;
	}
}
