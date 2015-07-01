#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,System.Collections.DictionaryEntry>
struct Transform_1_t3722;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m24039(__this, ___object, ___method, method) (( void (*) (Transform_1_t3722 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17105_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24040(__this, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3722 *, int32_t, SurfaceAbstractBehaviour_t103 *, MethodInfo*))Transform_1_Invoke_m17106_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24041(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3722 *, int32_t, SurfaceAbstractBehaviour_t103 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17107_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.SurfaceAbstractBehaviour,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24042(__this, ___result, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3722 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17108_gshared)(__this, ___result, method)
