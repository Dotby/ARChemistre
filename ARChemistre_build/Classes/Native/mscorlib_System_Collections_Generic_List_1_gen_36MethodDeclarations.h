#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t785;
// System.Object
struct Object_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t70;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t199;
// System.Collections.Generic.IEnumerator`1<Vuforia.TrackableBehaviour>
struct IEnumerator_1_t200;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>
struct ICollection_1_t4475;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TrackableBehaviour>
struct ReadOnlyCollection_1_t3689;
// Vuforia.TrackableBehaviour[]
struct TrackableBehaviourU5BU5D_t854;
// System.Predicate`1<Vuforia.TrackableBehaviour>
struct Predicate_1_t3693;
// System.Comparison`1<Vuforia.TrackableBehaviour>
struct Comparison_1_t3696;
// System.Collections.Generic.List`1/Enumerator<Vuforia.TrackableBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_49.h"

// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m5119(__this, method) (( void (*) (List_1_t785 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23504(__this, ___collection, method) (( void (*) (List_1_t785 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.ctor(System.Int32)
#define List_1__ctor_m23505(__this, ___capacity, method) (( void (*) (List_1_t785 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.cctor()
#define List_1__cctor_m23506(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23507(__this, method) (( Object_t* (*) (List_1_t785 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23508(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t785 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23509(__this, method) (( Object_t * (*) (List_1_t785 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23510(__this, ___item, method) (( int32_t (*) (List_1_t785 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23511(__this, ___item, method) (( bool (*) (List_1_t785 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23512(__this, ___item, method) (( int32_t (*) (List_1_t785 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23513(__this, ___index, ___item, method) (( void (*) (List_1_t785 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23514(__this, ___item, method) (( void (*) (List_1_t785 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23515(__this, method) (( bool (*) (List_1_t785 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23516(__this, method) (( bool (*) (List_1_t785 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23517(__this, method) (( Object_t * (*) (List_1_t785 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23518(__this, method) (( bool (*) (List_1_t785 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23519(__this, method) (( bool (*) (List_1_t785 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23520(__this, ___index, method) (( Object_t * (*) (List_1_t785 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23521(__this, ___index, ___value, method) (( void (*) (List_1_t785 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Add(T)
#define List_1_Add_m5118(__this, ___item, method) (( void (*) (List_1_t785 *, TrackableBehaviour_t70 *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23522(__this, ___newCount, method) (( void (*) (List_1_t785 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23523(__this, ___collection, method) (( void (*) (List_1_t785 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23524(__this, ___enumerable, method) (( void (*) (List_1_t785 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23525(__this, ___collection, method) (( void (*) (List_1_t785 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AsReadOnly()
#define List_1_AsReadOnly_m23526(__this, method) (( ReadOnlyCollection_1_t3689 * (*) (List_1_t785 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Clear()
#define List_1_Clear_m5252(__this, method) (( void (*) (List_1_t785 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Contains(T)
#define List_1_Contains_m5237(__this, ___item, method) (( bool (*) (List_1_t785 *, TrackableBehaviour_t70 *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23527(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t785 *, TrackableBehaviourU5BU5D_t854*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Find(System.Predicate`1<T>)
#define List_1_Find_m23528(__this, ___match, method) (( TrackableBehaviour_t70 * (*) (List_1_t785 *, Predicate_1_t3693 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23529(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3693 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23530(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t785 *, int32_t, int32_t, Predicate_1_t3693 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m23531(__this, method) (( Enumerator_t3687  (*) (List_1_t785 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::IndexOf(T)
#define List_1_IndexOf_m23532(__this, ___item, method) (( int32_t (*) (List_1_t785 *, TrackableBehaviour_t70 *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23533(__this, ___start, ___delta, method) (( void (*) (List_1_t785 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23534(__this, ___index, method) (( void (*) (List_1_t785 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Insert(System.Int32,T)
#define List_1_Insert_m23535(__this, ___index, ___item, method) (( void (*) (List_1_t785 *, int32_t, TrackableBehaviour_t70 *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23536(__this, ___collection, method) (( void (*) (List_1_t785 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Remove(T)
#define List_1_Remove_m5238(__this, ___item, method) (( bool (*) (List_1_t785 *, TrackableBehaviour_t70 *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23537(__this, ___match, method) (( int32_t (*) (List_1_t785 *, Predicate_1_t3693 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23538(__this, ___index, method) (( void (*) (List_1_t785 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Reverse()
#define List_1_Reverse_m23539(__this, method) (( void (*) (List_1_t785 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Sort()
#define List_1_Sort_m23540(__this, method) (( void (*) (List_1_t785 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23541(__this, ___comparison, method) (( void (*) (List_1_t785 *, Comparison_1_t3696 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::ToArray()
#define List_1_ToArray_m23542(__this, method) (( TrackableBehaviourU5BU5D_t854* (*) (List_1_t785 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::TrimExcess()
#define List_1_TrimExcess_m23543(__this, method) (( void (*) (List_1_t785 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::get_Capacity()
#define List_1_get_Capacity_m23544(__this, method) (( int32_t (*) (List_1_t785 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23545(__this, ___value, method) (( void (*) (List_1_t785 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::get_Count()
#define List_1_get_Count_m23546(__this, method) (( int32_t (*) (List_1_t785 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m23547(__this, ___index, method) (( TrackableBehaviour_t70 * (*) (List_1_t785 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::set_Item(System.Int32,T)
#define List_1_set_Item_m23548(__this, ___index, ___value, method) (( void (*) (List_1_t785 *, int32_t, TrackableBehaviour_t70 *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
