// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Font.h"

#include "Internal.hh"

ZkFont* ZkFont_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_load");
		return nullptr;
	}

	try {
		ZkFont obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkFont_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkFont* ZkFont_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkFont obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkFont_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkFont* ZkFont_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkFont_load(rd.get());
}

void ZkFont_del(ZkFont* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkString ZkFont_getName(ZkFont const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

uint32_t ZkFont_getHeight(ZkFont const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_getHeight");
		return 0;
	}

	return slf->height;
}

ZkSize ZkFont_getGlyphCount(ZkFont const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_getGlyphCount");
		return 0;
	}

	return slf->glyphs.size();
}

ZkFontGlyph ZkFont_getGlyph(ZkFont const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_getGlyph");
		return {0, {}, {}};
	}

	if (i >= slf->glyphs.size()) {
		ZKC_LOG_ERROR("ZkFont_getGlyph() failed: index out of range");
		return {0, {}, {}};
	}

	auto& glyph = slf->glyphs[i];
	return {glyph.width, glyph.uv[0], glyph.uv[1]};
}

void ZkFont_enumerateGlyphs(ZkFont const* slf, ZkFontGlyphEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkFont_enumerateGlyphs");
		return;
	}

	ZkFontGlyph fg {0, {}, {}};
	for (auto& glyph : slf->glyphs) {
		fg.width = glyph.width;
		fg.topLeft = glyph.uv[0];
		fg.bottomRight = glyph.uv[1];
		if (cb(ctx, &fg)) break;
	}
}
