// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/Texture.h"

ZkTexture* ZkTexture_load(ZkRead* buf) {
	if (buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_load");
		return nullptr;
	}

	try {
		ZkTexture obj {};
		obj.load(buf);
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkTexture_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkTexture* ZkTexture_loadPath(ZkString path) {
	if (path == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkTexture obj {};
		obj.load(buf.get());
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkTexture_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkTexture* ZkTexture_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkTexture_load(rd.get());
}

void ZkTexture_del(ZkTexture* slf) {
	delete slf;
}

ZkTextureFormat ZkTexture_getFormat(ZkTexture const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getFormat");
		return ZkTextureFormat_R8G8B8A8;
	}

	return static_cast<ZkTextureFormat>(slf->format());
}

uint32_t ZkTexture_getWidth(ZkTexture const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getWidth");
		return 0;
	}

	return slf->width();
}

uint32_t ZkTexture_getHeight(ZkTexture const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getHeight");
		return 0;
	}

	return slf->height();
}

uint32_t ZkTexture_getWidthMipmap(ZkTexture const* slf, ZkSize level) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getWidthMipmap");
		return 0;
	}

	if (level >= slf->mipmaps()) {
		CZK_LOG_ERROR("ZkTexture_getWidthMipmap() failed: index out of range");
		return 0;
	}

	return slf->mipmap_width(static_cast<uint32_t>(level));
}

uint32_t ZkTexture_getHeightMipmap(ZkTexture const* slf, ZkSize level) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getHeightMipmap");
		return 0;
	}

	if (level >= slf->mipmaps()) {
		CZK_LOG_ERROR("ZkTexture_getHeightMipmap() failed: index out of range");
		return 0;
	}

	return slf->mipmap_height(static_cast<uint32_t>(level));
}

uint32_t ZkTexture_getWidthRef(ZkTexture const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getWidthRef");
		return 0;
	}

	return slf->ref_width();
}

uint32_t ZkTexture_getHeightRef(ZkTexture const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getHeightRef");
		return 0;
	}

	return slf->ref_height();
}

uint32_t ZkTexture_getMipmapCount(ZkTexture const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getMipmapCount");
		return 0;
	}

	return slf->mipmaps();
}

uint32_t ZkTexture_getAverageColor(ZkTexture const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getAverageColor");
		return 0;
	}

	return slf->average_color();
}

ZkColorArgb const* ZkTexture_getPalette(ZkTexture const* slf, ZkSize* size) {
	if (slf == nullptr || size == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getPalette");
		return nullptr;
	}

	*size = zenkit::ZTEX_PALETTE_ENTRIES;
	return slf->palette();
}

uint8_t const* ZkTexture_getMipmapRaw(ZkTexture const* slf, ZkSize level, ZkSize* size) {
	if (slf == nullptr || size == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getMipmapRaw");
		return nullptr;
	}

	*size = slf->data(static_cast<uint32_t>(level)).size();
	return slf->data(static_cast<uint32_t>(level)).data();
}

ZkSize ZkTexture_getMipmapRgba(ZkTexture const* slf, ZkSize level, uint8_t* buf, ZkSize size) {
	if (slf == nullptr || buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_getMipmapRgba");
		return 0;
	}

	auto data = slf->as_rgba8(static_cast<uint32_t>(level));
	if (size < data.size()) {
		CZK_LOG_WARN("ZkTexture_getMipmapRgba() returning incomplete image: buffer too small");
	} else {
		size = data.size();
	}

	std::copy_n(data.data(), size, buf);
	return size;
}

void ZkTexture_enumerateRawMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_enumerateRawMipmaps");
		return;
	}

	for (auto i = 0u; i < slf->mipmaps(); ++i) {
		if (cb(ctx, i, slf->data(i).data(), slf->data(i).size())) break;
	}
}

void ZkTexture_enumerateRgbaMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkTexture_enumerateRgbaMipmaps");
		return;
	}

	for (auto i = 0u; i < slf->mipmaps(); ++i) {
		auto rgba = slf->as_rgba8(i);
		if (cb(ctx, i, rgba.data(), rgba.size())) break;
	}
}
