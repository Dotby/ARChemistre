#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t729;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t635;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t98;
// Vuforia.Reconstruction
struct Reconstruction_t636;
// Vuforia.QCARManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t730;
// Vuforia.QCARManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t731;
// Vuforia.QCARManagerImpl/PropData[]
struct PropDataU5BU5D_t732;

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C" bool SmartTerrainBuilderImpl_Init_m3401 (SmartTerrainBuilderImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C" bool SmartTerrainBuilderImpl_Deinit_m3402 (SmartTerrainBuilderImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C" Object_t* SmartTerrainBuilderImpl_GetReconstructions_m3403 (SmartTerrainBuilderImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_AddReconstruction_m3404 (SmartTerrainBuilderImpl_t729 * __this, ReconstructionAbstractBehaviour_t98 * ___reconstructionBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_RemoveReconstruction_m3405 (SmartTerrainBuilderImpl_t729 * __this, ReconstructionAbstractBehaviour_t98 * ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C" bool SmartTerrainBuilderImpl_DestroyReconstruction_m3406 (SmartTerrainBuilderImpl_t729 * __this, Object_t * ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/SurfaceData[],Vuforia.QCARManagerImpl/PropData[])
extern "C" void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m3407 (SmartTerrainBuilderImpl_t729 * __this, SmartTerrainRevisionDataU5BU5D_t730* ___smartTerrainRevisions, SurfaceDataU5BU5D_t731* ___updatedSurfaces, PropDataU5BU5D_t732* ___updatedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C" void SmartTerrainBuilderImpl__ctor_m3408 (SmartTerrainBuilderImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
