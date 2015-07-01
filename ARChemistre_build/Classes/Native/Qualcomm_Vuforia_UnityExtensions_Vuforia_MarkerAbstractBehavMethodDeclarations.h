#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t84;
// Vuforia.Marker
struct Marker_t682;
// UnityEngine.Transform
struct Transform_t6;
// UnityEngine.GameObject
struct GameObject_t1;

// Vuforia.Marker Vuforia.MarkerAbstractBehaviour::get_Marker()
extern "C" Object_t * MarkerAbstractBehaviour_get_Marker_m4434 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::.ctor()
extern "C" void MarkerAbstractBehaviour__ctor_m590 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void MarkerAbstractBehaviour_InternalUnregisterTrackable_m823 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerAbstractBehaviour::CorrectScaleImpl()
extern "C" bool MarkerAbstractBehaviour_CorrectScaleImpl_m824 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorMarkerBehaviour.get_MarkerID()
extern "C" int32_t MarkerAbstractBehaviour_Vuforia_IEditorMarkerBehaviour_get_MarkerID_m825 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorMarkerBehaviour.SetMarkerID(System.Int32)
extern "C" bool MarkerAbstractBehaviour_Vuforia_IEditorMarkerBehaviour_SetMarkerID_m826 (MarkerAbstractBehaviour_t84 * __this, int32_t ___markerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorMarkerBehaviour.InitializeMarker(Vuforia.Marker)
extern "C" void MarkerAbstractBehaviour_Vuforia_IEditorMarkerBehaviour_InitializeMarker_m827 (MarkerAbstractBehaviour_t84 * __this, Object_t * ___marker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m818 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m819 (MarkerAbstractBehaviour_t84 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t6 * MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m820 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t1 * MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m821 (MarkerAbstractBehaviour_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
