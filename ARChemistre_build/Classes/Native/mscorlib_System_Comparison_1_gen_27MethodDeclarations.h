#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int32>
struct Comparison_1_t3456;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m20884_gshared (Comparison_1_t3456 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m20884(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3456 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m20884_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m20885_gshared (Comparison_1_t3456 * __this, int32_t ___x, int32_t ___y, MethodInfo* method);
#define Comparison_1_Invoke_m20885(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3456 *, int32_t, int32_t, MethodInfo*))Comparison_1_Invoke_m20885_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m20886_gshared (Comparison_1_t3456 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m20886(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3456 *, int32_t, int32_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m20886_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m20887_gshared (Comparison_1_t3456 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m20887(__this, ___result, method) (( int32_t (*) (Comparison_1_t3456 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m20887_gshared)(__this, ___result, method)
