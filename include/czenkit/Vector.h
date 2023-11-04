// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once

#ifdef __cplusplus
	#include <glm/vec2.hpp>
	#include <glm/vec3.hpp>
	#include <glm/vec4.hpp>
#endif

typedef struct ZkInternal_Vec2f {
#ifdef __cplusplus
	explicit inline ZkInternal_Vec2f(glm::vec2 const& v) : x(v.x), y(v.y) {}
#endif

	float x, y;
} ZkVec2f;

typedef struct ZkInternal_Vec3f {
#ifdef __cplusplus
	explicit inline ZkInternal_Vec3f(glm::vec3 const& v) : x(v.x), y(v.y), z(v.z) {}
#endif

	float x, y, z;
} ZkVec3f;

typedef struct ZkInternal_Vec4f {
#ifdef __cplusplus
	explicit inline ZkInternal_Vec4f(glm::vec4 const& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}
#endif

	float x, y, z, w;
} ZkVec4f;
