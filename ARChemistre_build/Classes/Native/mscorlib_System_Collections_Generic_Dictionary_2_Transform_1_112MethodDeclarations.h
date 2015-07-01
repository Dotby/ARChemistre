#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>
struct Transform_1_t3810;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m24868_gshared (Transform_1_t3810 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m24868(__this, ___object, ___method, method) (( void (*) (Transform_1_t3810 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24868_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3801  Transform_1_Invoke_m24869_gshared (Transform_1_t3810 * __this, int32_t ___key, TrackableResultData_t698  ___value, MethodInfo* method);
#define Transform_1_Invoke_m24869(__this, ___key, ___value, method) (( KeyValuePair_2_t3801  (*) (Transform_1_t3810 *, int32_t, TrackableResultData_t698 , MethodInfo*))Transform_1_Invoke_m24869_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m24870_gshared (Transform_1_t3810 * __this, int32_t ___key, TrackableResultData_t698  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m24870(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3810 *, int32_t, TrackableResultData_t698 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m24870_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3801  Transform_1_EndInvoke_m24871_gshared (Transform_1_t3810 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m24871(__this, ___result, method) (( KeyValuePair_2_t3801  (*) (Transform_1_t3810 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m24871_gshared)(__this, ___result, method)
