#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t472;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t473;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t462;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2801(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t472 *, UnityAction_1_t473 *, UnityAction_1_t473 *, MethodInfo*))ObjectPool_1__ctor_m16103_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m19804(__this, method) (( int32_t (*) (ObjectPool_1_t472 *, MethodInfo*))ObjectPool_1_get_countAll_m16105_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m19805(__this, ___value, method) (( void (*) (ObjectPool_1_t472 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m16107_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m19806(__this, method) (( int32_t (*) (ObjectPool_1_t472 *, MethodInfo*))ObjectPool_1_get_countActive_m16109_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m19807(__this, method) (( int32_t (*) (ObjectPool_1_t472 *, MethodInfo*))ObjectPool_1_get_countInactive_m16111_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2803(__this, method) (( List_1_t462 * (*) (ObjectPool_1_t472 *, MethodInfo*))ObjectPool_1_Get_m16113_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2804(__this, ___element, method) (( void (*) (ObjectPool_1_t472 *, List_1_t462 *, MethodInfo*))ObjectPool_1_Release_m16115_gshared)(__this, ___element, method)
