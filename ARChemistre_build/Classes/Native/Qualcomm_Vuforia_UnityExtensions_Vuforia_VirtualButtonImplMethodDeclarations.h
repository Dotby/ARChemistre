#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.VirtualButtonImpl
struct VirtualButtonImpl_t802;
// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t632;
// Vuforia.DataSet
struct DataSet_t628;
// Vuforia.RectangleData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"
// Vuforia.VirtualButton/Sensitivity
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"

// System.String Vuforia.VirtualButtonImpl::get_Name()
extern "C" String_t* VirtualButtonImpl_get_Name_m4395 (VirtualButtonImpl_t802 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VirtualButtonImpl::get_ID()
extern "C" int32_t VirtualButtonImpl_get_ID_m4396 (VirtualButtonImpl_t802 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::get_Enabled()
extern "C" bool VirtualButtonImpl_get_Enabled_m4397 (VirtualButtonImpl_t802 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData Vuforia.VirtualButtonImpl::get_Area()
extern "C" RectangleData_t648  VirtualButtonImpl_get_Area_m4398 (VirtualButtonImpl_t802 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonImpl::.ctor(System.String,System.Int32,Vuforia.RectangleData,Vuforia.ImageTarget,Vuforia.DataSet)
extern "C" void VirtualButtonImpl__ctor_m4399 (VirtualButtonImpl_t802 * __this, String_t* ___name, int32_t ___id, RectangleData_t648  ___area, Object_t * ___imageTarget, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetArea(Vuforia.RectangleData)
extern "C" bool VirtualButtonImpl_SetArea_m4400 (VirtualButtonImpl_t802 * __this, RectangleData_t648  ___area, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetSensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonImpl_SetSensitivity_m4401 (VirtualButtonImpl_t802 * __this, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetEnabled(System.Boolean)
extern "C" bool VirtualButtonImpl_SetEnabled_m4402 (VirtualButtonImpl_t802 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
