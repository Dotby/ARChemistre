#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WireframeTrackableEventHandler
struct WireframeTrackableEventHandler_t119;
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.WireframeTrackableEventHandler::.ctor()
extern "C" void WireframeTrackableEventHandler__ctor_m216 (WireframeTrackableEventHandler_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::Start()
extern "C" void WireframeTrackableEventHandler_Start_m217 (WireframeTrackableEventHandler_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void WireframeTrackableEventHandler_OnTrackableStateChanged_m218 (WireframeTrackableEventHandler_t119 * __this, int32_t ___previousStatus, int32_t ___newStatus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern "C" void WireframeTrackableEventHandler_OnTrackingFound_m219 (WireframeTrackableEventHandler_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern "C" void WireframeTrackableEventHandler_OnTrackingLost_m220 (WireframeTrackableEventHandler_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
