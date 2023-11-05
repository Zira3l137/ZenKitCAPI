// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include <stddef.h>

#ifdef __cplusplus
	#define CZK_EXT extern "C"
#else
	#define CZK_EXT
#endif

#if defined(_WIN32) || defined(__CYGWIN__)
	#ifdef _CZK_DYN
		#ifdef __GNUC__
			#define CZK_API CZK_EXT __attribute__((dllexport))
		#else
			#define CZK_API CZK_EXT __declspec(dllexport)
		#endif
	#else
		#ifdef __GNUC__
			#define CZK_API CZK_EXT __attribute__((dllimport))
		#else
			#define CZK_API CZK_EXT __declspec(dllimport)
		#endif
	#endif
	#define CZK_INT
#else
	#define CZK_API CZK_EXT __attribute__((visibility("default")))
	#define CZK_INT CZK_EXT __attribute__((visibility("hidden")))
#endif

#ifdef __cplusplus
	#include <zenkit/Logger.hh>

	#define CZK_WRAP_NEW(x) new (decltype(x))(std::move(x))
	#define CZK_LOG_ERROR(...) zenkit::Logger::log(zenkit::LogLevel::ERROR, "<Native>", __VA_ARGS__)
	#define CZK_LOG_WARN(...) zenkit::Logger::log(zenkit::LogLevel::WARNING, "<Native>", __VA_ARGS__)
	#define CZK_LOG_WARN_NULL(fn) zenkit::Logger::log(zenkit::LogLevel::WARNING, "<Native>", fn "() received NULL argument")
#endif

typedef unsigned char ZkByte;
typedef unsigned long ZkSize;
typedef signed long ZkOffset;
typedef unsigned int ZkBool;
typedef char const* ZkString;
