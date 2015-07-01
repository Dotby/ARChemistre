#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t76;
// Vuforia.ImageTarget
struct ImageTarget_t632;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t617;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t82;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour>
struct IEnumerable_1_t807;
// Vuforia.VirtualButton
struct VirtualButton_t655;
// UnityEngine.Transform
struct Transform_t6;
// Vuforia.ImageTargetType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::get_ImageTarget()
extern "C" Object_t * ImageTargetAbstractBehaviour_get_ImageTarget_m689 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::.ctor()
extern "C" void ImageTargetAbstractBehaviour__ctor_m560 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool ImageTargetAbstractBehaviour_CorrectScaleImpl_m803 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void ImageTargetAbstractBehaviour_InternalUnregisterTrackable_m802 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void ImageTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m804 (ImageTargetAbstractBehaviour_t76 * __this, Vector3_t30 * ___boundsMin, Vector3_t30 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void ImageTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m805 (ImageTargetAbstractBehaviour_t76 * __this, Object_t * ___reconstructionFromTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" VirtualButtonAbstractBehaviour_t82 * ImageTargetAbstractBehaviour_CreateVirtualButton_m4428 (ImageTargetAbstractBehaviour_t76 * __this, String_t* ___vbName, Vector2_t20  ___position, Vector2_t20  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.GameObject)
extern "C" VirtualButtonAbstractBehaviour_t82 * ImageTargetAbstractBehaviour_CreateVirtualButton_m4429 (Object_t * __this /* static, unused */, String_t* ___vbName, Vector2_t20  ___localScale, GameObject_t1 * ___immediateParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::GetVirtualButtonBehaviours()
extern "C" Object_t* ImageTargetAbstractBehaviour_GetVirtualButtonBehaviours_m4430 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::DestroyVirtualButton(System.String)
extern "C" void ImageTargetAbstractBehaviour_DestroyVirtualButton_m4431 (ImageTargetAbstractBehaviour_t76 * __this, String_t* ___vbName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::GetSize()
extern "C" Vector2_t20  ImageTargetAbstractBehaviour_GetSize_m810 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetWidth(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetWidth_m811 (ImageTargetAbstractBehaviour_t76 * __this, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetHeight(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetHeight_m812 (ImageTargetAbstractBehaviour_t76 * __this, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_AspectRatio()
extern "C" float ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_AspectRatio_m806 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_ImageTargetType()
extern "C" int32_t ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_ImageTargetType_m807 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetAspectRatio(System.Single)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetAspectRatio_m808 (ImageTargetAbstractBehaviour_t76 * __this, float ___aspectRatio, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetImageTargetType(Vuforia.ImageTargetType)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetImageTargetType_m809 (ImageTargetAbstractBehaviour_t76 * __this, int32_t ___imageTargetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.InitializeImageTarget(Vuforia.ImageTarget)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_InitializeImageTarget_m813 (ImageTargetAbstractBehaviour_t76 * __this, Object_t * ___imageTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.AssociateExistingVirtualButtonBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_AssociateExistingVirtualButtonBehaviour_m816 (ImageTargetAbstractBehaviour_t76 * __this, VirtualButtonAbstractBehaviour_t82 * ___virtualButtonBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.CreateMissingVirtualButtonBehaviours()
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_CreateMissingVirtualButtonBehaviours_m814 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.TryGetVirtualButtonBehaviourByID(System.Int32,Vuforia.VirtualButtonAbstractBehaviour&)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_TryGetVirtualButtonBehaviourByID_m815 (ImageTargetAbstractBehaviour_t76 * __this, int32_t ___id, VirtualButtonAbstractBehaviour_t82 ** ___virtualButtonBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButtonFromNative(Vuforia.VirtualButton)
extern "C" void ImageTargetAbstractBehaviour_CreateVirtualButtonFromNative_m4432 (ImageTargetAbstractBehaviour_t76 * __this, VirtualButton_t655 * ___virtualButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CreateNewVirtualButtonFromBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" bool ImageTargetAbstractBehaviour_CreateNewVirtualButtonFromBehaviour_m4433 (ImageTargetAbstractBehaviour_t76 * __this, VirtualButtonAbstractBehaviour_t82 * ___newVBB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m797 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m798 (ImageTargetAbstractBehaviour_t76 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t6 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m799 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t1 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m800 (ImageTargetAbstractBehaviour_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
