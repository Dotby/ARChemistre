#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t815;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t4427;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t4428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t4429;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t3403;
// System.Type[]
struct TypeU5BU5D_t913;
// System.Predicate`1<System.Type>
struct Predicate_1_t3407;
// System.Comparison`1<System.Type>
struct Comparison_1_t3410;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m5439(__this, method) (( void (*) (List_1_t815 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20156(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m20157(__this, ___capacity, method) (( void (*) (List_1_t815 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m20158(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20159(__this, method) (( Object_t* (*) (List_1_t815 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20160(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t815 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20161(__this, method) (( Object_t * (*) (List_1_t815 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20162(__this, ___item, method) (( int32_t (*) (List_1_t815 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20163(__this, ___item, method) (( bool (*) (List_1_t815 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20164(__this, ___item, method) (( int32_t (*) (List_1_t815 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20165(__this, ___index, ___item, method) (( void (*) (List_1_t815 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20166(__this, ___item, method) (( void (*) (List_1_t815 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20167(__this, method) (( bool (*) (List_1_t815 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20168(__this, method) (( bool (*) (List_1_t815 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20169(__this, method) (( Object_t * (*) (List_1_t815 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20170(__this, method) (( bool (*) (List_1_t815 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20171(__this, method) (( bool (*) (List_1_t815 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20172(__this, ___index, method) (( Object_t * (*) (List_1_t815 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20173(__this, ___index, ___value, method) (( void (*) (List_1_t815 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m6912(__this, ___item, method) (( void (*) (List_1_t815 *, Type_t *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20174(__this, ___newCount, method) (( void (*) (List_1_t815 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20175(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20176(__this, ___enumerable, method) (( void (*) (List_1_t815 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20177(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m20178(__this, method) (( ReadOnlyCollection_1_t3403 * (*) (List_1_t815 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m5436(__this, method) (( void (*) (List_1_t815 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m20179(__this, ___item, method) (( bool (*) (List_1_t815 *, Type_t *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20180(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t815 *, TypeU5BU5D_t913*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m20181(__this, ___match, method) (( Type_t * (*) (List_1_t815 *, Predicate_1_t3407 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20182(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3407 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20183(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t815 *, int32_t, int32_t, Predicate_1_t3407 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m5450(__this, method) (( Enumerator_t921  (*) (List_1_t815 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m20184(__this, ___item, method) (( int32_t (*) (List_1_t815 *, Type_t *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20185(__this, ___start, ___delta, method) (( void (*) (List_1_t815 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20186(__this, ___index, method) (( void (*) (List_1_t815 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m20187(__this, ___index, ___item, method) (( void (*) (List_1_t815 *, int32_t, Type_t *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20188(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m20189(__this, ___item, method) (( bool (*) (List_1_t815 *, Type_t *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20190(__this, ___match, method) (( int32_t (*) (List_1_t815 *, Predicate_1_t3407 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20191(__this, ___index, method) (( void (*) (List_1_t815 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m20192(__this, method) (( void (*) (List_1_t815 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m20193(__this, method) (( void (*) (List_1_t815 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20194(__this, ___comparison, method) (( void (*) (List_1_t815 *, Comparison_1_t3410 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m6915(__this, method) (( TypeU5BU5D_t913* (*) (List_1_t815 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m20195(__this, method) (( void (*) (List_1_t815 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m20196(__this, method) (( int32_t (*) (List_1_t815 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20197(__this, ___value, method) (( void (*) (List_1_t815 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m5435(__this, method) (( int32_t (*) (List_1_t815 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m20198(__this, ___index, method) (( Type_t * (*) (List_1_t815 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m20199(__this, ___index, ___value, method) (( void (*) (List_1_t815 *, int32_t, Type_t *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
