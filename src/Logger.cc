// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Logger.h"

#include <zenkit/Logger.hh>

#include <cstdarg>

void ZkLogger_set(ZkLogLevel lvl, ZkLogger logger, void* ctx) {
	zenkit::Logger::set(static_cast<zenkit::LogLevel>(lvl),
	                    [logger, ctx](zenkit::LogLevel level, char const* name, char const* message) {
		                    logger(ctx, static_cast<ZkLogLevel>(level), name, message);
	                    });
}

void ZkLogger_setDefault(ZkLogLevel lvl) {
	zenkit::Logger::set_default(static_cast<zenkit::LogLevel>(lvl));
}

void ZkLogger_log(ZkLogLevel lvl, ZkString name, ZkString fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	zenkit::Logger::logv(static_cast<zenkit::LogLevel>(lvl), name, fmt, ap);
	va_end(ap);
}
