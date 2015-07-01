#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t743;
// UnityEngine.Texture
struct Texture_t33;
// System.String
struct String_t;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"

// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m3431 (WebCamTexAdaptorImpl_t743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C" bool WebCamTexAdaptorImpl_get_IsPlaying_m3432 (WebCamTexAdaptorImpl_t743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C" Texture_t33 * WebCamTexAdaptorImpl_get_Texture_m3433 (WebCamTexAdaptorImpl_t743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.QCARRenderer/Vec2I)
extern "C" void WebCamTexAdaptorImpl__ctor_m3434 (WebCamTexAdaptorImpl_t743 * __this, String_t* ___deviceName, int32_t ___requestedFPS, Vec2I_t689  ___requestedTextureSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C" void WebCamTexAdaptorImpl_Play_m3435 (WebCamTexAdaptorImpl_t743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C" void WebCamTexAdaptorImpl_Stop_m3436 (WebCamTexAdaptorImpl_t743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
