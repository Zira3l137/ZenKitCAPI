// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"

typedef enum {
	ZK_ERROR = 0,
	ZK_WARNING = 1,
	ZK_INFO = 2,
	ZK_DEBUG = 3,
	ZK_TRACE = 4,
} ZkLogLevel;

typedef void (*ZkLogger)(void*, ZkLogLevel, ZkString, ZkString);

CZK_API void ZkLogger_set(ZkLogLevel lvl, ZkLogger logger, void* ctx);
CZK_API void ZkLogger_setDefault(ZkLogLevel lvl);
CZK_API void ZkLogger_log(ZkLogLevel lvl, ZkString name, ZkString fmt, ...);
