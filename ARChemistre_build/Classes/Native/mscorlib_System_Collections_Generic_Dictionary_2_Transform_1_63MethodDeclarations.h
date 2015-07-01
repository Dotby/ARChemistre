#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Transform_1_t3590;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m22447_gshared (Transform_1_t3590 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m22447(__this, ___object, ___method, method) (( void (*) (Transform_1_t3590 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m22447_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3581  Transform_1_Invoke_m22448_gshared (Transform_1_t3590 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m22448(__this, ___key, ___value, method) (( KeyValuePair_2_t3581  (*) (Transform_1_t3590 *, Object_t *, uint16_t, MethodInfo*))Transform_1_Invoke_m22448_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m22449_gshared (Transform_1_t3590 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m22449(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3590 *, Object_t *, uint16_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m22449_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3581  Transform_1_EndInvoke_m22450_gshared (Transform_1_t3590 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m22450(__this, ___result, method) (( KeyValuePair_2_t3581  (*) (Transform_1_t3590 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m22450_gshared)(__this, ___result, method)
