// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/ModelMesh.h"

#include "Internal.hh"

ZKC_LOADER(ZkModelMesh);
ZKC_PATH_LOADER(ZkModelMesh);
ZKC_VFS_LOADER(ZkModelMesh);
ZKC_DELETER(ZkModelMesh);

ZkSize ZkModelMesh_getMeshCount(ZkModelMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->meshes.size();
}

ZkSoftSkinMesh const* ZkModelMesh_getMesh(ZkModelMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->meshes, i);
	return &slf->meshes[i];
}

void ZkModelMesh_enumerateMeshes(ZkModelMesh const* slf, ZkSoftSkinMeshEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& mesh : slf->meshes) {
		if (cb(ctx, &mesh)) break;
	}
}

ZkSize ZkModelMesh_getAttachmentCount(ZkModelMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->attachments.size();
}

ZkMultiResolutionMesh const* ZkModelMesh_getAttachment(ZkModelMesh const* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, name);

	auto it = slf->attachments.find(name);
	if (it == slf->attachments.end()) return nullptr;
	return &it->second;
}

void ZkModelMesh_enumerateAttachments(ZkModelMesh const* slf, ZkAttachmentEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& [name, mesh] : slf->attachments) {
		if (cb(ctx, name.c_str(), &mesh)) break;
	}
}

uint32_t ZkModelMesh_getChecksum(ZkModelMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->checksum;
}
