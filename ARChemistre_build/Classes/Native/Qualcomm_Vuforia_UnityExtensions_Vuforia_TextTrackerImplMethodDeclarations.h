#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t739;
// Vuforia.WordList
struct WordList_t737;
// Vuforia.TextTrackerImpl/UpDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_UpD.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.RectangleIntData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleIntData.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C" WordList_t737 * TextTrackerImpl_get_WordList_m3421 (TextTrackerImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C" bool TextTrackerImpl_Start_m3422 (TextTrackerImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C" void TextTrackerImpl_Stop_m3423 (TextTrackerImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool TextTrackerImpl_SetRegionOfInterest_m3424 (TextTrackerImpl_t739 * __this, Rect_t32  ___detectionRegion, Rect_t32  ___trackingRegion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C" bool TextTrackerImpl_GetRegionOfInterest_m3425 (TextTrackerImpl_t739 * __this, Rect_t32 * ___detectionRegion, Rect_t32 * ___trackingRegion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Rect_t32  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m3426 (TextTrackerImpl_t739 * __this, RectangleIntData_t649  ___camSpaceRectData, Rect_t32  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t620  ___videoModeData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C" int32_t TextTrackerImpl_get_CurrentUpDirection_m3427 (TextTrackerImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C" void TextTrackerImpl__ctor_m3428 (TextTrackerImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
