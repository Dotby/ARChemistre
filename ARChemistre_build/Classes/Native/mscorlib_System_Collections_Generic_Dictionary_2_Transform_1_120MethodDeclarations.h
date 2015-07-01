#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
struct Transform_1_t3862;
// System.Object
struct Object_t;
// Vuforia.ImageTarget
struct ImageTarget_t632;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_121MethodDeclarations.h"
#define Transform_1__ctor_m25434(__this, ___object, ___method, method) (( void (*) (Transform_1_t3862 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25435_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m25436(__this, ___key, ___value, method) (( KeyValuePair_2_t3852  (*) (Transform_1_t3862 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m25437_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m25438(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3862 *, int32_t, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25439_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m25440(__this, ___result, method) (( KeyValuePair_2_t3852  (*) (Transform_1_t3862 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25441_gshared)(__this, ___result, method)
