#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.OrientedBoundingBox
struct OrientedBoundingBox_t650;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Vuforia.OrientedBoundingBox::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" void OrientedBoundingBox__ctor_m3141 (OrientedBoundingBox_t650 * __this, Vector2_t20  ___center, Vector2_t20  ___halfExtents, float ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_Center()
extern "C" Vector2_t20  OrientedBoundingBox_get_Center_m3142 (OrientedBoundingBox_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_Center(UnityEngine.Vector2)
extern "C" void OrientedBoundingBox_set_Center_m3143 (OrientedBoundingBox_t650 * __this, Vector2_t20  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_HalfExtents()
extern "C" Vector2_t20  OrientedBoundingBox_get_HalfExtents_m3144 (OrientedBoundingBox_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_HalfExtents(UnityEngine.Vector2)
extern "C" void OrientedBoundingBox_set_HalfExtents_m3145 (OrientedBoundingBox_t650 * __this, Vector2_t20  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.OrientedBoundingBox::get_Rotation()
extern "C" float OrientedBoundingBox_get_Rotation_m3146 (OrientedBoundingBox_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_Rotation(System.Single)
extern "C" void OrientedBoundingBox_set_Rotation_m3147 (OrientedBoundingBox_t650 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
