// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Font.h"

#include "Internal.hh"

ZKC_LOADER(ZkFont);
ZKC_PATH_LOADER(ZkFont);
ZKC_VFS_LOADER(ZkFont);
ZKC_DELETER(ZkFont);

ZkString ZkFont_getName(ZkFont const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

uint32_t ZkFont_getHeight(ZkFont const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->height;
}

ZkSize ZkFont_getGlyphCount(ZkFont const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->glyphs.size();
}

ZkFontGlyph ZkFont_getGlyph(ZkFont const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->glyphs, i);

	auto& glyph = slf->glyphs[i];
	return {glyph.width, glyph.uv[0], glyph.uv[1]};
}

void ZkFont_enumerateGlyphs(ZkFont const* slf, ZkFontGlyphEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	ZkFontGlyph fg {0, {}, {}};
	for (auto& glyph : slf->glyphs) {
		fg.width = glyph.width;
		fg.topLeft = glyph.uv[0];
		fg.bottomRight = glyph.uv[1];
		if (cb(ctx, &fg)) break;
	}
}
