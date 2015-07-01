#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t674;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t628;
// Vuforia.VirtualButton
struct VirtualButton_t655;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t656;
// Vuforia.ImageTargetType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
// Vuforia.RectangleData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C" void ImageTargetImpl__ctor_m3262 (ImageTargetImpl_t674 * __this, String_t* ___name, int32_t ___id, int32_t ___imageTargetType, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C" int32_t ImageTargetImpl_get_ImageTargetType_m3263 (ImageTargetImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t655 * ImageTargetImpl_CreateVirtualButton_m3264 (ImageTargetImpl_t674 * __this, String_t* ___name, RectangleData_t648  ___area, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t655 * ImageTargetImpl_GetVirtualButtonByName_m3265 (ImageTargetImpl_t674 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* ImageTargetImpl_GetVirtualButtons_m3266 (ImageTargetImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_DestroyVirtualButton_m3267 (ImageTargetImpl_t674 * __this, VirtualButton_t655 * ___vb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t655 * ImageTargetImpl_CreateNewVirtualButtonInNative_m3268 (ImageTargetImpl_t674 * __this, String_t* ___name, RectangleData_t648  ___rectangleData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_UnregisterVirtualButtonInNative_m3269 (ImageTargetImpl_t674 * __this, VirtualButton_t655 * ___vb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C" void ImageTargetImpl_CreateVirtualButtonsFromNative_m3270 (ImageTargetImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
