﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
struct Transform_1_t4185;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m28752_gshared (Transform_1_t4185 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m28752(__this, ___object, ___method, method) (( void (*) (Transform_1_t4185 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m28752_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m28753_gshared (Transform_1_t4185 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m28753(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t4185 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m28753_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m28754_gshared (Transform_1_t4185 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m28754(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4185 *, Object_t *, uint8_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m28754_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m28755_gshared (Transform_1_t4185 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m28755(__this, ___result, method) (( uint8_t (*) (Transform_1_t4185 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m28755_gshared)(__this, ___result, method)