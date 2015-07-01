#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t419;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t342;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t4406;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t4407;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t4408;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t3291;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t3280;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t3295;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t3298;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m2668(__this, method) (( void (*) (List_1_t419 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18948(__this, ___collection, method) (( void (*) (List_1_t419 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m18949(__this, ___capacity, method) (( void (*) (List_1_t419 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m18950(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18951(__this, method) (( Object_t* (*) (List_1_t419 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18952(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t419 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18953(__this, method) (( Object_t * (*) (List_1_t419 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18954(__this, ___item, method) (( int32_t (*) (List_1_t419 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18955(__this, ___item, method) (( bool (*) (List_1_t419 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18956(__this, ___item, method) (( int32_t (*) (List_1_t419 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18957(__this, ___index, ___item, method) (( void (*) (List_1_t419 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18958(__this, ___item, method) (( void (*) (List_1_t419 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18959(__this, method) (( bool (*) (List_1_t419 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18960(__this, method) (( bool (*) (List_1_t419 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18961(__this, method) (( Object_t * (*) (List_1_t419 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18962(__this, method) (( bool (*) (List_1_t419 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18963(__this, method) (( bool (*) (List_1_t419 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18964(__this, ___index, method) (( Object_t * (*) (List_1_t419 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18965(__this, ___index, ___value, method) (( void (*) (List_1_t419 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m2672(__this, ___item, method) (( void (*) (List_1_t419 *, Selectable_t342 *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18966(__this, ___newCount, method) (( void (*) (List_1_t419 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18967(__this, ___collection, method) (( void (*) (List_1_t419 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18968(__this, ___enumerable, method) (( void (*) (List_1_t419 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18969(__this, ___collection, method) (( void (*) (List_1_t419 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m18970(__this, method) (( ReadOnlyCollection_1_t3291 * (*) (List_1_t419 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m18971(__this, method) (( void (*) (List_1_t419 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m18972(__this, ___item, method) (( bool (*) (List_1_t419 *, Selectable_t342 *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18973(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t419 *, SelectableU5BU5D_t3280*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m18974(__this, ___match, method) (( Selectable_t342 * (*) (List_1_t419 *, Predicate_1_t3295 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18975(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3295 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18976(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t419 *, int32_t, int32_t, Predicate_1_t3295 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m18977(__this, method) (( Enumerator_t3289  (*) (List_1_t419 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m18978(__this, ___item, method) (( int32_t (*) (List_1_t419 *, Selectable_t342 *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18979(__this, ___start, ___delta, method) (( void (*) (List_1_t419 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18980(__this, ___index, method) (( void (*) (List_1_t419 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m18981(__this, ___index, ___item, method) (( void (*) (List_1_t419 *, int32_t, Selectable_t342 *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18982(__this, ___collection, method) (( void (*) (List_1_t419 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m2673(__this, ___item, method) (( bool (*) (List_1_t419 *, Selectable_t342 *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18983(__this, ___match, method) (( int32_t (*) (List_1_t419 *, Predicate_1_t3295 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18984(__this, ___index, method) (( void (*) (List_1_t419 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m18985(__this, method) (( void (*) (List_1_t419 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m18986(__this, method) (( void (*) (List_1_t419 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18987(__this, ___comparison, method) (( void (*) (List_1_t419 *, Comparison_1_t3298 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m18988(__this, method) (( SelectableU5BU5D_t3280* (*) (List_1_t419 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m18989(__this, method) (( void (*) (List_1_t419 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m18990(__this, method) (( int32_t (*) (List_1_t419 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18991(__this, ___value, method) (( void (*) (List_1_t419 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m2680(__this, method) (( int32_t (*) (List_1_t419 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m2678(__this, ___index, method) (( Selectable_t342 * (*) (List_1_t419 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m18992(__this, ___index, ___value, method) (( void (*) (List_1_t419 *, int32_t, Selectable_t342 *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
