#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SurfaceImpl
struct SurfaceImpl_t727;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t641;
// UnityEngine.Mesh
struct Mesh_t184;
// System.Int32[]
struct Int32U5BU5D_t186;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SurfaceImpl__ctor_m3393 (SurfaceImpl_t727 * __this, int32_t ___id, Object_t * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C" void SurfaceImpl_SetID_m3394 (SurfaceImpl_t727 * __this, int32_t ___trackableID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C" void SurfaceImpl_SetMesh_m3395 (SurfaceImpl_t727 * __this, int32_t ___meshRev, Mesh_t184 * ___mesh, Mesh_t184 * ___navMesh, Int32U5BU5D_t186* ___meshBoundaries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C" void SurfaceImpl_SetBoundingBox_m3396 (SurfaceImpl_t727 * __this, Rect_t32  ___boundingBox, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C" Mesh_t184 * SurfaceImpl_GetNavMesh_m3397 (SurfaceImpl_t727 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C" Int32U5BU5D_t186* SurfaceImpl_GetMeshBoundaries_m3398 (SurfaceImpl_t727 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C" Rect_t32  SurfaceImpl_get_BoundingBox_m3399 (SurfaceImpl_t727 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C" float SurfaceImpl_GetArea_m3400 (SurfaceImpl_t727 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
