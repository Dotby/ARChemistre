#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CylinderTargetImpl
struct CylinderTargetImpl_t657;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t628;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.CylinderTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void CylinderTargetImpl__ctor_m3178 (CylinderTargetImpl_t657 * __this, String_t* ___name, int32_t ___id, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CylinderTargetImpl_SetSize_m3179 (CylinderTargetImpl_t657 * __this, Vector3_t30  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetSideLength()
extern "C" float CylinderTargetImpl_GetSideLength_m3180 (CylinderTargetImpl_t657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetTopDiameter()
extern "C" float CylinderTargetImpl_GetTopDiameter_m3181 (CylinderTargetImpl_t657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetBottomDiameter()
extern "C" float CylinderTargetImpl_GetBottomDiameter_m3182 (CylinderTargetImpl_t657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetSideLength(System.Single)
extern "C" bool CylinderTargetImpl_SetSideLength_m3183 (CylinderTargetImpl_t657 * __this, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetTopDiameter_m3184 (CylinderTargetImpl_t657 * __this, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetBottomDiameter_m3185 (CylinderTargetImpl_t657 * __this, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::ScaleCylinder(System.Single)
extern "C" void CylinderTargetImpl_ScaleCylinder_m3186 (CylinderTargetImpl_t657 * __this, float ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
