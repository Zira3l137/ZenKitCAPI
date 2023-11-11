// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Stream.h"
#include "Vector.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/Font.hh>
using ZkFont = zenkit::Font;
#else
typedef struct ZkInternal_Font ZkFont;
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	uint8_t width;
	ZkVec2f topLeft;
	ZkVec2f bottomRight;
} ZkFontGlyph;

#ifdef __cplusplus
}
#endif

typedef ZkBool (*ZkFontGlyphEnumerator)(void* ctx, ZkFontGlyph* glyph);

ZKC_API ZkFont* ZkFont_load(ZkRead* buf);
ZKC_API ZkFont* ZkFont_loadPath(ZkString path);
ZKC_API ZkFont* ZkFont_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkFont_del(ZkFont* slf);

ZKC_API ZkString ZkFont_getName(ZkFont const* slf);
ZKC_API uint32_t ZkFont_getHeight(ZkFont const* slf);
ZKC_API ZkSize ZkFont_getGlyphCount(ZkFont const* slf);
ZKC_API ZkFontGlyph ZkFont_getGlyph(ZkFont const* slf, ZkSize i);
ZKC_API void ZkFont_enumerateGlyphs(ZkFont const* slf, ZkFontGlyphEnumerator cb, void* ctx);
