#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t679;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t661;
// Vuforia.TargetFinder
struct TargetFinder_t675;
// Vuforia.DataSet
struct DataSet_t628;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t676;

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C" ImageTargetBuilder_t661 * ObjectTrackerImpl_get_ImageTargetBuilder_m3274 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C" TargetFinder_t675 * ObjectTrackerImpl_get_TargetFinder_m3275 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C" void ObjectTrackerImpl__ctor_m3276 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C" bool ObjectTrackerImpl_Start_m3277 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C" void ObjectTrackerImpl_Stop_m3278 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C" DataSet_t628 * ObjectTrackerImpl_CreateDataSet_m3279 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C" bool ObjectTrackerImpl_DestroyDataSet_m3280 (ObjectTrackerImpl_t679 * __this, DataSet_t628 * ___dataSet, bool ___destroyTrackables, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_ActivateDataSet_m3281 (ObjectTrackerImpl_t679 * __this, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_DeactivateDataSet_m3282 (ObjectTrackerImpl_t679 * __this, DataSet_t628 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetActiveDataSets_m3283 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetDataSets_m3284 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C" void ObjectTrackerImpl_DestroyAllDataSets_m3285 (ObjectTrackerImpl_t679 * __this, bool ___destroyTrackables, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C" bool ObjectTrackerImpl_PersistExtendedTracking_m3286 (ObjectTrackerImpl_t679 * __this, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C" bool ObjectTrackerImpl_ResetExtendedTracking_m3287 (ObjectTrackerImpl_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
