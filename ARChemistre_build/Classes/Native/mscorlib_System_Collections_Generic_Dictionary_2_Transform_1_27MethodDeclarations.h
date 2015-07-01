﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
struct Transform_1_t3164;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t28;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t494;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m18112(__this, ___object, ___method, method) (( void (*) (Transform_1_t3164 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m15019_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18113(__this, ___key, ___value, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3164 *, Font_t28 *, List_1_t494 *, MethodInfo*))Transform_1_Invoke_m15020_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18114(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3164 *, Font_t28 *, List_1_t494 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m15021_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18115(__this, ___result, method) (( DictionaryEntry_t1298  (*) (Transform_1_t3164 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m15022_gshared)(__this, ___result, method)