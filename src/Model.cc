// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Model.h"

#include "Internal.hh"

ZkModel* ZkModel_load(ZkRead* buf) {
	ZKC_TRACE_FN();
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
	ZKC_TRACE_FN();
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
	ZKC_TRACE_FN();
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
	ZKC_TRACE_FN();
	delete slf;
}

ZkModelHierarchy const* ZkModel_getHierarchy(ZkModel const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModel_getHierarchy");
		return nullptr;
	}

	return &slf->hierarchy;
}

ZkModelMesh const* ZkModel_getMesh(ZkModel const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModel_getMesh");
		return nullptr;
	}

	return &slf->mesh;
}
