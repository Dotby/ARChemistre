#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t85;
// Vuforia.MultiTarget
struct MultiTarget_t633;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t617;
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C" Object_t * MultiTargetAbstractBehaviour_get_MultiTarget_m4435 (MultiTargetAbstractBehaviour_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m832 (MultiTargetAbstractBehaviour_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m834 (MultiTargetAbstractBehaviour_t85 * __this, Vector3_t30 * ___boundsMin, Vector3_t30 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m835 (MultiTargetAbstractBehaviour_t85 * __this, Object_t * ___reconstructionFromTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorMultiTargetBehaviour.InitializeMultiTarget(Vuforia.MultiTarget)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorMultiTargetBehaviour_InitializeMultiTarget_m836 (MultiTargetAbstractBehaviour_t85 * __this, Object_t * ___multiTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C" void MultiTargetAbstractBehaviour__ctor_m597 (MultiTargetAbstractBehaviour_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m828 (MultiTargetAbstractBehaviour_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m829 (MultiTargetAbstractBehaviour_t85 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t6 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m830 (MultiTargetAbstractBehaviour_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t1 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m831 (MultiTargetAbstractBehaviour_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
