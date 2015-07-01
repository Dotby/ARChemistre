#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3124;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t208;
// System.Object[]
struct ObjectU5BU5D_t164;
// System.Predicate`1<System.Object>
struct Predicate_1_t2919;
// System.Comparison`1<System.Object>
struct Comparison_1_t249;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m17394_gshared (IndexedSet_1_t3124 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m17394(__this, method) (( void (*) (IndexedSet_1_t3124 *, MethodInfo*))IndexedSet_1__ctor_m17394_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17396_gshared (IndexedSet_1_t3124 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17396(__this, method) (( Object_t * (*) (IndexedSet_1_t3124 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17396_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m17397_gshared (IndexedSet_1_t3124 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m17397(__this, ___item, method) (( void (*) (IndexedSet_1_t3124 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m17397_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m17398_gshared (IndexedSet_1_t3124 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m17398(__this, ___item, method) (( bool (*) (IndexedSet_1_t3124 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m17398_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m17400_gshared (IndexedSet_1_t3124 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m17400(__this, method) (( Object_t* (*) (IndexedSet_1_t3124 *, MethodInfo*))IndexedSet_1_GetEnumerator_m17400_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m17401_gshared (IndexedSet_1_t3124 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m17401(__this, method) (( void (*) (IndexedSet_1_t3124 *, MethodInfo*))IndexedSet_1_Clear_m17401_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m17403_gshared (IndexedSet_1_t3124 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m17403(__this, ___item, method) (( bool (*) (IndexedSet_1_t3124 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m17403_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m17405_gshared (IndexedSet_1_t3124 * __this, ObjectU5BU5D_t164* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m17405(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3124 *, ObjectU5BU5D_t164*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m17405_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m17406_gshared (IndexedSet_1_t3124 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m17406(__this, method) (( int32_t (*) (IndexedSet_1_t3124 *, MethodInfo*))IndexedSet_1_get_Count_m17406_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m17408_gshared (IndexedSet_1_t3124 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m17408(__this, method) (( bool (*) (IndexedSet_1_t3124 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m17408_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m17410_gshared (IndexedSet_1_t3124 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m17410(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3124 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m17410_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m17412_gshared (IndexedSet_1_t3124 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m17412(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3124 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m17412_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m17414_gshared (IndexedSet_1_t3124 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m17414(__this, ___index, method) (( void (*) (IndexedSet_1_t3124 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m17414_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m17415_gshared (IndexedSet_1_t3124 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m17415(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3124 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m17415_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m17417_gshared (IndexedSet_1_t3124 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m17417(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3124 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m17417_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m17418_gshared (IndexedSet_1_t3124 * __this, Predicate_1_t2919 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m17418(__this, ___match, method) (( void (*) (IndexedSet_1_t3124 *, Predicate_1_t2919 *, MethodInfo*))IndexedSet_1_RemoveAll_m17418_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m17419_gshared (IndexedSet_1_t3124 * __this, Comparison_1_t249 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m17419(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3124 *, Comparison_1_t249 *, MethodInfo*))IndexedSet_1_Sort_m17419_gshared)(__this, ___sortLayoutFunction, method)
