// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Vfs.h"

#include "Internal.hh"

#include <cstring>

ZkVfs* ZkVfs_new(void) {
	ZKC_TRACE_FN();
	return new ZkVfs {};
}

void ZkVfs_del(ZkVfs* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

void ZkVfs_save(ZkVfs const* slf, ZkString path, ZkGameVersion version, time_t unix_t) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, path);

	auto wr = zenkit::Write::to(path);
	slf->save(wr.get(), static_cast<zenkit::GameVersion>(version), unix_t);
}

ZkVfsNode const* ZkVfs_getRoot(ZkVfs const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->root();
}

ZkVfsNode* ZkVfs_mkdir(ZkVfs* slf, ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, path);
	return &slf->mkdir(path);
}

ZkBool ZkVfs_remove(ZkVfs* slf, ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, path);
	return slf->remove(path);
}

void ZkVfs_mount(ZkVfs* slf, ZkVfsNode* node, ZkString parent, ZkVfsOverwriteBehavior overwrite) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, node, parent);

	try {
		slf->mount(*node, parent, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mount() failed: %s", exc.what());
	}
}

void ZkVfs_mountHost(ZkVfs* slf, ZkString path, ZkString parent, ZkVfsOverwriteBehavior overwrite) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, path, parent);

	try {
		slf->mount_host(path, parent, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mountHost() failed: %s", exc.what());
	}
}

void ZkVfs_mountDisk(ZkVfs* slf, ZkRead* buf, ZkVfsOverwriteBehavior overwrite) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, buf);

	try {
		slf->mount_disk(buf, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mountDisk() failed: %s", exc.what());
	}
}

void ZkVfs_mountDiskHost(ZkVfs* slf, ZkString path, ZkVfsOverwriteBehavior overwrite) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, path);

	try {
		slf->mount_disk(path, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mountDiskHost() failed: %s", exc.what());
	}
}

ZkVfsNode* ZkVfs_resolvePath(ZkVfs* slf, ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, path);
	return slf->resolve(path);
}

ZkVfsNode* ZkVfs_findNode(ZkVfs* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, name);
	return slf->find(name);
}

ZkVfsNode* ZkVfsNode_newFile(ZkString name, ZkByte const* buf, ZkSize size, time_t ts) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(name, buf);

	try {
		std::byte* mem = new std::byte[size];
		memcpy(mem, buf, size);

		auto node = ZkVfsNode::file(name, zenkit::VfsFileDescriptor {mem, size, true}, ts);
		return ZKC_WRAP_NEW(node);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfsNode_newFile() failed: %s", exc.what());
		return nullptr;
	}
}

ZkVfsNode* ZkVfsNode_newDir(ZkString name, time_t ts) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(name);

	try {
		auto node = ZkVfsNode::directory(name, ts);
		return ZKC_WRAP_NEW(node);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfsNode_newDir() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkVfsNode_del(ZkVfsNode* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkBool ZkVfsNode_isFile(ZkVfsNode const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->type() == zenkit::VfsNodeType::FILE;
}

ZkBool ZkVfsNode_isDir(ZkVfsNode const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->type() == zenkit::VfsNodeType::DIRECTORY;
}

time_t ZkVfsNode_getTime(ZkVfsNode const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->time();
}

ZkString ZkVfsNode_getName(ZkVfsNode const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name().c_str();
}

ZkVfsNode* ZkVfsNode_getChild(ZkVfsNode* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, name);

	if (ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_getChild() failed: not a directory");
		return nullptr;
	}

	return slf->child(name);
}

ZkVfsNode* ZkVfsNode_create(ZkVfsNode* slf, ZkVfsNode* node) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, node);

	if (ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_create() failed: not a directory");
		return nullptr;
	}

	return slf->create(*node);
}

ZkBool ZkVfsNode_remove(ZkVfsNode* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, name);

	if (ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_remove() failed: not a directory");
		return false;
	}

	return slf->remove(name);
}

ZkRead* ZkVfsNode_open(ZkVfsNode const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	if (!ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_open() failed: not a file");
		return nullptr;
	}

	return slf->open_read().release();
}

void ZkVfsNode_enumerateChildren(ZkVfsNode const* slf, ZkVfsNodeEnumerator callback, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, callback);

	if (ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_enumerateChildren() failed: not a directory");
		return;
	}

	for (auto& child : slf->children()) {
		if (callback(ctx, &child)) {
			break;
		}
	}
}
