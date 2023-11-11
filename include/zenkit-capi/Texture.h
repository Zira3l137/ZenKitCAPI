// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Stream.h"
#include "Vector.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/Texture.hh>
using ZkTexture = zenkit::Texture;
#else
typedef struct ZkInternal_Texture ZkTexture;
#endif

typedef enum {
	ZkTextureFormat_B8G8R8A8 = 0x0,
	ZkTextureFormat_R8G8B8A8 = 0x1,
	ZkTextureFormat_A8B8G8R8 = 0x2,
	ZkTextureFormat_A8R8G8B8 = 0x3,
	ZkTextureFormat_B8G8R8 = 0x4,
	ZkTextureFormat_R8G8B8 = 0x5,
	ZkTextureFormat_A4R4G4B4 = 0x6,
	ZkTextureFormat_A1R5G5B5 = 0x7,
	ZkTextureFormat_R5G6B5 = 0x8,
	ZkTextureFormat_P8 = 0x9,
	ZkTextureFormat_DXT1 = 0xA,
	ZkTextureFormat_DXT2 = 0xB,
	ZkTextureFormat_DXT3 = 0xC,
	ZkTextureFormat_DXT4 = 0xD,
	ZkTextureFormat_DXT5 = 0xE,
} ZkTextureFormat;

typedef ZkBool (*ZkTextureMipmapEnumerator)(void* ctx, ZkSize level, uint8_t const* data, ZkSize size);

ZKC_API ZkTexture* ZkTexture_load(ZkRead* buf);
ZKC_API ZkTexture* ZkTexture_loadPath(ZkString path);
ZKC_API ZkTexture* ZkTexture_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkTexture_del(ZkTexture* slf);

ZKC_API ZkTextureFormat ZkTexture_getFormat(ZkTexture const* slf);
ZKC_API uint32_t ZkTexture_getWidth(ZkTexture const* slf);
ZKC_API uint32_t ZkTexture_getHeight(ZkTexture const* slf);
ZKC_API uint32_t ZkTexture_getWidthMipmap(ZkTexture const* slf, ZkSize level);
ZKC_API uint32_t ZkTexture_getHeightMipmap(ZkTexture const* slf, ZkSize level);
ZKC_API uint32_t ZkTexture_getWidthRef(ZkTexture const* slf);
ZKC_API uint32_t ZkTexture_getHeightRef(ZkTexture const* slf);
ZKC_API uint32_t ZkTexture_getMipmapCount(ZkTexture const* slf);
ZKC_API uint32_t ZkTexture_getAverageColor(ZkTexture const* slf);
ZKC_API ZkColorArgb const* ZkTexture_getPalette(ZkTexture const* slf, ZkSize* size);
ZKC_API uint8_t const* ZkTexture_getMipmapRaw(ZkTexture const* slf, ZkSize level, ZkSize* size);
ZKC_API ZkSize ZkTexture_getMipmapRgba(ZkTexture const* slf, ZkSize level, uint8_t* buf, ZkSize size);

ZKC_API void ZkTexture_enumerateRawMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx);
ZKC_API void ZkTexture_enumerateRgbaMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx);
