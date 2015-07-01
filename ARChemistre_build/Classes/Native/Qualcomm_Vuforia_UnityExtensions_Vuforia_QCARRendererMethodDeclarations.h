#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRenderer
struct QCARRenderer_t720;
// Vuforia.QCARRendererImpl
struct QCARRendererImpl_t721;
// UnityEngine.Texture2D
struct Texture2D_t51;
// Vuforia.QCARRenderer/VideoBGCfgData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB_0.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"

// Vuforia.QCARRenderer Vuforia.QCARRenderer::get_Instance()
extern "C" QCARRenderer_t720 * QCARRenderer_get_Instance_m3358 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRendererImpl Vuforia.QCARRenderer::get_InternalInstance()
extern "C" QCARRendererImpl_t721 * QCARRenderer_get_InternalInstance_m3359 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.QCARRenderer::get_VideoBackgroundTexture()
// Vuforia.QCARRenderer/VideoBGCfgData Vuforia.QCARRenderer::GetVideoBackgroundConfig()
// System.Void Vuforia.QCARRenderer::ClearVideoBackgroundConfig()
// System.Void Vuforia.QCARRenderer::SetVideoBackgroundConfig(Vuforia.QCARRenderer/VideoBGCfgData)
// System.Boolean Vuforia.QCARRenderer::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
// System.Boolean Vuforia.QCARRenderer::IsVideoBackgroundInfoAvailable()
// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.QCARRenderer::GetVideoTextureInfo()
// System.Void Vuforia.QCARRenderer::Pause(System.Boolean)
// System.Void Vuforia.QCARRenderer::.ctor()
extern "C" void QCARRenderer__ctor_m3360 (QCARRenderer_t720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRenderer::.cctor()
extern "C" void QCARRenderer__cctor_m3361 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
