#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>
struct Transform_1_t3826;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25006_gshared (Transform_1_t3826 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25006(__this, ___object, ___method, method) (( void (*) (Transform_1_t3826 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25006_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3816  Transform_1_Invoke_m25007_gshared (Transform_1_t3826 * __this, int32_t ___key, VirtualButtonData_t699  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25007(__this, ___key, ___value, method) (( KeyValuePair_2_t3816  (*) (Transform_1_t3826 *, int32_t, VirtualButtonData_t699 , MethodInfo*))Transform_1_Invoke_m25007_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25008_gshared (Transform_1_t3826 * __this, int32_t ___key, VirtualButtonData_t699  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25008(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3826 *, int32_t, VirtualButtonData_t699 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25008_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3816  Transform_1_EndInvoke_m25009_gshared (Transform_1_t3826 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25009(__this, ___result, method) (( KeyValuePair_2_t3816  (*) (Transform_1_t3826 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25009_gshared)(__this, ___result, method)
