#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t121;
// VideoPlayerHelper
struct VideoPlayerHelper_t130;
// UnityEngine.Texture
struct Texture_t33;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// VideoPlayerHelper/MediaState
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState.h"
// VideoPlayerHelper/MediaType
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType.h"

// System.Void VideoPlaybackBehaviour::.ctor()
extern "C" void VideoPlaybackBehaviour__ctor_m300 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper VideoPlaybackBehaviour::get_VideoPlayer()
extern "C" VideoPlayerHelper_t130 * VideoPlaybackBehaviour_get_VideoPlayer_m301 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlaybackBehaviour::get_CurrentState()
extern "C" int32_t VideoPlaybackBehaviour_get_CurrentState_m302 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaType VideoPlaybackBehaviour::get_MediaType()
extern "C" int32_t VideoPlaybackBehaviour_get_MediaType_m303 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::set_MediaType(VideoPlayerHelper/MediaType)
extern "C" void VideoPlaybackBehaviour_set_MediaType_m304 (VideoPlaybackBehaviour_t121 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture VideoPlaybackBehaviour::get_KeyframeTexture()
extern "C" Texture_t33 * VideoPlaybackBehaviour_get_KeyframeTexture_m305 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::set_KeyframeTexture(UnityEngine.Texture)
extern "C" void VideoPlaybackBehaviour_set_KeyframeTexture_m306 (VideoPlaybackBehaviour_t121 * __this, Texture_t33 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackBehaviour::get_AutoPlay()
extern "C" bool VideoPlaybackBehaviour_get_AutoPlay_m307 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::Start()
extern "C" void VideoPlaybackBehaviour_Start_m308 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnRenderObject()
extern "C" void VideoPlaybackBehaviour_OnRenderObject_m309 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnApplicationPause(System.Boolean)
extern "C" void VideoPlaybackBehaviour_OnApplicationPause_m310 (VideoPlaybackBehaviour_t121 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnDestroy()
extern "C" void VideoPlaybackBehaviour_OnDestroy_m311 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::ShowBusyIcon()
extern "C" void VideoPlaybackBehaviour_ShowBusyIcon_m312 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::InitVideoTexture()
extern "C" void VideoPlaybackBehaviour_InitVideoTexture_m313 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::HandleStateChange(VideoPlayerHelper/MediaState)
extern "C" void VideoPlaybackBehaviour_HandleStateChange_m314 (VideoPlaybackBehaviour_t121 * __this, int32_t ___newState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoPlaybackBehaviour::ResetToPortraitSmoothly()
extern "C" Object_t * VideoPlaybackBehaviour_ResetToPortraitSmoothly_m315 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::ScaleIcon()
extern "C" void VideoPlaybackBehaviour_ScaleIcon_m316 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::CheckIconPlaneVisibility()
extern "C" void VideoPlaybackBehaviour_CheckIconPlaneVisibility_m317 (VideoPlaybackBehaviour_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
