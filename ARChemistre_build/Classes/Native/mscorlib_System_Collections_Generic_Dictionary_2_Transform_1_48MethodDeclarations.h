#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>
struct Transform_1_t3476;
// System.Object
struct Object_t;
// Vuforia.Trackable
struct Trackable_t614;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
#define Transform_1__ctor_m21091(__this, ___object, ___method, method) (( void (*) (Transform_1_t3476 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m21092_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m21093(__this, ___key, ___value, method) (( KeyValuePair_2_t3467  (*) (Transform_1_t3476 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m21094_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m21095(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3476 *, int32_t, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m21096_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m21097(__this, ___result, method) (( KeyValuePair_2_t3467  (*) (Transform_1_t3476 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m21098_gshared)(__this, ___result, method)
