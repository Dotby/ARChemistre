#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t103;
// Vuforia.Surface
struct Surface_t69;
// UnityEngine.MeshFilter
struct MeshFilter_t180;
// UnityEngine.MeshCollider
struct MeshCollider_t642;
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.GameObject
struct GameObject_t1;

// Vuforia.Surface Vuforia.SurfaceAbstractBehaviour::get_Surface()
extern "C" Object_t * SurfaceAbstractBehaviour_get_Surface_m3122 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void SurfaceAbstractBehaviour_InternalUnregisterTrackable_m905 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.InitializeSurface(Vuforia.Surface)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_InitializeSurface_m908 (SurfaceAbstractBehaviour_t103 * __this, Object_t * ___surface, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshFilterToUpdate_m909 (SurfaceAbstractBehaviour_t103 * __this, MeshFilter_t180 * ___meshFilterToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t180 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshFilterToUpdate_m910 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshColliderToUpdate_m911 (SurfaceAbstractBehaviour_t103 * __this, MeshCollider_t642 * ___meshColliderToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t642 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshColliderToUpdate_m912 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::.ctor()
extern "C" void SurfaceAbstractBehaviour__ctor_m609 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m901 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m902 (SurfaceAbstractBehaviour_t103 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t6 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m903 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t1 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m904 (SurfaceAbstractBehaviour_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
