// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include <stdint.h>

#ifdef __cplusplus
	#include <glm/vec2.hpp>
	#include <glm/vec3.hpp>
	#include <glm/vec4.hpp>
	#include <glm/gtc/quaternion.hpp>
	#include <zenkit/Texture.hh>
#endif

typedef struct ZkInternal_Vec2 {
	float x, y;

#ifdef __cplusplus
	ZkInternal_Vec2() : x(0), y(0) {}
	ZkInternal_Vec2(glm::vec2 v) : x(v.x), y(v.y) {}

	operator glm::vec2() const {
		return {x, y};
	}
#endif
} ZkVec2f;

typedef struct ZkInternal_Vec3 {
	float x, y, z;

#ifdef __cplusplus
	ZkInternal_Vec3() : x(0), y(0), z(0) {}
	ZkInternal_Vec3(glm::vec3 v) : x(v.x), y(v.y), z(v.z) {}

	operator glm::vec3() const {
		return {x, y, z};
	}
#endif
} ZkVec3f;

typedef struct ZkInternal_Vec4 {
	float x, y, z, w;

#ifdef __cplusplus
	ZkInternal_Vec4() : x(0), y(0), z(0), w(0) {}
	ZkInternal_Vec4(glm::vec4 v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	operator glm::vec4() const {
		return {x, y, z, w};
	}
#endif
} ZkVec4f;

typedef struct ZkInternal_Quat {
	float x, y, z, w;

#ifdef __cplusplus
	ZkInternal_Quat() : x(0), y(0), z(0), w(0) {}
	ZkInternal_Quat(glm::quat v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	operator glm::quat() const {
		return {w, x, y, z};
	}
#endif
} ZkQuat;

typedef struct ZkInternal_Color {
	uint8_t r, g, b, a;

#ifdef __cplusplus
	ZkInternal_Color() : r(0), g(0), b(0), a(255) {}
	ZkInternal_Color(glm::u8vec4 v) : r(v.r), g(v.g), b(v.b), a(v.a) {}
	ZkInternal_Color(zenkit::ColorARGB v) : r(v.r), g(v.g), b(v.b), a(v.a) {}

	operator glm::u8vec4() const {
		return {r, g, b, a};
	}
#endif
} ZkColor;

typedef ZkBool (*ZkVec2fEnumerator)(void* ctx, ZkVec2f v);
typedef ZkBool (*ZkVec3fEnumerator)(void* ctx, ZkVec3f v);
typedef ZkBool (*ZkVec4fEnumerator)(void* ctx, ZkVec4f v);
typedef ZkBool (*ZkQuatEnumerator)(void* ctx, ZkQuat v);
typedef ZkBool (*ZkColorEnumerator)(void* ctx, ZkColor v);
