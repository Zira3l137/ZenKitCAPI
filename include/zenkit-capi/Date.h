// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include <stdint.h>

#ifdef __cplusplus
	#include <zenkit/Date.hh>

using ZkDate = zenkit::Date;
#else
typedef struct {
	uint32_t year;
	uint16_t month;
	uint16_t day;
	uint16_t hour;
	uint16_t minute;
	uint16_t second;
} ZkDate;
#endif
