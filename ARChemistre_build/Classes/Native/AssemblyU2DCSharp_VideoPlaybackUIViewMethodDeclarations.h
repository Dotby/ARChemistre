#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VideoPlaybackUIView
struct VideoPlaybackUIView_t128;
// System.Action
struct Action_t14;
// Vuforia.CameraDevice/FocusMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"

// System.Void VideoPlaybackUIView::.ctor()
extern "C" void VideoPlaybackUIView__ctor_m285 (VideoPlaybackUIView_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::add_TappedToClose(System.Action)
extern "C" void VideoPlaybackUIView_add_TappedToClose_m286 (VideoPlaybackUIView_t128 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::remove_TappedToClose(System.Action)
extern "C" void VideoPlaybackUIView_remove_TappedToClose_m287 (VideoPlaybackUIView_t128 * __this, Action_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/FocusMode VideoPlaybackUIView::get_FocusMode()
extern "C" int32_t VideoPlaybackUIView_get_FocusMode_m288 (VideoPlaybackUIView_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::set_FocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" void VideoPlaybackUIView_set_FocusMode_m289 (VideoPlaybackUIView_t128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::LoadView()
extern "C" void VideoPlaybackUIView_LoadView_m290 (VideoPlaybackUIView_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::UnLoadView()
extern "C" void VideoPlaybackUIView_UnLoadView_m291 (VideoPlaybackUIView_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::UpdateUI(System.Boolean)
extern "C" void VideoPlaybackUIView_UpdateUI_m292 (VideoPlaybackUIView_t128 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::OnTappedToClose()
extern "C" void VideoPlaybackUIView_OnTappedToClose_m293 (VideoPlaybackUIView_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
