#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>
struct Transform_1_t3761;
// System.Object
struct Object_t;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t95;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_103MethodDeclarations.h"
#define Transform_1__ctor_m24314(__this, ___object, ___method, method) (( void (*) (Transform_1_t3761 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24315_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24316(__this, ___key, ___value, method) (( KeyValuePair_2_t3752  (*) (Transform_1_t3761 *, int32_t, PropAbstractBehaviour_t95 *, MethodInfo*))Transform_1_Invoke_m24317_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24318(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3761 *, int32_t, PropAbstractBehaviour_t95 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m24319_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24320(__this, ___result, method) (( KeyValuePair_2_t3752  (*) (Transform_1_t3761 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m24321_gshared)(__this, ___result, method)
