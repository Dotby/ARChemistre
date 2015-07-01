#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.StateManagerImpl
struct StateManagerImpl_t717;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t199;
// Vuforia.WordManager
struct WordManager_t747;
// Vuforia.Trackable
struct Trackable_t614;
// Vuforia.DataSet
struct DataSet_t628;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t70;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t76;
// Vuforia.ImageTarget
struct ImageTarget_t632;
// UnityEngine.GameObject
struct GameObject_t1;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t84;
// Vuforia.Marker
struct Marker_t682;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t715;
// UnityEngine.Transform
struct Transform_t6;
// Vuforia.QCARManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t712;
// Vuforia.QCARManagerImpl/WordData[]
struct WordDataU5BU5D_t713;
// Vuforia.QCARManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t714;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t786;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t85;
// Vuforia.MultiTarget
struct MultiTarget_t633;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t60;
// Vuforia.CylinderTarget
struct CylinderTarget_t631;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t88;
// Vuforia.ObjectTarget
struct ObjectTarget_t618;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m4333 (StateManagerImpl_t717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetTrackableBehaviours_m4334 (StateManagerImpl_t717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C" WordManager_t747 * StateManagerImpl_GetWordManager_m4335 (StateManagerImpl_t717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m4336 (StateManagerImpl_t717 * __this, Object_t * ___trackable, bool ___destroyGameObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C" void StateManagerImpl_AssociateMarkerBehaviours_m4337 (StateManagerImpl_t717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m4338 (StateManagerImpl_t717 * __this, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C" void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m4339 (StateManagerImpl_t717 * __this, TrackableBehaviour_t70 * ___trackableBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C" void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m4340 (StateManagerImpl_t717 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C" void StateManagerImpl_RemoveDestroyedTrackables_m4341 (StateManagerImpl_t717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C" void StateManagerImpl_ClearTrackableBehaviours_m4342 (StateManagerImpl_t717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t76 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m4343 (StateManagerImpl_t717 * __this, Object_t * ___trackable, GameObject_t1 * ___gameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C" ImageTargetAbstractBehaviour_t76 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m4344 (StateManagerImpl_t717 * __this, Object_t * ___trackable, GameObject_t1 * ___gameObject, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C" MarkerAbstractBehaviour_t84 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m4345 (StateManagerImpl_t717 * __this, Object_t * ___trackable, String_t* ___gameObjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C" MarkerAbstractBehaviour_t84 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m4346 (StateManagerImpl_t717 * __this, Object_t * ___trackable, GameObject_t1 * ___gameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C" void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m4347 (StateManagerImpl_t717 * __this, Object_t * ___trackable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_EnableTrackableBehavioursForTrackable_m4348 (StateManagerImpl_t717 * __this, Object_t * ___trackable, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C" void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m4349 (StateManagerImpl_t717 * __this, LinkedList_1_t715 ** ___trackableIDs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,Vuforia.QCARManagerImpl/TrackableResultData[],System.Int32)
extern "C" void StateManagerImpl_UpdateCameraPose_m4350 (StateManagerImpl_t717 * __this, Transform_t6 * ___arCameraTransform, TrackableResultDataU5BU5D_t712* ___trackableResultDataArray, int32_t ___originTrackableID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.QCARManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C" void StateManagerImpl_UpdateTrackablePoses_m4351 (StateManagerImpl_t717 * __this, Transform_t6 * ___arCameraTransform, TrackableResultDataU5BU5D_t712* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C" void StateManagerImpl_UpdateVirtualButtons_m4352 (StateManagerImpl_t717 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.QCARManagerImpl/WordData[],Vuforia.QCARManagerImpl/WordResultData[])
extern "C" void StateManagerImpl_UpdateWords_m4353 (StateManagerImpl_t717 * __this, Transform_t6 * ___arCameraTransform, WordDataU5BU5D_t713* ___wordData, WordResultDataU5BU5D_t714* ___wordResultData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateVirtualButtonBehaviours_m4354 (StateManagerImpl_t717 * __this, VirtualButtonAbstractBehaviourU5BU5D_t786* ___vbBehaviours, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C" void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m4355 (StateManagerImpl_t717 * __this, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C" ImageTargetAbstractBehaviour_t76 * StateManagerImpl_CreateImageTargetBehaviour_m4356 (StateManagerImpl_t717 * __this, Object_t * ___imageTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C" MultiTargetAbstractBehaviour_t85 * StateManagerImpl_CreateMultiTargetBehaviour_m4357 (StateManagerImpl_t717 * __this, Object_t * ___multiTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C" CylinderTargetAbstractBehaviour_t60 * StateManagerImpl_CreateCylinderTargetBehaviour_m4358 (StateManagerImpl_t717 * __this, Object_t * ___cylinderTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C" ObjectTargetAbstractBehaviour_t88 * StateManagerImpl_CreateObjectTargetBehaviour_m4359 (StateManagerImpl_t717 * __this, Object_t * ___objectTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C" void StateManagerImpl_InitializeMarkerBehaviour_m4360 (StateManagerImpl_t717 * __this, MarkerAbstractBehaviour_t84 * ___markerBehaviour, Object_t * ___marker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.QCARManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionCamera_m4361 (StateManagerImpl_t717 * __this, TrackableBehaviour_t70 * ___trackableBehaviour, Transform_t6 * ___arCameraTransform, PoseData_t697  ___camToTargetPose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.QCARManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionTrackable_m4362 (StateManagerImpl_t717 * __this, TrackableBehaviour_t70 * ___trackableBehaviour, Transform_t6 * ___arCameraTransform, PoseData_t697  ___camToTargetPose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C" void StateManagerImpl__ctor_m4363 (StateManagerImpl_t717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
