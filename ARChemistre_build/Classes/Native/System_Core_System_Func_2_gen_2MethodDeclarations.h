#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Byte>
struct Func_2_t3345;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m19599_gshared (Func_2_t3345 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m19599(__this, ___object, ___method, method) (( void (*) (Func_2_t3345 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m19599_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m19601_gshared (Func_2_t3345 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m19601(__this, ___arg1, method) (( uint8_t (*) (Func_2_t3345 *, Object_t *, MethodInfo*))Func_2_Invoke_m19601_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m19603_gshared (Func_2_t3345 * __this, Object_t * ___arg1, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m19603(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3345 *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m19603_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m19605_gshared (Func_2_t3345 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m19605(__this, ___result, method) (( uint8_t (*) (Func_2_t3345 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m19605_gshared)(__this, ___result, method)
