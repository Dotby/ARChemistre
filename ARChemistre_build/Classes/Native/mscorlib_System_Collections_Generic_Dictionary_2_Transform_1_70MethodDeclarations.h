#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,Vuforia.WordResult>
struct Transform_1_t3617;
// System.Object
struct Object_t;
// Vuforia.WordResult
struct WordResult_t761;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,Vuforia.WordResult>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
#define Transform_1__ctor_m22668(__this, ___object, ___method, method) (( void (*) (Transform_1_t3617 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17101_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,Vuforia.WordResult>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22669(__this, ___key, ___value, method) (( WordResult_t761 * (*) (Transform_1_t3617 *, int32_t, WordResult_t761 *, MethodInfo*))Transform_1_Invoke_m17102_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,Vuforia.WordResult>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22670(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3617 *, int32_t, WordResult_t761 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17103_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,Vuforia.WordResult>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22671(__this, ___result, method) (( WordResult_t761 * (*) (Transform_1_t3617 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17104_gshared)(__this, ___result, method)
