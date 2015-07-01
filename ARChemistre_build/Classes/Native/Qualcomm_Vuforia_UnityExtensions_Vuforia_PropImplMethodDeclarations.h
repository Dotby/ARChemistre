#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.PropImpl
struct PropImpl_t733;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t641;
// UnityEngine.Mesh
struct Mesh_t184;
// Vuforia.OrientedBoundingBox3D
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox_0.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void PropImpl__ctor_m3409 (PropImpl_t733 * __this, int32_t ___id, Object_t * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C" OrientedBoundingBox3D_t651  PropImpl_get_BoundingBox_m3410 (PropImpl_t733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C" void PropImpl_SetMesh_m3411 (PropImpl_t733 * __this, int32_t ___meshRev, Mesh_t184 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C" void PropImpl_SetObb_m3412 (PropImpl_t733 * __this, OrientedBoundingBox3D_t651  ___obb3D, MethodInfo* method) IL2CPP_METHOD_ATTR;
