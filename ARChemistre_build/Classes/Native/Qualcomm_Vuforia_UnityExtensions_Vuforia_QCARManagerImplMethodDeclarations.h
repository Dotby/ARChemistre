#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl
struct QCARManagerImpl_t716;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t218;
// UnityEngine.Transform
struct Transform_t6;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t717;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio_0.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// Vuforia.QCARManagerImpl/FrameState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Fra.h"

// System.Void Vuforia.QCARManagerImpl::set_WorldCenterMode(Vuforia.QCARAbstractBehaviour/WorldCenterMode)
extern "C" void QCARManagerImpl_set_WorldCenterMode_m3331 (QCARManagerImpl_t716 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode Vuforia.QCARManagerImpl::get_WorldCenterMode()
extern "C" int32_t QCARManagerImpl_get_WorldCenterMode_m3332 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C" void QCARManagerImpl_set_WorldCenter_m3333 (QCARManagerImpl_t716 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.QCARManagerImpl::get_WorldCenter()
extern "C" Object_t * QCARManagerImpl_get_WorldCenter_m3334 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C" void QCARManagerImpl_set_ARCameraTransform_m3335 (QCARManagerImpl_t716 * __this, Transform_t6 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.QCARManagerImpl::get_ARCameraTransform()
extern "C" Transform_t6 * QCARManagerImpl_get_ARCameraTransform_m3336 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::get_Initialized()
extern "C" bool QCARManagerImpl_get_Initialized_m3337 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARManagerImpl::get_QCARFrameIndex()
extern "C" int32_t QCARManagerImpl_get_QCARFrameIndex_m3338 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C" void QCARManagerImpl_set_VideoBackgroundTextureSet_m3339 (QCARManagerImpl_t716 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::get_VideoBackgroundTextureSet()
extern "C" bool QCARManagerImpl_get_VideoBackgroundTextureSet_m3340 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::Init()
extern "C" bool QCARManagerImpl_Init_m3341 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::Deinit()
extern "C" void QCARManagerImpl_Deinit_m3342 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::Update(UnityEngine.ScreenOrientation)
extern "C" bool QCARManagerImpl_Update_m3343 (QCARManagerImpl_t716 * __this, int32_t ___counterRotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::StartRendering()
extern "C" void QCARManagerImpl_StartRendering_m3344 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::FinishRendering()
extern "C" void QCARManagerImpl_FinishRendering_m3345 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::Pause(System.Boolean)
extern "C" void QCARManagerImpl_Pause_m3346 (QCARManagerImpl_t716 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::SetStatesToDiscard()
extern "C" void QCARManagerImpl_SetStatesToDiscard_m3347 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C" void QCARManagerImpl_InitializeTrackableContainer_m3348 (QCARManagerImpl_t716 * __this, int32_t ___numTrackableResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateTrackers(Vuforia.QCARManagerImpl/FrameState)
extern "C" void QCARManagerImpl_UpdateTrackers_m3349 (QCARManagerImpl_t716 * __this, FrameState_t709  ___frameState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateSmartTerrain(Vuforia.QCARManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C" void QCARManagerImpl_UpdateSmartTerrain_m3350 (QCARManagerImpl_t716 * __this, FrameState_t709  ___frameState, StateManagerImpl_t717 * ___stateManager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateTrackablesEditor()
extern "C" void QCARManagerImpl_UpdateTrackablesEditor_m3351 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateWordTrackables(Vuforia.QCARManagerImpl/FrameState)
extern "C" void QCARManagerImpl_UpdateWordTrackables_m3352 (QCARManagerImpl_t716 * __this, FrameState_t709  ___frameState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateImageContainer()
extern "C" void QCARManagerImpl_UpdateImageContainer_m3353 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateCameraFrame()
extern "C" void QCARManagerImpl_UpdateCameraFrame_m3354 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::InjectCameraFrame()
extern "C" void QCARManagerImpl_InjectCameraFrame_m3355 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::.ctor()
extern "C" void QCARManagerImpl__ctor_m3356 (QCARManagerImpl_t716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
