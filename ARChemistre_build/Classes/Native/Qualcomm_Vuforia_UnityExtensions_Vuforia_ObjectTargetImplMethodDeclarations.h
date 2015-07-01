#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t627;
// Vuforia.DataSetImpl
struct DataSetImpl_t626;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t628;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void ObjectTargetImpl__ctor_m3044 (ObjectTargetImpl_t627 * __this, String_t* ___name, int32_t ___id, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C" Vector3_t30  ObjectTargetImpl_GetSize_m3045 (ObjectTargetImpl_t627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void ObjectTargetImpl_SetSize_m3046 (ObjectTargetImpl_t627 * __this, Vector3_t30  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C" bool ObjectTargetImpl_StartExtendedTracking_m3047 (ObjectTargetImpl_t627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C" bool ObjectTargetImpl_StopExtendedTracking_m3048 (ObjectTargetImpl_t627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C" DataSetImpl_t626 * ObjectTargetImpl_get_DataSet_m3049 (ObjectTargetImpl_t627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
