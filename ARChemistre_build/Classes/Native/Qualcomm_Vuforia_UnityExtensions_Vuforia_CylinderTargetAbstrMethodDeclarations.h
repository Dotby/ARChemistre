#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t60;
// Vuforia.CylinderTarget
struct CylinderTarget_t631;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t617;
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C" Object_t * CylinderTargetAbstractBehaviour_get_CylinderTarget_m3123 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C" float CylinderTargetAbstractBehaviour_get_SideLength_m3124 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_TopDiameter_m3125 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_BottomDiameter_m3126 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetSideLength_m3127 (CylinderTargetAbstractBehaviour_t60 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetTopDiameter_m3128 (CylinderTargetAbstractBehaviour_t60 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m3129 (CylinderTargetAbstractBehaviour_t60 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m765 (CylinderTargetAbstractBehaviour_t60 * __this, int32_t ___newFrameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m767 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m766 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m793 (CylinderTargetAbstractBehaviour_t60 * __this, Vector3_t30 * ___boundsMin, Vector3_t30 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m794 (CylinderTargetAbstractBehaviour_t60 * __this, Object_t * ___reconstructionFromTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C" float CylinderTargetAbstractBehaviour_GetScale_m3130 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetScale_m3131 (CylinderTargetAbstractBehaviour_t60 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C" void CylinderTargetAbstractBehaviour_ApplyScale_m3132 (CylinderTargetAbstractBehaviour_t60 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.InitializeCylinderTarget(Vuforia.CylinderTarget)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_InitializeCylinderTarget_m795 (CylinderTargetAbstractBehaviour_t60 * __this, Object_t * ___cylinderTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_SetAspectRatio_m796 (CylinderTargetAbstractBehaviour_t60 * __this, float ___topRatio, float ___bottomRatio, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C" void CylinderTargetAbstractBehaviour__ctor_m534 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m759 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m760 (CylinderTargetAbstractBehaviour_t60 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t6 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m761 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t1 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m762 (CylinderTargetAbstractBehaviour_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
