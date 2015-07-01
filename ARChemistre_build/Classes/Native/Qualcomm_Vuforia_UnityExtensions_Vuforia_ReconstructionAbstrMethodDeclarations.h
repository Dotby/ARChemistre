#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t98;
// Vuforia.Reconstruction
struct Reconstruction_t636;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t777;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t772;
// System.Action`1<Vuforia.Prop>
struct Action_1_t162;
// System.Action`1<Vuforia.Surface>
struct Action_1_t163;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t95;
// Vuforia.Prop
struct Prop_t68;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t103;
// Vuforia.Surface
struct Surface_t69;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t778;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t779;
// Vuforia.QCARManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t730;
// Vuforia.QCARManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t731;
// Vuforia.QCARManagerImpl/PropData[]
struct PropDataU5BU5D_t732;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t641;
// UnityEngine.Mesh
struct Mesh_t184;
// System.Int32[]
struct Int32U5BU5D_t186;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t780;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t781;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.QCARManagerImpl/MeshData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Mes.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C" Object_t * ReconstructionAbstractBehaviour_get_Reconstruction_m4293 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Start()
extern "C" void ReconstructionAbstractBehaviour_Start_m4294 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C" void ReconstructionAbstractBehaviour_OnDrawGizmos_m4295 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m4296 (ReconstructionAbstractBehaviour_t98 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m4297 (ReconstructionAbstractBehaviour_t98 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m4298 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t772 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m4299 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t772 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m542 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t162 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m545 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t162 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m4300 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t162 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m4301 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t162 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m4302 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t162 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m4303 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t162 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m544 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t163 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m546 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t163 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m4304 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t163 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m4305 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t163 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m4306 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t163 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m4307 (ReconstructionAbstractBehaviour_t98 * __this, Action_1_t163 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C" PropAbstractBehaviour_t95 * ReconstructionAbstractBehaviour_AssociateProp_m547 (ReconstructionAbstractBehaviour_t98 * __this, PropAbstractBehaviour_t95 * ___templateBehaviour, Object_t * ___newProp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C" SurfaceAbstractBehaviour_t103 * ReconstructionAbstractBehaviour_AssociateSurface_m548 (ReconstructionAbstractBehaviour_t98 * __this, SurfaceAbstractBehaviour_t103 * ___templateBehaviour, Object_t * ___newSurface, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveProps_m4308 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m4309 (ReconstructionAbstractBehaviour_t98 * __this, Object_t * ___prop, PropAbstractBehaviour_t95 ** ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveSurfaces_m4310 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m4311 (ReconstructionAbstractBehaviour_t98 * __this, Object_t * ___surface, SurfaceAbstractBehaviour_t103 ** ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C" void ReconstructionAbstractBehaviour_Initialize_m4312 (ReconstructionAbstractBehaviour_t98 * __this, Object_t * ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C" void ReconstructionAbstractBehaviour_Deinitialize_m4313 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/SurfaceData[],Vuforia.QCARManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m4314 (ReconstructionAbstractBehaviour_t98 * __this, SmartTerrainRevisionDataU5BU5D_t730* ___smartTerrainRevisions, SurfaceDataU5BU5D_t731* ___updatedSurfaces, PropDataU5BU5D_t732* ___updatedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C" void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m4315 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C" void ReconstructionAbstractBehaviour_ClearOnReset_m4316 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C" void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m4317 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C" PropAbstractBehaviour_t95 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m4318 (Object_t * __this /* static, unused */, PropAbstractBehaviour_t95 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m4319 (ReconstructionAbstractBehaviour_t98 * __this, Object_t * ___trackable, PropAbstractBehaviour_t95 * ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C" SurfaceAbstractBehaviour_t103 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m4320 (Object_t * __this /* static, unused */, SurfaceAbstractBehaviour_t103 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m4321 (ReconstructionAbstractBehaviour_t98 * __this, Object_t * ___trackable, SurfaceAbstractBehaviour_t103 * ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C" Object_t * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m4322 (ReconstructionAbstractBehaviour_t98 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m4323 (ReconstructionAbstractBehaviour_t98 * __this, Object_t* ___newSurfaces, Object_t* ___updatedSurfaces, Object_t* ___deletedSurfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m4324 (ReconstructionAbstractBehaviour_t98 * __this, Object_t* ___newProps, Object_t* ___updatedProps, Object_t* ___deletedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.ReconstructionAbstractBehaviour::UpdateMesh(Vuforia.QCARManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean)
extern "C" Mesh_t184 * ReconstructionAbstractBehaviour_UpdateMesh_m4325 (Object_t * __this /* static, unused */, MeshData_t705  ___meshData, Mesh_t184 * ___oldMesh, bool ___setNormalsUpwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C" Int32U5BU5D_t186* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m4326 (Object_t * __this /* static, unused */, int32_t ___numBoundaries, IntPtr_t ___boundaryArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m4327 (ReconstructionAbstractBehaviour_t98 * __this, List_1_t780 * ___deletedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m4328 (ReconstructionAbstractBehaviour_t98 * __this, List_1_t781 * ___deletedSurfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/SurfaceData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSurfaces_m4329 (ReconstructionAbstractBehaviour_t98 * __this, SmartTerrainRevisionDataU5BU5D_t730* ___smartTerrainRevisions, SurfaceDataU5BU5D_t731* ___updatedSurfaceData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateProps_m4330 (ReconstructionAbstractBehaviour_t98 * __this, SmartTerrainRevisionDataU5BU5D_t730* ___smartTerrainRevisions, PropDataU5BU5D_t732* ___updatedPropData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_InitializedInEditor()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_InitializedInEditor_m883 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetInitializedInEditor_m884 (ReconstructionAbstractBehaviour_t98 * __this, bool ___initializedInEditor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtentEnabled(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtentEnabled_m885 (ReconstructionAbstractBehaviour_t98 * __this, bool ___maxExtendEnabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtentEnabled()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtentEnabled_m886 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtent(UnityEngine.Rect)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtent_m887 (ReconstructionAbstractBehaviour_t98 * __this, Rect_t32  ___rectangle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtent()
extern "C" Rect_t32  ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtent_m888 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetAutomaticStart(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetAutomaticStart_m889 (ReconstructionAbstractBehaviour_t98 * __this, bool ___autoStart, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_AutomaticStart()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_AutomaticStart_m890 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshUpdates(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshUpdates_m891 (ReconstructionAbstractBehaviour_t98 * __this, bool ___navMeshUpdates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshUpdates()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshUpdates_m892 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshPadding(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshPadding_m893 (ReconstructionAbstractBehaviour_t98 * __this, float ___navMeshPadding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshPadding()
extern "C" float ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshPadding_m894 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorMeshesByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorMeshesByFactor_m895 (ReconstructionAbstractBehaviour_t98 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorPropPositionsByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorPropPositionsByFactor_m896 (ReconstructionAbstractBehaviour_t98 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C" void ReconstructionAbstractBehaviour__ctor_m606 (ReconstructionAbstractBehaviour_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
