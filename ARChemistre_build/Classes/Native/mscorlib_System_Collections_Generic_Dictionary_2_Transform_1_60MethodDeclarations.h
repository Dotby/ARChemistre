﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>
struct Transform_1_t3586;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m22416_gshared (Transform_1_t3586 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m22416(__this, ___object, ___method, method) (( void (*) (Transform_1_t3586 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m22416_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m22417_gshared (Transform_1_t3586 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m22417(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3586 *, Object_t *, uint16_t, MethodInfo*))Transform_1_Invoke_m22417_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m22418_gshared (Transform_1_t3586 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m22418(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3586 *, Object_t *, uint16_t, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m22418_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m22419_gshared (Transform_1_t3586 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m22419(__this, ___result, method) (( Object_t * (*) (Transform_1_t3586 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m22419_gshared)(__this, ___result, method)
