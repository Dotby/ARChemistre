#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t137;
// UnityEngine.Collider
struct Collider_t12;
// UnityEngine.Rigidbody
struct Rigidbody_t134;
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t30  RaycastHit_get_point_m2354 (RaycastHit_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t30  RaycastHit_get_normal_m2355 (RaycastHit_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m2357 (RaycastHit_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t12 * RaycastHit_get_collider_m2356 (RaycastHit_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t134 * RaycastHit_get_rigidbody_m6496 (RaycastHit_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t6 * RaycastHit_get_transform_m386 (RaycastHit_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
