#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VideoPlaybackUIEventHandler
struct VideoPlaybackUIEventHandler_t126;
// VideoPlaybackUIView
struct VideoPlaybackUIView_t128;
// System.Action
struct Action_t14;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t121;
// Vuforia.CameraDevice/CameraDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"

// System.Void VideoPlaybackUIEventHandler::.ctor()
extern "C" void VideoPlaybackUIEventHandler__ctor_m257 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::add_CloseView(System.Action)
extern "C" void VideoPlaybackUIEventHandler_add_CloseView_m258 (VideoPlaybackUIEventHandler_t126 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::remove_CloseView(System.Action)
extern "C" void VideoPlaybackUIEventHandler_remove_CloseView_m259 (VideoPlaybackUIEventHandler_t126 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::add_GoToAboutPage(System.Action)
extern "C" void VideoPlaybackUIEventHandler_add_GoToAboutPage_m260 (VideoPlaybackUIEventHandler_t126 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::remove_GoToAboutPage(System.Action)
extern "C" void VideoPlaybackUIEventHandler_remove_GoToAboutPage_m261 (VideoPlaybackUIEventHandler_t126 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlaybackUIView VideoPlaybackUIEventHandler::get_View()
extern "C" VideoPlaybackUIView_t128 * VideoPlaybackUIEventHandler_get_View_m262 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::get_ExtendedTrackingIsEnabled()
extern "C" bool VideoPlaybackUIEventHandler_get_ExtendedTrackingIsEnabled_m263 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::UpdateView(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_UpdateView_m264 (VideoPlaybackUIEventHandler_t126 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::Bind()
extern "C" void VideoPlaybackUIEventHandler_Bind_m265 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::UnBind()
extern "C" void VideoPlaybackUIEventHandler_UnBind_m266 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::TriggerAutoFocus()
extern "C" void VideoPlaybackUIEventHandler_TriggerAutoFocus_m267 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoPlaybackUIEventHandler::TriggerAutoFocusAndEnableContinuousFocusIfSet()
extern "C" Object_t * VideoPlaybackUIEventHandler_TriggerAutoFocusAndEnableContinuousFocusIfSet_m268 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnPause(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnPause_m269 (VideoPlaybackUIEventHandler_t126 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedOnAboutButton(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnTappedOnAboutButton_m270 (VideoPlaybackUIEventHandler_t126 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::EnableContinuousAutoFocus()
extern "C" void VideoPlaybackUIEventHandler_EnableContinuousAutoFocus_m271 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedToTurnOnTraking(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnTappedToTurnOnTraking_m272 (VideoPlaybackUIEventHandler_t126 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedToTurnOnFlash(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnTappedToTurnOnFlash_m273 (VideoPlaybackUIEventHandler_t126 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedOnFullscreenButton(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnTappedOnFullscreenButton_m274 (VideoPlaybackUIEventHandler_t126 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlaybackBehaviour VideoPlaybackUIEventHandler::PickVideo()
extern "C" VideoPlaybackBehaviour_t121 * VideoPlaybackUIEventHandler_PickVideo_m275 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedToTurnOnAutoFocus(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnTappedToTurnOnAutoFocus_m276 (VideoPlaybackUIEventHandler_t126 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedToTurnCameraFacing(System.Int32)
extern "C" void VideoPlaybackUIEventHandler_OnTappedToTurnCameraFacing_m277 (VideoPlaybackUIEventHandler_t126 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::stopRunningObjectTracker()
extern "C" bool VideoPlaybackUIEventHandler_stopRunningObjectTracker_m278 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::restartRunningObjectTracker()
extern "C" bool VideoPlaybackUIEventHandler_restartRunningObjectTracker_m279 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::ResetCameraFacingToBack()
extern "C" void VideoPlaybackUIEventHandler_ResetCameraFacingToBack_m280 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::ChangeCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" bool VideoPlaybackUIEventHandler_ChangeCameraDirection_m281 (VideoPlaybackUIEventHandler_t126 * __this, int32_t ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedToClose()
extern "C" void VideoPlaybackUIEventHandler_OnTappedToClose_m282 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedOnCloseButton()
extern "C" void VideoPlaybackUIEventHandler_OnTappedOnCloseButton_m283 (VideoPlaybackUIEventHandler_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::ExtendedTracking(System.Boolean)
extern "C" bool VideoPlaybackUIEventHandler_ExtendedTracking_m284 (VideoPlaybackUIEventHandler_t126 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
