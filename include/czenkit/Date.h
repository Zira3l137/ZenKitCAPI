// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include <stdint.h>

#ifdef __cplusplus
	#include <zenkit/Date.hh>

extern "C" {
#endif

typedef struct ZkInternal_Date {

#ifdef __cplusplus
	inline ZkInternal_Date() : year(0), month(0), day(0), hour(0), minute(0), second(0) {}
	inline ZkInternal_Date(zenkit::Date const& v)
	    : year(v.year), month(v.month), day(v.day), hour(v.hour), minute(v.minute), second(v.second) {}
#endif

	uint32_t year;
	uint16_t month;
	uint16_t day;
	uint16_t hour;
	uint16_t minute;
	uint16_t second;
} ZkDate;

#ifdef __cplusplus
}
#endif
