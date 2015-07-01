#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SmartTerrainTrackerAbstractBehaviour
struct SmartTerrainTrackerAbstractBehaviour_t102;
// System.Action
struct Action_t14;

// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::Awake()
extern "C" void SmartTerrainTrackerAbstractBehaviour_Awake_m3110 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnEnable()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnEnable_m3111 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnDisable()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnDisable_m3112 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnDestroy()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnDestroy_m3113 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::RegisterTrackerStartedCallback(System.Action)
extern "C" void SmartTerrainTrackerAbstractBehaviour_RegisterTrackerStartedCallback_m3114 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, Action_t14 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::UnregisterTrackerStartedCallback(System.Action)
extern "C" void SmartTerrainTrackerAbstractBehaviour_UnregisterTrackerStartedCallback_m3115 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, Action_t14 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::StartSmartTerrainTracker()
extern "C" void SmartTerrainTrackerAbstractBehaviour_StartSmartTerrainTracker_m3116 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::StopSmartTerrainTracker()
extern "C" void SmartTerrainTrackerAbstractBehaviour_StopSmartTerrainTracker_m3117 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::InitSmartTerrainTracker()
extern "C" void SmartTerrainTrackerAbstractBehaviour_InitSmartTerrainTracker_m3118 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnQCARInitialized()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnQCARInitialized_m3119 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnQCARStarted()
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnQCARStarted_m3120 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::OnPause(System.Boolean)
extern "C" void SmartTerrainTrackerAbstractBehaviour_OnPause_m3121 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.SetAutomaticStart(System.Boolean)
extern "C" void SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_SetAutomaticStart_m897 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, bool ___autoStart, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.get_AutomaticStart()
extern "C" bool SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_get_AutomaticStart_m898 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.SetSmartTerrainScaleToMM(System.Single)
extern "C" void SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_SetSmartTerrainScaleToMM_m899 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, float ___scaleToMM, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SmartTerrainTrackerAbstractBehaviour::Vuforia.IEditorSmartTerrainTrackerBehaviour.get_ScaleToMM()
extern "C" float SmartTerrainTrackerAbstractBehaviour_Vuforia_IEditorSmartTerrainTrackerBehaviour_get_ScaleToMM_m900 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerAbstractBehaviour::.ctor()
extern "C" void SmartTerrainTrackerAbstractBehaviour__ctor_m608 (SmartTerrainTrackerAbstractBehaviour_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
