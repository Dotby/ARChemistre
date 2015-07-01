#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t249;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15424_gshared (Comparison_1_t249 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m15424(__this, ___object, ___method, method) (( void (*) (Comparison_1_t249 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m15424_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15425_gshared (Comparison_1_t249 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15425(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t249 *, Object_t *, Object_t *, MethodInfo*))Comparison_1_Invoke_m15425_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15426_gshared (Comparison_1_t249 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15426(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t249 *, Object_t *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15426_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15427_gshared (Comparison_1_t249 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15427(__this, ___result, method) (( int32_t (*) (Comparison_1_t249 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15427_gshared)(__this, ___result, method)
