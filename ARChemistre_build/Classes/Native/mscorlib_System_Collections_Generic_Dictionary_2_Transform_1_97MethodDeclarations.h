#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Prop,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>
struct Transform_1_t3746;
// System.Object
struct Object_t;
// Vuforia.Prop
struct Prop_t68;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Prop,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_98MethodDeclarations.h"
#define Transform_1__ctor_m24174(__this, ___object, ___method, method) (( void (*) (Transform_1_t3746 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24175_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Prop,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24176(__this, ___key, ___value, method) (( KeyValuePair_2_t884  (*) (Transform_1_t3746 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m24177_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Prop,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24178(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3746 *, int32_t, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m24179_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Prop,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24180(__this, ___result, method) (( KeyValuePair_2_t884  (*) (Transform_1_t3746 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m24181_gshared)(__this, ___result, method)
