#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SmartTerrainTrackableImpl
struct SmartTerrainTrackableImpl_t725;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable>
struct IEnumerable_1_t726;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t641;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t184;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"

// System.Void Vuforia.SmartTerrainTrackableImpl::.ctor(System.String,System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl__ctor_m3382 (SmartTerrainTrackableImpl_t725 * __this, String_t* ___name, int32_t ___id, Object_t * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::get_Children()
extern "C" Object_t* SmartTerrainTrackableImpl_get_Children_m3383 (SmartTerrainTrackableImpl_t725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.SmartTerrainTrackableImpl::get_MeshRevision()
extern "C" int32_t SmartTerrainTrackableImpl_get_MeshRevision_m3384 (SmartTerrainTrackableImpl_t725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::get_Parent()
extern "C" Object_t * SmartTerrainTrackableImpl_get_Parent_m3385 (SmartTerrainTrackableImpl_t725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::set_Parent(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_set_Parent_m3386 (SmartTerrainTrackableImpl_t725 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::GetMesh()
extern "C" Mesh_t184 * SmartTerrainTrackableImpl_GetMesh_m3387 (SmartTerrainTrackableImpl_t725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.SmartTerrainTrackableImpl::get_LocalPosition()
extern "C" Vector3_t30  SmartTerrainTrackableImpl_get_LocalPosition_m3388 (SmartTerrainTrackableImpl_t725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::SetLocalPose(Vuforia.QCARManagerImpl/PoseData)
extern "C" void SmartTerrainTrackableImpl_SetLocalPose_m3389 (SmartTerrainTrackableImpl_t725 * __this, PoseData_t697  ___localPose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::DestroyMesh()
extern "C" void SmartTerrainTrackableImpl_DestroyMesh_m3390 (SmartTerrainTrackableImpl_t725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::AddChild(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_AddChild_m3391 (SmartTerrainTrackableImpl_t725 * __this, Object_t * ___newChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::RemoveChild(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_RemoveChild_m3392 (SmartTerrainTrackableImpl_t725 * __this, Object_t * ___removedChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
