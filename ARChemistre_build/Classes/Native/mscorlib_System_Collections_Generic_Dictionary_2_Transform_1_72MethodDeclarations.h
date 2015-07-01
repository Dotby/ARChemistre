#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>
struct Transform_1_t3618;
// System.Object
struct Object_t;
// Vuforia.WordResult
struct WordResult_t761;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_73MethodDeclarations.h"
#define Transform_1__ctor_m22676(__this, ___object, ___method, method) (( void (*) (Transform_1_t3618 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m22677_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22678(__this, ___key, ___value, method) (( KeyValuePair_2_t3610  (*) (Transform_1_t3618 *, int32_t, WordResult_t761 *, MethodInfo*))Transform_1_Invoke_m22679_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22680(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3618 *, int32_t, WordResult_t761 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m22681_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22682(__this, ___result, method) (( KeyValuePair_2_t3610  (*) (Transform_1_t3618 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m22683_gshared)(__this, ___result, method)
