#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.Canvas>
struct Transform_1_t3261;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t356;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t503;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.Canvas>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m18840(__this, ___object, ___method, method) (( void (*) (Transform_1_t3261 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14996_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.Canvas>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18841(__this, ___key, ___value, method) (( Canvas_t356 * (*) (Transform_1_t3261 *, Canvas_t356 *, IndexedSet_1_t503 *, MethodInfo*))Transform_1_Invoke_m14997_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.Canvas>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18842(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3261 *, Canvas_t356 *, IndexedSet_1_t503 *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14998_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.Canvas>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18843(__this, ___result, method) (( Canvas_t356 * (*) (Transform_1_t3261 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14999_gshared)(__this, ___result, method)
