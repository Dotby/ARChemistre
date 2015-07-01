#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>
struct Transform_1_t3905;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25855_gshared (Transform_1_t3905 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25855(__this, ___object, ___method, method) (( void (*) (Transform_1_t3905 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25855_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3895  Transform_1_Invoke_m25857_gshared (Transform_1_t3905 * __this, Object_t * ___key, ProfileData_t803  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25857(__this, ___key, ___value, method) (( KeyValuePair_2_t3895  (*) (Transform_1_t3905 *, Object_t *, ProfileData_t803 , MethodInfo*))Transform_1_Invoke_m25857_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25859_gshared (Transform_1_t3905 * __this, Object_t * ___key, ProfileData_t803  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25859(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3905 *, Object_t *, ProfileData_t803 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25859_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3895  Transform_1_EndInvoke_m25861_gshared (Transform_1_t3905 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25861(__this, ___result, method) (( KeyValuePair_2_t3895  (*) (Transform_1_t3905 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25861_gshared)(__this, ___result, method)
