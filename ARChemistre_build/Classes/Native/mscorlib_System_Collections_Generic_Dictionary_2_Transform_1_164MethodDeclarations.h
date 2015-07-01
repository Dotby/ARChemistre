#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>
struct Transform_1_t4232;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m29100_gshared (Transform_1_t4232 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m29100(__this, ___object, ___method, method) (( void (*) (Transform_1_t4232 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m29100_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4218  Transform_1_Invoke_m29102_gshared (Transform_1_t4232 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m29102(__this, ___key, ___value, method) (( KeyValuePair_2_t4218  (*) (Transform_1_t4232 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m29102_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m29104_gshared (Transform_1_t4232 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m29104(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4232 *, Object_t *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m29104_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4218  Transform_1_EndInvoke_m29106_gshared (Transform_1_t4232 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m29106(__this, ___result, method) (( KeyValuePair_2_t4218  (*) (Transform_1_t4232 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m29106_gshared)(__this, ___result, method)
