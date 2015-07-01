#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
struct Transform_1_t4182;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m28729_gshared (Transform_1_t4182 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m28729(__this, ___object, ___method, method) (( void (*) (Transform_1_t4182 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m28729_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m28730_gshared (Transform_1_t4182 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m28730(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t4182 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m28730_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m28731_gshared (Transform_1_t4182 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m28731(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4182 *, Object_t *, uint8_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m28731_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m28732_gshared (Transform_1_t4182 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m28732(__this, ___result, method) (( Object_t * (*) (Transform_1_t4182 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m28732_gshared)(__this, ___result, method)
