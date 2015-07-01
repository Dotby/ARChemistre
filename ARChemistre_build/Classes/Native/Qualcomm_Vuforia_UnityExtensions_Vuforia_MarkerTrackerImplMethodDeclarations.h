#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.MarkerTrackerImpl
struct MarkerTrackerImpl_t685;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t84;
// System.String
struct String_t;
// Vuforia.Marker
struct Marker_t682;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker>
struct IEnumerable_1_t683;

// System.Boolean Vuforia.MarkerTrackerImpl::Start()
extern "C" bool MarkerTrackerImpl_Start_m3296 (MarkerTrackerImpl_t685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::Stop()
extern "C" void MarkerTrackerImpl_Stop_m3297 (MarkerTrackerImpl_t685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.MarkerTrackerImpl::CreateMarker(System.Int32,System.String,System.Single)
extern "C" MarkerAbstractBehaviour_t84 * MarkerTrackerImpl_CreateMarker_m3298 (MarkerTrackerImpl_t685 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerTrackerImpl::DestroyMarker(Vuforia.Marker,System.Boolean)
extern "C" bool MarkerTrackerImpl_DestroyMarker_m3299 (MarkerTrackerImpl_t685 * __this, Object_t * ___marker, bool ___destroyGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker> Vuforia.MarkerTrackerImpl::GetMarkers()
extern "C" Object_t* MarkerTrackerImpl_GetMarkers_m3300 (MarkerTrackerImpl_t685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::GetMarkerByMarkerID(System.Int32)
extern "C" Object_t * MarkerTrackerImpl_GetMarkerByMarkerID_m3301 (MarkerTrackerImpl_t685 * __this, int32_t ___markerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::InternalCreateMarker(System.Int32,System.String,System.Single)
extern "C" Object_t * MarkerTrackerImpl_InternalCreateMarker_m3302 (MarkerTrackerImpl_t685 * __this, int32_t ___markerID, String_t* ___name, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::DestroyAllMarkers(System.Boolean)
extern "C" void MarkerTrackerImpl_DestroyAllMarkers_m3303 (MarkerTrackerImpl_t685 * __this, bool ___destroyGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerTrackerImpl::RegisterMarker(System.Int32,System.String,System.Single)
extern "C" int32_t MarkerTrackerImpl_RegisterMarker_m3304 (MarkerTrackerImpl_t685 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::.ctor()
extern "C" void MarkerTrackerImpl__ctor_m3305 (MarkerTrackerImpl_t685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
