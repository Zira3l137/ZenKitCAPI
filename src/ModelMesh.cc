// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/ModelMesh.h"

ZkModelMesh* ZkModelMesh_load(ZkRead* buf) {
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_load");
		return nullptr;
	}

	try {
		ZkModelMesh obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkModelMesh_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelMesh* ZkModelMesh_loadPath(ZkString path) {
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkModelMesh obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkModelMesh_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelMesh* ZkModelMesh_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkModelMesh_load(rd.get());
}

void ZkModelMesh_del(ZkModelMesh* slf) {
	delete slf;
}

ZkSize ZkModelMesh_getMeshCount(ZkModelMesh const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_getMeshCount");
		return 0;
	}

	return slf->meshes.size();
}

ZkSoftSkinMesh const* ZkModelMesh_getMesh(ZkModelMesh const* slf, ZkSize i) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_getMesh");
		return nullptr;
	}

	if (i >= slf->meshes.size()) {
		ZKC_LOG_ERROR("ZkModelMesh_getMesh() failed: index out of range");
		return nullptr;
	}

	return &slf->meshes[i];
}

void ZkModelMesh_enumerateMeshes(ZkModelMesh const* slf, ZkSoftSkinMeshEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_enumerateMeshes");
		return;
	}

	for (auto& mesh : slf->meshes) {
		if (cb(ctx, &mesh)) break;
	}
}

ZkSize ZkModelMesh_getAttachmentCount(ZkModelMesh const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_getAttachmentCount");
		return 0;
	}

	return slf->attachments.size();
}

ZkMultiResolutionMesh const* ZkModelMesh_getAttachment(ZkModelMesh const* slf, ZkString name) {
	if (slf == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_getAttachment");
		return nullptr;
	}

	auto it = slf->attachments.find(name);
	if (it == slf->attachments.end()) return nullptr;
	return &it->second;
}

void ZkModelMesh_enumerateAttachments(ZkModelMesh const* slf, ZkAttachmentEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_enumerateAttachments");
		return;
	}

	for (auto& [name, mesh] : slf->attachments) {
		if (cb(ctx, name.c_str(), &mesh)) break;
	}
}

uint32_t ZkModelMesh_getChecksum(ZkModelMesh const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelMesh_getChecksum");
		return 0;
	}

	return slf->checksum;
}
