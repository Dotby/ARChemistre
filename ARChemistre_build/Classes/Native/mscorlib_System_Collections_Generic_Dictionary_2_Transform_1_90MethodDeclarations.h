#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,Vuforia.SurfaceAbstractBehaviour>
struct Transform_1_t3732;
// System.Object
struct Object_t;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t103;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,Vuforia.SurfaceAbstractBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
#define Transform_1__ctor_m24035(__this, ___object, ___method, method) (( void (*) (Transform_1_t3732 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17101_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,Vuforia.SurfaceAbstractBehaviour>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24036(__this, ___key, ___value, method) (( SurfaceAbstractBehaviour_t103 * (*) (Transform_1_t3732 *, int32_t, SurfaceAbstractBehaviour_t103 *, MethodInfo*))Transform_1_Invoke_m17102_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,Vuforia.SurfaceAbstractBehaviour>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24037(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3732 *, int32_t, SurfaceAbstractBehaviour_t103 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17103_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,Vuforia.SurfaceAbstractBehaviour>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24038(__this, ___result, method) (( SurfaceAbstractBehaviour_t103 * (*) (Transform_1_t3732 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17104_gshared)(__this, ___result, method)
