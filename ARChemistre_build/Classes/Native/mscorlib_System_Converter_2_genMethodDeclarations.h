#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t4259;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m29277_gshared (Converter_2_t4259 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Converter_2__ctor_m29277(__this, ___object, ___method, method) (( void (*) (Converter_2_t4259 *, Object_t *, IntPtr_t, MethodInfo*))Converter_2__ctor_m29277_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m29278_gshared (Converter_2_t4259 * __this, Object_t * ___input, MethodInfo* method);
#define Converter_2_Invoke_m29278(__this, ___input, method) (( Object_t * (*) (Converter_2_t4259 *, Object_t *, MethodInfo*))Converter_2_Invoke_m29278_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m29279_gshared (Converter_2_t4259 * __this, Object_t * ___input, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Converter_2_BeginInvoke_m29279(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t4259 *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Converter_2_BeginInvoke_m29279_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m29280_gshared (Converter_2_t4259 * __this, Object_t * ___result, MethodInfo* method);
#define Converter_2_EndInvoke_m29280(__this, ___result, method) (( Object_t * (*) (Converter_2_t4259 *, Object_t *, MethodInfo*))Converter_2_EndInvoke_m29280_gshared)(__this, ___result, method)
