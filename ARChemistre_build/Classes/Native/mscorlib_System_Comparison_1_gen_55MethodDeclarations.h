#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t4093;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m27873_gshared (Comparison_1_t4093 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m27873(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4093 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m27873_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m27874_gshared (Comparison_1_t4093 * __this, UICharInfo_t512  ___x, UICharInfo_t512  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m27874(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4093 *, UICharInfo_t512 , UICharInfo_t512 , MethodInfo*))Comparison_1_Invoke_m27874_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m27875_gshared (Comparison_1_t4093 * __this, UICharInfo_t512  ___x, UICharInfo_t512  ___y, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m27875(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4093 *, UICharInfo_t512 , UICharInfo_t512 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m27875_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m27876_gshared (Comparison_1_t4093 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m27876(__this, ___result, method) (( int32_t (*) (Comparison_1_t4093 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m27876_gshared)(__this, ___result, method)
