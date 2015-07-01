#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WebCamImpl
struct WebCamImpl_t664;
// UnityEngine.Camera[]
struct CameraU5BU5D_t182;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t670;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamImpl_get_DidUpdateThisFrame_m4403 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C" bool WebCamImpl_get_IsPlaying_m4404 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C" int32_t WebCamImpl_get_ActualWidth_m4405 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C" int32_t WebCamImpl_get_ActualHeight_m4406 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C" bool WebCamImpl_get_IsTextureSizeAvailable_m4407 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C" void WebCamImpl_set_IsTextureSizeAvailable_m4408 (WebCamImpl_t664 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C" bool WebCamImpl_get_FlipHorizontally_m4409 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C" Vec2I_t689  WebCamImpl_get_ResampledTextureSize_m4410 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C" void WebCamImpl_ComputeResampledTextureSize_m4411 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C" void WebCamImpl__ctor_m4412 (WebCamImpl_t664 * __this, CameraU5BU5D_t182* ___arCameras, int32_t ___renderTextureLayer, String_t* ___webcamDeviceName, bool ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C" void WebCamImpl_StartCamera_m4413 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C" void WebCamImpl_StopCamera_m4414 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C" void WebCamImpl_ResetPlaying_m4415 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C" Color32U5BU5D_t670* WebCamImpl_GetPixels32AndBufferFrame_m4416 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C" void WebCamImpl_RenderFrame_m4417 (WebCamImpl_t664 * __this, int32_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C" VideoModeData_t620  WebCamImpl_GetVideoMode_m4418 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t608  WebCamImpl_GetVideoTextureInfo_m4419 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C" bool WebCamImpl_IsRendererDirty_m4420 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C" void WebCamImpl_OnDestroy_m4421 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C" void WebCamImpl_Update_m4422 (WebCamImpl_t664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
