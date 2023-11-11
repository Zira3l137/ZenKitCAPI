// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Vfs.h"

ZkVfs* ZkVfs_new(void) {
	return new ZkVfs {};
}

void ZkVfs_del(ZkVfs* slf) {
	delete slf;
}

ZkVfsNode const* ZkVfs_getRoot(ZkVfs const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_getRoot");
		return nullptr;
	}

	return &slf->root();
}

ZkVfsNode* ZkVfs_mkdir(ZkVfs* slf, ZkString path) {
	if (slf == nullptr || path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_mkdir");
		return nullptr;
	}

	return &slf->mkdir(path);
}

ZkBool ZkVfs_remove(ZkVfs* slf, ZkString path) {
	if (slf == nullptr || path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_mkdir");
		return false;
	}

	return slf->remove(path);
}

void ZkVfs_mount(ZkVfs* slf, ZkVfsNode* node, ZkString parent, ZkVfsOverwriteBehavior overwrite) {
	if (slf == nullptr || node == nullptr || parent == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_mount");
		return;
	}

	try {
		slf->mount(*node, parent, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mount() failed: %s", exc.what());
	}
}

void ZkVfs_mountHost(ZkVfs* slf, ZkString path, ZkString parent, ZkVfsOverwriteBehavior overwrite) {
	if (slf == nullptr || path == nullptr || parent == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_mountHost");
		return;
	}

	try {
		slf->mount_host(path, parent, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mountHost() failed: %s", exc.what());
	}
}

void ZkVfs_mountDisk(ZkVfs* slf, ZkRead* buf, ZkVfsOverwriteBehavior overwrite) {
	if (slf == nullptr || buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_mountDisk");
		return;
	}

	try {
		slf->mount_disk(buf, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mountDisk() failed: %s", exc.what());
	}
}

void ZkVfs_mountDiskHost(ZkVfs* slf, ZkString path, ZkVfsOverwriteBehavior overwrite) {
	if (slf == nullptr || path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_mountDiskHost");
		return;
	}

	try {
		slf->mount_disk(path, static_cast<zenkit::VfsOverwriteBehavior>(overwrite));
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfs_mountDiskHost() failed: %s", exc.what());
	}
}

ZkVfsNode* ZkVfs_resolvePath(ZkVfs* slf, ZkString path) {
	if (slf == nullptr || path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_resolvePath");
		return nullptr;
	}

	return slf->resolve(path);
}

ZkVfsNode* ZkVfs_findNode(ZkVfs* slf, ZkString name) {
	if (slf == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfs_findNode");
		return nullptr;
	}

	return slf->find(name);
}

ZkVfsNode* ZkVfsNode_newFile(ZkString name, ZkByte const* buf, ZkSize size, time_t ts) {
	if (name == nullptr || buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_newFile");
		return nullptr;
	}

	try {
		auto node = ZkVfsNode::file(name, zenkit::VfsFileDescriptor {(std::byte const*) (buf), size}, ts);
		return ZKC_WRAP_NEW(node);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfsNode_newFile() failed: %s", exc.what());
		return nullptr;
	}
}

ZkVfsNode* ZkVfsNode_newDir(ZkString name, time_t ts) {
	if (name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_newDir");
		return nullptr;
	}

	try {
		auto node = ZkVfsNode::directory(name, ts);
		return ZKC_WRAP_NEW(node);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkVfsNode_newDir() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkVfsNode_del(ZkVfsNode* slf) {
	delete slf;
}

ZkBool ZkVfsNode_isFile(ZkVfsNode const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_isFile");
		return false;
	}

	return slf->type() == zenkit::VfsNodeType::FILE;
}

ZkBool ZkVfsNode_isDir(ZkVfsNode const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_isDir");
		return false;
	}

	return slf->type() == zenkit::VfsNodeType::DIRECTORY;
}

time_t ZkVfsNode_getTime(ZkVfsNode const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_getTime");
		return 0;
	}

	return slf->time();
}

ZkString ZkVfsNode_getName(ZkVfsNode const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_getName");
		return nullptr;
	}

	return slf->name().c_str();
}

ZkVfsNode* ZkVfsNode_getChild(ZkVfsNode* slf, ZkString name) {
	if (slf == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_getChild");
		return nullptr;
	}

	if (ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_getChild() failed: not a directory");
		return nullptr;
	}

	return slf->child(name);
}

ZkVfsNode* ZkVfsNode_create(ZkVfsNode* slf, ZkVfsNode* node) {
	if (slf == nullptr || node == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_create");
		return nullptr;
	}

	if (ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_create() failed: not a directory");
		return nullptr;
	}

	return slf->create(*node);
}

ZkBool ZkVfsNode_remove(ZkVfsNode* slf, ZkString name) {
	if (slf == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_remove");
		return false;
	}

	if (ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_remove() failed: not a directory");
		return false;
	}

	return slf->remove(name);
}

ZkRead* ZkVfsNode_open(ZkVfsNode const* slf) {
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_open");
		return nullptr;
	}

	if (!ZkVfsNode_isFile(slf)) {
		ZKC_LOG_ERROR("ZkVfsNode_open() failed: not a file");
		return nullptr;
	}

	return slf->open_read().release();
}

void ZkVfsNode_enumerateChildren(ZkVfsNode const* slf, ZkVfsNodeEnumerator callback, void* ctx) {
	if (slf == nullptr || callback == nullptr) {
		ZKC_LOG_WARN_NULL("ZkVfsNode_enumerateChildren");
		return;
	}

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
