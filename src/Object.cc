// Copyright © 2024. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Object.h"

ZkObject* ZkObject_takeRef(ZkObject* slf) {
	if (slf == nullptr || *slf == nullptr) return nullptr;
	return new ZkObject(*slf, slf->get());
}
