﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t2885;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15028_gshared (Transform_1_t2885 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m15028(__this, ___object, ___method, method) (( void (*) (Transform_1_t2885 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m15028_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2863  Transform_1_Invoke_m15029_gshared (Transform_1_t2885 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m15029(__this, ___key, ___value, method) (( KeyValuePair_2_t2863  (*) (Transform_1_t2885 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m15029_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15030_gshared (Transform_1_t2885 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m15030(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2885 *, Object_t *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m15030_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2863  Transform_1_EndInvoke_m15031_gshared (Transform_1_t2885 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m15031(__this, ___result, method) (( KeyValuePair_2_t2863  (*) (Transform_1_t2885 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m15031_gshared)(__this, ___result, method)