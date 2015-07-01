#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
struct Transform_1_t3879;
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
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25759_gshared (Transform_1_t3879 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25759(__this, ___object, ___method, method) (( void (*) (Transform_1_t3879 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25759_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1298  Transform_1_Invoke_m25760_gshared (Transform_1_t3879 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25760(__this, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3879 *, Object_t *, ProfileData_t803 , MethodInfo*))Transform_1_Invoke_m25760_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25761_gshared (Transform_1_t3879 * __this, Object_t * ___key, ProfileData_t803  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25761(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3879 *, Object_t *, ProfileData_t803 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25761_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1298  Transform_1_EndInvoke_m25762_gshared (Transform_1_t3879 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25762(__this, ___result, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3879 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25762_gshared)(__this, ___result, method)
