#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
struct Transform_1_t3815;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25002_gshared (Transform_1_t3815 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25002(__this, ___object, ___method, method) (( void (*) (Transform_1_t3815 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25002_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1298  Transform_1_Invoke_m25003_gshared (Transform_1_t3815 * __this, int32_t ___key, VirtualButtonData_t699  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25003(__this, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3815 *, int32_t, VirtualButtonData_t699 , MethodInfo*))Transform_1_Invoke_m25003_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25004_gshared (Transform_1_t3815 * __this, int32_t ___key, VirtualButtonData_t699  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25004(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3815 *, int32_t, VirtualButtonData_t699 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25004_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1298  Transform_1_EndInvoke_m25005_gshared (Transform_1_t3815 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25005(__this, ___result, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3815 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25005_gshared)(__this, ___result, method)
