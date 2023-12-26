// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Texture.h"

#include "Internal.hh"

ZkTexture* ZkTexture_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_load");
		return nullptr;
	}

	try {
		ZkTexture obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkTexture_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkTexture* ZkTexture_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkTexture obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkTexture_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkTexture* ZkTexture_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkTexture_load(rd.get());
}

void ZkTexture_del(ZkTexture* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkTextureFormat ZkTexture_getFormat(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getFormat");
		return ZkTextureFormat_R8G8B8A8;
	}

	return static_cast<ZkTextureFormat>(slf->format());
}

uint32_t ZkTexture_getWidth(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getWidth");
		return 0;
	}

	return slf->width();
}

uint32_t ZkTexture_getHeight(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getHeight");
		return 0;
	}

	return slf->height();
}

uint32_t ZkTexture_getWidthMipmap(ZkTexture const* slf, ZkSize level) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getWidthMipmap");
		return 0;
	}

	if (level >= slf->mipmaps()) {
		ZKC_LOG_ERROR("ZkTexture_getWidthMipmap() failed: index out of range");
		return 0;
	}

	return slf->mipmap_width(static_cast<uint32_t>(level));
}

uint32_t ZkTexture_getHeightMipmap(ZkTexture const* slf, ZkSize level) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getHeightMipmap");
		return 0;
	}

	if (level >= slf->mipmaps()) {
		ZKC_LOG_ERROR("ZkTexture_getHeightMipmap() failed: index out of range");
		return 0;
	}

	return slf->mipmap_height(static_cast<uint32_t>(level));
}

uint32_t ZkTexture_getWidthRef(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getWidthRef");
		return 0;
	}

	return slf->ref_width();
}

uint32_t ZkTexture_getHeightRef(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getHeightRef");
		return 0;
	}

	return slf->ref_height();
}

uint32_t ZkTexture_getMipmapCount(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getMipmapCount");
		return 0;
	}

	return slf->mipmaps();
}

uint32_t ZkTexture_getAverageColor(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getAverageColor");
		return 0;
	}

	return slf->average_color();
}

ZkSize ZkTexture_getPaletteSize(ZkTexture const*) {
	ZKC_TRACE_FN();
	return zenkit::ZTEX_PALETTE_ENTRIES;
}

ZkColor ZkTexture_getPaletteItem(ZkTexture const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(zenkit::ZTEX_PALETTE_ENTRIES, i);
	return slf->palette()[i];
}

void ZkTexture_enumeratePaletteItems(ZkTexture const* slf, ZkColorEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	auto const* pal = slf->palette();
	for (int i = 0; i < zenkit::ZTEX_PALETTE_ENTRIES; ++i) {
		if (cb(ctx, pal[i])) break;
	}
}

uint8_t const* ZkTexture_getMipmapRaw(ZkTexture const* slf, ZkSize level, ZkSize* size) {
	ZKC_TRACE_FN();
	if (slf == nullptr || size == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getMipmapRaw");
		return nullptr;
	}

	*size = slf->data(static_cast<uint32_t>(level)).size();
	return slf->data(static_cast<uint32_t>(level)).data();
}

ZkSize ZkTexture_getMipmapRgba(ZkTexture const* slf, ZkSize level, uint8_t* buf, ZkSize size) {
	ZKC_TRACE_FN();
	if (slf == nullptr || buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_getMipmapRgba");
		return 0;
	}

	auto data = slf->as_rgba8(static_cast<uint32_t>(level));
	if (size < data.size()) {
		ZKC_LOG_WARN("ZkTexture_getMipmapRgba() returning incomplete image: buffer too small");
	} else {
		size = data.size();
	}

	std::copy_n(data.data(), size, buf);
	return size;
}

void ZkTexture_enumerateRawMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_enumerateRawMipmaps");
		return;
	}

	for (auto i = 0u; i < slf->mipmaps(); ++i) {
		if (cb(ctx, i, slf->data(i).data(), slf->data(i).size())) break;
	}
}

void ZkTexture_enumerateRgbaMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkTexture_enumerateRgbaMipmaps");
		return;
	}

	for (auto i = 0u; i < slf->mipmaps(); ++i) {
		auto rgba = slf->as_rgba8(i);
		if (cb(ctx, i, rgba.data(), rgba.size())) break;
	}
}
