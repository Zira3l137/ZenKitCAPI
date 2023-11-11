// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include <zenkit/Archive.hh>

#define ZKC_LOADER(cls)                                                                                                \
	cls* cls##_load(ZkRead* buf) {                                                                                     \
		if (buf == nullptr) {                                                                                          \
			ZKC_LOG_WARN_NULL(#cls "_load");                                                                           \
			return nullptr;                                                                                            \
		}                                                                                                              \
                                                                                                                       \
		try {                                                                                                          \
			cls obj {};                                                                                                \
			obj.load(buf);                                                                                             \
			return ZKC_WRAP_NEW(obj);                                                                                  \
		} catch (std::exception const& exc) {                                                                          \
			ZKC_LOG_ERROR(#cls "_load() failed: %s", exc.what());                                                      \
			return nullptr;                                                                                            \
		}                                                                                                              \
	}

#define ZKC_PATH_LOADER(cls)                                                                                           \
	cls* cls##_loadPath(ZkString path) {                                                                               \
		if (path == nullptr) {                                                                                         \
			ZKC_LOG_WARN_NULL(#cls "_loadPath");                                                                       \
			return nullptr;                                                                                            \
		}                                                                                                              \
                                                                                                                       \
		try {                                                                                                          \
			auto buf = zenkit::Read::from(path);                                                                       \
                                                                                                                       \
			cls obj {};                                                                                                \
			obj.load(buf.get());                                                                                       \
			return ZKC_WRAP_NEW(obj);                                                                                  \
		} catch (std::exception const& exc) {                                                                          \
			ZKC_LOG_ERROR(#cls "_loadPath() failed: %s", exc.what());                                                  \
			return nullptr;                                                                                            \
		}                                                                                                              \
	}

#define ZKC_VFS_LOADER(cls)                                                                                            \
	cls* cls##_loadVfs(ZkVfs* vfs, ZkString name) {                                                                    \
		if (vfs == nullptr || name == nullptr) {                                                                       \
			ZKC_LOG_WARN_NULL(#cls "_loadVfs");                                                                        \
			return nullptr;                                                                                            \
		}                                                                                                              \
                                                                                                                       \
		auto node = vfs->find(name);                                                                                   \
		if (node == nullptr) return nullptr;                                                                           \
                                                                                                                       \
		auto rd = node->open_read();                                                                                   \
		return cls##_load(rd.get());                                                                                   \
	}

#define ZKC_DELETER(cls)                                                                                               \
	void cls##_del(cls* slf) {                                                                                         \
		delete slf;                                                                                                    \
	}

#define ZKC_RETURN_CATCH(expr)                                                                                         \
	do {                                                                                                               \
		try {                                                                                                          \
			return (expr);                                                                                             \
		} catch (std::exception const& exc) {                                                                          \
			ZKC_LOG_ERROR("%s() failed: %s", __func__, exc.what());                                                    \
			return {};                                                                                                 \
		}                                                                                                              \
	} while (0)

#define ZKC_CATCH(expr)                                                                                                \
	do {                                                                                                               \
		try {                                                                                                          \
			expr;                                                                                                      \
		} catch (std::exception const& exc) {                                                                          \
			ZKC_LOG_ERROR("%s() failed: %s", __func__, exc.what());                                                    \
			return;                                                                                                    \
		}                                                                                                              \
	} while (0)

#define ZKC_VOB_LOADER(cls)                                                                                            \
	cls* cls##_load(ZkRead* buf, ZkGameVersion version) {                                                              \
		if (buf == nullptr) {                                                                                          \
			ZKC_LOG_WARN_NULL(#cls "_load");                                                                           \
			return nullptr;                                                                                            \
		}                                                                                                              \
                                                                                                                       \
		try {                                                                                                          \
			auto ar = zenkit::ReadArchive::from(buf);                                                                  \
                                                                                                                       \
			zenkit::ArchiveObject o {};                                                                                \
			ar->read_object_begin(o);                                                                                  \
                                                                                                                       \
			cls obj {};                                                                                                \
			obj.load(*ar, static_cast<zenkit::GameVersion>(version));                                                  \
			return ZKC_WRAP_NEW(obj);                                                                                  \
		} catch (std::exception const& exc) {                                                                          \
			ZKC_LOG_ERROR(#cls "_load() failed: %s", exc.what());                                                      \
			return nullptr;                                                                                            \
		}                                                                                                              \
	}

#define ZKC_VOB_PATH_LOADER(cls)                                                                                       \
	cls* cls##_loadPath(ZkString path, ZkGameVersion version) {                                                        \
		if (path == nullptr) {                                                                                         \
			ZKC_LOG_WARN_NULL(#cls "_loadPath");                                                                       \
			return nullptr;                                                                                            \
		}                                                                                                              \
                                                                                                                       \
		try {                                                                                                          \
			auto buf = zenkit::Read::from(path);                                                                       \
			auto ar = zenkit::ReadArchive::from(buf.get());                                                            \
                                                                                                                       \
			zenkit::ArchiveObject o {};                                                                                \
			ar->read_object_begin(o);                                                                                  \
                                                                                                                       \
			cls obj {};                                                                                                \
			obj.load(*ar, static_cast<zenkit::GameVersion>(version));                                                  \
			return ZKC_WRAP_NEW(obj);                                                                                  \
		} catch (std::exception const& exc) {                                                                          \
			ZKC_LOG_ERROR(#cls "_loadPath() failed: %s", exc.what());                                                  \
			return nullptr;                                                                                            \
		}                                                                                                              \
	}

template <typename... T>
inline bool zk_any_nullptr(T*... args) {
	return ((args == nullptr) || ...);
}

#define ZKC_CHECK_NULL(...)                                                                                            \
	do {                                                                                                               \
		if (zk_any_nullptr(__VA_ARGS__)) {                                                                             \
			ZKC_LOG_ERROR("%s() failed: received NULL argument", __func__);                                            \
			return {};                                                                                                 \
		}                                                                                                              \
	} while (false)

#define ZKC_CHECK_NULLV(...)                                                                                           \
	do {                                                                                                               \
		if (zk_any_nullptr(__VA_ARGS__)) {                                                                             \
			ZKC_LOG_ERROR("%s() failed: received NULL argument", __func__);                                            \
			return;                                                                                                    \
		}                                                                                                              \
	} while (false)

#define ZKC_CHECK_LEN(lst, par)                                                                                        \
	do {                                                                                                               \
		if ((par) >= (lst).size()) {                                                                                   \
			ZKC_LOG_ERROR("%s() failed: index out of range", __func__);                                                \
			return {};                                                                                                 \
		}                                                                                                              \
	} while (false)

#define ZKC_CHECK_LENA(maxlen, par)                                                                                    \
	do {                                                                                                               \
		if ((par) >= (maxlen)) {                                                                                       \
			ZKC_LOG_ERROR("%s() failed: index out of range", __func__);                                                \
			return {};                                                                                                 \
		}                                                                                                              \
	} while (false)
