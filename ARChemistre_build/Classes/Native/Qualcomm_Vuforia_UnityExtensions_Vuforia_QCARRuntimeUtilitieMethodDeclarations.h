#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRuntimeUtilities
struct QCARRuntimeUtilities_t159;
// System.String
struct String_t;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
// Vuforia.OrientedBoundingBox
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"

// System.String Vuforia.QCARRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C" String_t* QCARRuntimeUtilities_StripFileNameFromPath_m4496 (Object_t * __this /* static, unused */, String_t* ___fullPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.QCARRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C" String_t* QCARRuntimeUtilities_StripExtensionFromPath_m4497 (Object_t * __this /* static, unused */, String_t* ___fullPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.QCARRuntimeUtilities::get_ScreenOrientation()
extern "C" int32_t QCARRuntimeUtilities_get_ScreenOrientation_m4498 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::get_IsLandscapeOrientation()
extern "C" bool QCARRuntimeUtilities_get_IsLandscapeOrientation_m4499 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::get_IsPortraitOrientation()
extern "C" bool QCARRuntimeUtilities_get_IsPortraitOrientation_m4500 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::ForceDisableTrackables()
extern "C" void QCARRuntimeUtilities_ForceDisableTrackables_m4501 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::IsPlayMode()
extern "C" bool QCARRuntimeUtilities_IsPlayMode_m507 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::IsQCAREnabled()
extern "C" bool QCARRuntimeUtilities_IsQCAREnabled_m592 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/Vec2I Vuforia.QCARRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Vec2I_t689  QCARRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m4502 (Object_t * __this /* static, unused */, Vector2_t20  ___screenSpaceCoordinate, Rect_t32  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t620  ___videoModeData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.QCARRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Vector2_t20  QCARRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m4503 (Object_t * __this /* static, unused */, Vector2_t20  ___cameraFrameCoordinate, Rect_t32  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t620  ___videoModeData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.QCARRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" OrientedBoundingBox_t650  QCARRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m4504 (Object_t * __this /* static, unused */, OrientedBoundingBox_t650  ___cameraFrameObb, Rect_t32  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t620  ___videoModeData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" void QCARRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m4505 (Object_t * __this /* static, unused */, Rect_t32  ___screenSpaceRect, bool ___isMirrored, Vector2_t20 * ___topLeft, Vector2_t20 * ___bottomRight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.QCARRuntimeUtilities::CalculateRectFromLandscapeLeftCorners(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" Rect_t32  QCARRuntimeUtilities_CalculateRectFromLandscapeLeftCorners_m4506 (Object_t * __this /* static, unused */, Vector2_t20  ___topLeft, Vector2_t20  ___bottomRight, bool ___isMirrored, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::DisableSleepMode()
extern "C" void QCARRuntimeUtilities_DisableSleepMode_m4507 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::ResetSleepMode()
extern "C" void QCARRuntimeUtilities_ResetSleepMode_m4508 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C" void QCARRuntimeUtilities_PrepareCoordinateConversion_m4509 (Object_t * __this /* static, unused */, bool ___isTextureMirrored, float* ___prefixX, float* ___prefixY, float* ___inversionMultiplierX, float* ___inversionMultiplierY, bool* ___isPortrait, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::.ctor()
extern "C" void QCARRuntimeUtilities__ctor_m4510 (QCARRuntimeUtilities_t159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::.cctor()
extern "C" void QCARRuntimeUtilities__cctor_m4511 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
