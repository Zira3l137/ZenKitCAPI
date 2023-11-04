// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once

#ifdef __cplusplus
	#include <glm/vec2.hpp>
	#include <glm/vec3.hpp>
	#include <glm/vec4.hpp>
	#include <glm/ext/quaternion_float.hpp>

extern "C" {
#endif

typedef struct ZkInternal_Vec2f {
#ifdef __cplusplus
	inline ZkInternal_Vec2f() = default;
	inline ZkInternal_Vec2f(glm::vec2 const& v) : x(v.x), y(v.y) {}
	inline ZkInternal_Vec2f(float x, float y) : x(x), y(y) {}
#endif

	float x, y;
} ZkVec2f;

typedef struct ZkInternal_Vec3f {
#ifdef __cplusplus
	inline ZkInternal_Vec3f() = default;
	inline ZkInternal_Vec3f(glm::vec3 const& v) : x(v.x), y(v.y), z(v.z) {}
	inline ZkInternal_Vec3f(float x, float y, float z) : x(x), y(y), z(z) {}
#endif

	float x, y, z;
} ZkVec3f;

typedef struct ZkInternal_Vec4f {
#ifdef __cplusplus
	inline ZkInternal_Vec4f() = default;
	inline ZkInternal_Vec4f(glm::vec4 const& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}
	inline ZkInternal_Vec4f(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
#endif

	float x, y, z, w;
} ZkVec4f;

typedef struct ZkInternal_Quat {
#ifdef __cplusplus
	inline ZkInternal_Quat(glm::quat const& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}
	inline ZkInternal_Quat(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
#endif

	float x, y, z, w;
} ZkQuat;

#ifdef __cplusplus
}
#endif
