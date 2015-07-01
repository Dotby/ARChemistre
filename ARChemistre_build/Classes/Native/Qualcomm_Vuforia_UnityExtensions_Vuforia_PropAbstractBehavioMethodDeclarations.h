#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t95;
// Vuforia.Prop
struct Prop_t68;
// UnityEngine.MeshFilter
struct MeshFilter_t180;
// UnityEngine.MeshCollider
struct MeshCollider_t642;
// UnityEngine.BoxCollider
struct BoxCollider_t782;
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.GameObject
struct GameObject_t1;

// Vuforia.Prop Vuforia.PropAbstractBehaviour::get_Prop()
extern "C" Object_t * PropAbstractBehaviour_get_Prop_m4331 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::UpdateMeshAndColliders()
extern "C" void PropAbstractBehaviour_UpdateMeshAndColliders_m863 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Start()
extern "C" void PropAbstractBehaviour_Start_m864 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void PropAbstractBehaviour_InternalUnregisterTrackable_m862 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.InitializeProp(Vuforia.Prop)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_InitializeProp_m865 (PropAbstractBehaviour_t95 * __this, Object_t * ___prop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshFilterToUpdate_m866 (PropAbstractBehaviour_t95 * __this, MeshFilter_t180 * ___meshFilterToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t180 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshFilterToUpdate_m867 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshColliderToUpdate_m868 (PropAbstractBehaviour_t95 * __this, MeshCollider_t642 * ___meshColliderToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t642 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshColliderToUpdate_m869 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetBoxColliderToUpdate(UnityEngine.BoxCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetBoxColliderToUpdate_m870 (PropAbstractBehaviour_t95 * __this, BoxCollider_t782 * ___boxColliderToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_BoxColliderToUpdate()
extern "C" BoxCollider_t782 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_BoxColliderToUpdate_m871 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::.ctor()
extern "C" void PropAbstractBehaviour__ctor_m599 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m858 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m859 (PropAbstractBehaviour_t95 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t6 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m860 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t1 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m861 (PropAbstractBehaviour_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
