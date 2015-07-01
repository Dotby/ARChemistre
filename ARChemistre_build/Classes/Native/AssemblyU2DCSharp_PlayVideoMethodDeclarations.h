#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayVideo
struct PlayVideo_t123;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t121;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PlayVideo::.ctor()
extern "C" void PlayVideo__ctor_m228 (PlayVideo_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::Start()
extern "C" void PlayVideo_Start_m229 (PlayVideo_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::OnApplicationPause(System.Boolean)
extern "C" void PlayVideo_OnApplicationPause_m230 (PlayVideo_t123 * __this, bool ___tf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::HandleDoubleTap()
extern "C" void PlayVideo_HandleDoubleTap_m231 (PlayVideo_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::HandleSingleTap()
extern "C" void PlayVideo_HandleSingleTap_m232 (PlayVideo_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayVideo::PlayFullscreenVideoAtEndOfFrame(VideoPlaybackBehaviour)
extern "C" Object_t * PlayVideo_PlayFullscreenVideoAtEndOfFrame_m233 (Object_t * __this /* static, unused */, VideoPlaybackBehaviour_t121 * ___video, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::UpdateFlashSettingsInUIView()
extern "C" void PlayVideo_UpdateFlashSettingsInUIView_m234 (PlayVideo_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayVideo::IsFullScreenModeEnabled()
extern "C" bool PlayVideo_IsFullScreenModeEnabled_m235 (PlayVideo_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlaybackBehaviour PlayVideo::PickVideo(UnityEngine.Vector3)
extern "C" VideoPlaybackBehaviour_t121 * PlayVideo_PickVideo_m236 (PlayVideo_t123 * __this, Vector3_t30  ___screenPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::PauseOtherVideos(VideoPlaybackBehaviour)
extern "C" void PlayVideo_PauseOtherVideos_m237 (PlayVideo_t123 * __this, VideoPlaybackBehaviour_t121 * ___currentVideo, MethodInfo* method) IL2CPP_METHOD_ATTR;
