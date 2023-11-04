// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"

#include <stdio.h>

#ifdef __cplusplus
#include <zenkit/Stream.hh>
using ZkRead = zenkit::Read;
#else
typedef struct ZkInternal_Read ZkRead;
#endif

typedef enum {
	ZK_BEG = 0x00,
	CZK_UR = 0x01,
	ZK_END = 0x02,
} ZkWhence;

typedef struct {
	ZkSize (*read)(void* ctx, void* buf, ZkSize len);
	ZkSize (*seek)(void* ctx, ZkOffset off, ZkWhence whence);
	ZkSize (*tell)(void const* ctx);
	ZkBool (*eof)(void const* ctx);
	void (*del)(void const* ctx);
} ZkReadExt;

CZK_API ZkRead* ZkRead_newFile(FILE* stream);
CZK_API ZkRead* ZkRead_newMem(ZkByte const* bytes, ZkSize length);
CZK_API ZkRead* ZkRead_newPath(ZkString path);
CZK_API ZkRead* ZkRead_newExt(ZkReadExt ext, void* ctx);
CZK_API void ZkRead_del(ZkRead* slf);
