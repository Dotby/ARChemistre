#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.MarkerImpl
struct MarkerImpl_t680;
// System.String
struct String_t;

// System.Int32 Vuforia.MarkerImpl::get_MarkerID()
extern "C" int32_t MarkerImpl_get_MarkerID_m3288 (MarkerImpl_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::set_MarkerID(System.Int32)
extern "C" void MarkerImpl_set_MarkerID_m3289 (MarkerImpl_t680 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::.ctor(System.String,System.Int32,System.Single,System.Int32)
extern "C" void MarkerImpl__ctor_m3290 (MarkerImpl_t680 * __this, String_t* ___name, int32_t ___id, float ___size, int32_t ___markerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.MarkerImpl::GetSize()
extern "C" float MarkerImpl_GetSize_m3291 (MarkerImpl_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::SetSize(System.Single)
extern "C" void MarkerImpl_SetSize_m3292 (MarkerImpl_t680 * __this, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerImpl::StartExtendedTracking()
extern "C" bool MarkerImpl_StartExtendedTracking_m3293 (MarkerImpl_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerImpl::StopExtendedTracking()
extern "C" bool MarkerImpl_StopExtendedTracking_m3294 (MarkerImpl_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
