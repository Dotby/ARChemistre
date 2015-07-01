#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>>
struct Transform_1_t3734;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m24044_gshared (Transform_1_t3734 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m24044(__this, ___object, ___method, method) (( void (*) (Transform_1_t3734 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24044_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3723  Transform_1_Invoke_m24046_gshared (Transform_1_t3734 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m24046(__this, ___key, ___value, method) (( KeyValuePair_2_t3723  (*) (Transform_1_t3734 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m24046_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m24048_gshared (Transform_1_t3734 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m24048(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3734 *, int32_t, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m24048_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3723  Transform_1_EndInvoke_m24050_gshared (Transform_1_t3734 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m24050(__this, ___result, method) (( KeyValuePair_2_t3723  (*) (Transform_1_t3734 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m24050_gshared)(__this, ___result, method)
