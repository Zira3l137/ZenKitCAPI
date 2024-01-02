// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include <stddef.h>

#ifdef __EMSCRIPTEN__
	#include <emscripten/emscripten.h>
	#define _ZK_PRELUDE EMSCRIPTEN_KEEPALIVE
#else
	#define _ZK_PRELUDE
#endif

#ifdef __cplusplus
	#define ZKC_EXT extern "C" _ZK_PRELUDE
#else
	#define ZKC_EXT
#endif

#if defined(_WIN32) || defined(__CYGWIN__)
	#ifdef _ZKC_DYN
		#ifdef __GNUC__
			#define ZKC_API ZKC_EXT __attribute__((dllexport))
		#else
			#define ZKC_API ZKC_EXT __declspec(dllexport)
		#endif
	#else
		#ifdef __GNUC__
			#define ZKC_API ZKC_EXT __attribute__((dllimport))
		#else
			#define ZKC_API ZKC_EXT __declspec(dllimport)
		#endif
	#endif
	#define ZKC_INT
#else
	#define ZKC_API ZKC_EXT __attribute__((visibility("default")))
	#define ZKC_INT ZKC_EXT __attribute__((visibility("hidden")))
#endif

#ifdef __cplusplus
	#include <zenkit/Logger.hh>

	#define ZKC_WRAP_NEW(x) new (decltype(x))(std::move(x))
	#define ZKC_LOG_TRACE(...) zenkit::Logger::log(zenkit::LogLevel::TRACE, "<Native>", __VA_ARGS__)
	#define ZKC_LOG_ERROR(...) zenkit::Logger::log(zenkit::LogLevel::ERROR, "<Native>", __VA_ARGS__)
	#define ZKC_LOG_WARN(...) zenkit::Logger::log(zenkit::LogLevel::WARNING, "<Native>", __VA_ARGS__)
	#define ZKC_LOG_WARN_NULL(fn)                                                                                      \
		zenkit::Logger::log(zenkit::LogLevel::WARNING, "<Native>", fn "() received NULL argument")
#endif

typedef unsigned char ZkByte;
typedef unsigned long ZkSize;
typedef signed long ZkOffset;
typedef unsigned int ZkBool;
typedef char const* ZkString;

typedef ZkBool (*ZkStringEnumerator)(void* ctx, ZkString str);

typedef enum {
	ZkGameVersion_GOTHIC1 = 0,
	ZkGameVersion_GOTHIC2 = 1,
} ZkGameVersion;
