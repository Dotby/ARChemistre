﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3079;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17105_gshared (Transform_1_t3079 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m17105(__this, ___object, ___method, method) (( void (*) (Transform_1_t3079 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17105_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1298  Transform_1_Invoke_m17106_gshared (Transform_1_t3079 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m17106(__this, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3079 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m17106_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17107_gshared (Transform_1_t3079 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m17107(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3079 *, int32_t, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17107_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1298  Transform_1_EndInvoke_m17108_gshared (Transform_1_t3079 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m17108(__this, ___result, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3079 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17108_gshared)(__this, ___result, method)