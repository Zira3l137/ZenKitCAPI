// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/World.h"

#include "Internal.hh"

ZkWorld* ZkWorld_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld"
		                  "_load");
		return nullptr;
	}
	try {
		ZkWorld* slf = new ZkWorld(std::make_shared<zenkit::World>());
		SLF->load(buf);
		return slf;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld"
		              "_load() failed: %s",
		              exc.what());
		return nullptr;
	}
}

ZkWorld* ZkWorld_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld"
		                  "_loadPath");
		return nullptr;
	}
	try {
		auto buf = zenkit::Read::from(path);

		ZkWorld* slf = new ZkWorld(std::make_shared<zenkit::World>());
		SLF->load(buf.get());

		return slf;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld"
		              "_loadPath() failed: %s",
		              exc.what());
		return nullptr;
	}
}

ZkWorld* ZkWorld_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkWorld"
		                  "_loadVfs");
		return nullptr;
	}
	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;
	auto rd = node->open_read();
	return ZkWorld_load(rd.get());
}

ZKC_DELETER(ZkWorld);

ZkMesh const* ZkWorld_getMesh(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &SLF->world_mesh;
}

ZkWayNet const* ZkWorld_getWayNet(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &SLF->world_way_net;
}

ZkBspTree const* ZkWorld_getBspTree(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &SLF->world_bsp_tree;
}

ZkSize ZkWorld_getRootObjectCount(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->world_vobs.size();
}

ZkVirtualObject const* ZkWorld_getRootObject(ZkWorld const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->world_vobs, i);
	return &SLF->world_vobs[i];
}

void ZkWorld_enumerateRootObjects(ZkWorld const* slf, ZkVirtualObjectEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto obj : SLF->world_vobs) {
		if (cb(ctx, &obj)) break;
	}
}
