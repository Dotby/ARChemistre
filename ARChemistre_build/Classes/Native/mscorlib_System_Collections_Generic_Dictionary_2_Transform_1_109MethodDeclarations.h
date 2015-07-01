﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>
struct Transform_1_t3806;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m24837_gshared (Transform_1_t3806 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m24837(__this, ___object, ___method, method) (( void (*) (Transform_1_t3806 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24837_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m24838_gshared (Transform_1_t3806 * __this, int32_t ___key, TrackableResultData_t698  ___value, MethodInfo* method);
#define Transform_1_Invoke_m24838(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3806 *, int32_t, TrackableResultData_t698 , MethodInfo*))Transform_1_Invoke_m24838_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m24839_gshared (Transform_1_t3806 * __this, int32_t ___key, TrackableResultData_t698  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m24839(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3806 *, int32_t, TrackableResultData_t698 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m24839_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m24840_gshared (Transform_1_t3806 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m24840(__this, ___result, method) (( int32_t (*) (Transform_1_t3806 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m24840_gshared)(__this, ___result, method)
