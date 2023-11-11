// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Model.h"

ZkModel* ZkModel_load(ZkRead* buf) {
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModel_load");
		return nullptr;
	}

	try {
		ZkModel obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkModel_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModel* ZkModel_loadPath(ZkString path) {
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModel_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkModel obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkModel_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModel* ZkModel_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModel_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkModel_load(rd.get());
}

void ZkModel_del(ZkModel* slf) {
	delete slf;
}

ZkModelHierarchy const* ZkModel_getHierarchy(ZkModel const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModel_getHierarchy");
		return nullptr;
	}

	return &slf->hierarchy;
}

ZkModelMesh const* ZkModel_getMesh(ZkModel const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModel_getMesh");
		return nullptr;
	}

	return &slf->mesh;
}
