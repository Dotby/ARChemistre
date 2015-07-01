#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t654;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t655;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t656;
// Vuforia.ImageTargetType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Vuforia.RectangleData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl__ctor_m3168 (CloudRecoImageTargetImpl_t654 * __this, String_t* ___name, int32_t ___id, Vector3_t30  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C" int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m3169 (CloudRecoImageTargetImpl_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C" Vector3_t30  CloudRecoImageTargetImpl_GetSize_m3170 (CloudRecoImageTargetImpl_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl_SetSize_m3171 (CloudRecoImageTargetImpl_t654 * __this, Vector3_t30  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t655 * CloudRecoImageTargetImpl_CreateVirtualButton_m3172 (CloudRecoImageTargetImpl_t654 * __this, String_t* ___name, RectangleData_t648  ___area, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t655 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m3173 (CloudRecoImageTargetImpl_t654 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* CloudRecoImageTargetImpl_GetVirtualButtons_m3174 (CloudRecoImageTargetImpl_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool CloudRecoImageTargetImpl_DestroyVirtualButton_m3175 (CloudRecoImageTargetImpl_t654 * __this, VirtualButton_t655 * ___vb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StartExtendedTracking_m3176 (CloudRecoImageTargetImpl_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StopExtendedTracking_m3177 (CloudRecoImageTargetImpl_t654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
