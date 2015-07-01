﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>
struct Transform_1_t4196;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_151MethodDeclarations.h"
#define Transform_1__ctor_m28823(__this, ___object, ___method, method) (( void (*) (Transform_1_t4196 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m28729_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m28824(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t4196 *, String_t*, bool, MethodInfo*))Transform_1_Invoke_m28730_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m28825(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4196 *, String_t*, bool, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m28731_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m28826(__this, ___result, method) (( String_t* (*) (Transform_1_t4196 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m28732_gshared)(__this, ___result, method)