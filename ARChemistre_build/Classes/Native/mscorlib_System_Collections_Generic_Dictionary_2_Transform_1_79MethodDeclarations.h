﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.String>
struct Transform_1_t3668;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t756;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m23311(__this, ___object, ___method, method) (( void (*) (Transform_1_t3668 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14996_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23312(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3668 *, String_t*, List_1_t756 *, MethodInfo*))Transform_1_Invoke_m14997_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23313(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3668 *, String_t*, List_1_t756 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14998_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23314(__this, ___result, method) (( String_t* (*) (Transform_1_t3668 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14999_gshared)(__this, ___result, method)
