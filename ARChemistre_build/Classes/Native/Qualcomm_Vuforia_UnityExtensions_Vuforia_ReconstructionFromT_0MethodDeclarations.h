#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t630;
// Vuforia.CylinderTarget
struct CylinderTarget_t631;
// Vuforia.ImageTarget
struct ImageTarget_t632;
// Vuforia.MultiTarget
struct MultiTarget_t633;
// Vuforia.Trackable
struct Trackable_t614;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionFromTargetImpl__ctor_m3070 (ReconstructionFromTargetImpl_t630 * __this, IntPtr_t ___nativeReconstructionPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3071 (ReconstructionFromTargetImpl_t630 * __this, Object_t * ___cylinderTarget, Vector3_t30  ___occluderMin, Vector3_t30  ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3072 (ReconstructionFromTargetImpl_t630 * __this, Object_t * ___cylinderTarget, Vector3_t30  ___occluderMin, Vector3_t30  ___occluderMax, Vector3_t30  ___offsetToOccluderOrigin, Quaternion_t54  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3073 (ReconstructionFromTargetImpl_t630 * __this, Object_t * ___imageTarget, Vector3_t30  ___occluderMin, Vector3_t30  ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3074 (ReconstructionFromTargetImpl_t630 * __this, Object_t * ___imageTarget, Vector3_t30  ___occluderMin, Vector3_t30  ___occluderMax, Vector3_t30  ___offsetToOccluderOrigin, Quaternion_t54  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3075 (ReconstructionFromTargetImpl_t630 * __this, Object_t * ___multiTarget, Vector3_t30  ___occluderMin, Vector3_t30  ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3076 (ReconstructionFromTargetImpl_t630 * __this, Object_t * ___multiTarget, Vector3_t30  ___occluderMin, Vector3_t30  ___occluderMax, Vector3_t30  ___offsetToOccluderOrigin, Quaternion_t54  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m3077 (ReconstructionFromTargetImpl_t630 * __this, Vector3_t30 * ___occluderMin, Vector3_t30 * ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m3078 (ReconstructionFromTargetImpl_t630 * __this, Vector3_t30 * ___occluderMin, Vector3_t30 * ___occluderMax, Vector3_t30 * ___offsetToOccluderOrigin, Quaternion_t54 * ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C" bool ReconstructionFromTargetImpl_Reset_m3079 (ReconstructionFromTargetImpl_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C" bool ReconstructionFromTargetImpl_Start_m3080 (ReconstructionFromTargetImpl_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3081 (ReconstructionFromTargetImpl_t630 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t30  ___occluderMin, Vector3_t30  ___occluderMax, Vector3_t30  ___offsetToOccluderOrigin, Quaternion_t54  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C" bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m3082 (ReconstructionFromTargetImpl_t630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C" void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m3083 (ReconstructionFromTargetImpl_t630 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
