// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Vector.h"

#ifdef __cplusplus
	#include <glm/mat4x4.hpp>

extern "C" {
#endif

typedef struct ZkInternal_Mat4x4 {
#ifdef __cplusplus
	inline ZkInternal_Mat4x4() = default;

	inline ZkInternal_Mat4x4(glm::mat4 const& v) {
		columns[0] = v[0];
		columns[1] = v[1];
		columns[2] = v[2];
		columns[3] = v[3];
	}
#endif

	ZkVec4f columns[4];
} ZkMat4x4;

typedef struct ZkInternal_Mat3x3 {
#ifdef __cplusplus
	inline ZkInternal_Mat3x3() = default;

	inline ZkInternal_Mat3x3(glm::mat3 const& v) {
		columns[0] = v[0];
		columns[1] = v[1];
		columns[2] = v[2];
	}
#endif

	ZkVec3f columns[3];
} ZkMat3x3;

#ifdef __cplusplus
}
#endif
