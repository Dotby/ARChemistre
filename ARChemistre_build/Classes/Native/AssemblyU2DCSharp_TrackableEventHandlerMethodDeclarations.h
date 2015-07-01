#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TrackableEventHandler
struct TrackableEventHandler_t124;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t121;
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void TrackableEventHandler::.ctor()
extern "C" void TrackableEventHandler__ctor_m238 (TrackableEventHandler_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::Start()
extern "C" void TrackableEventHandler_Start_m239 (TrackableEventHandler_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::Update()
extern "C" void TrackableEventHandler_Update_m240 (TrackableEventHandler_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void TrackableEventHandler_OnTrackableStateChanged_m241 (TrackableEventHandler_t124 * __this, int32_t ___previousStatus, int32_t ___newStatus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackingFound()
extern "C" void TrackableEventHandler_OnTrackingFound_m242 (TrackableEventHandler_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackingLost()
extern "C" void TrackableEventHandler_OnTrackingLost_m243 (TrackableEventHandler_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::PauseOtherVideos(VideoPlaybackBehaviour)
extern "C" void TrackableEventHandler_PauseOtherVideos_m244 (TrackableEventHandler_t124 * __this, VideoPlaybackBehaviour_t121 * ___currentVideo, MethodInfo* method) IL2CPP_METHOD_ATTR;
