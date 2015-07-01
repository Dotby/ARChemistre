#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>
struct Transform_1_t3477;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21092_gshared (Transform_1_t3477 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m21092(__this, ___object, ___method, method) (( void (*) (Transform_1_t3477 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m21092_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3467  Transform_1_Invoke_m21094_gshared (Transform_1_t3477 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m21094(__this, ___key, ___value, method) (( KeyValuePair_2_t3467  (*) (Transform_1_t3477 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m21094_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21096_gshared (Transform_1_t3477 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m21096(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3477 *, int32_t, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m21096_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3467  Transform_1_EndInvoke_m21098_gshared (Transform_1_t3477 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m21098(__this, ___result, method) (( KeyValuePair_2_t3467  (*) (Transform_1_t3477 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m21098_gshared)(__this, ___result, method)
