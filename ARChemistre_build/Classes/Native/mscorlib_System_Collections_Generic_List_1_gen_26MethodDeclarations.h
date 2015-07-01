#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t677;
// System.Object
struct Object_t;
// Vuforia.DataSetImpl
struct DataSetImpl_t626;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSetImpl>
struct IEnumerable_1_t4446;
// System.Collections.Generic.IEnumerator`1<Vuforia.DataSetImpl>
struct IEnumerator_1_t4447;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<Vuforia.DataSetImpl>
struct ICollection_1_t4448;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.DataSetImpl>
struct ReadOnlyCollection_1_t3505;
// Vuforia.DataSetImpl[]
struct DataSetImplU5BU5D_t3501;
// System.Predicate`1<Vuforia.DataSetImpl>
struct Predicate_1_t3509;
// System.Comparison`1<Vuforia.DataSetImpl>
struct Comparison_1_t3512;
// System.Collections.Generic.List`1/Enumerator<Vuforia.DataSetImpl>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m4850(__this, method) (( void (*) (List_1_t677 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m4866(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.ctor(System.Int32)
#define List_1__ctor_m21378(__this, ___capacity, method) (( void (*) (List_1_t677 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.cctor()
#define List_1__cctor_m21379(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21380(__this, method) (( Object_t* (*) (List_1_t677 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21381(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t677 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21382(__this, method) (( Object_t * (*) (List_1_t677 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21383(__this, ___item, method) (( int32_t (*) (List_1_t677 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21384(__this, ___item, method) (( bool (*) (List_1_t677 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21385(__this, ___item, method) (( int32_t (*) (List_1_t677 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21386(__this, ___index, ___item, method) (( void (*) (List_1_t677 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21387(__this, ___item, method) (( void (*) (List_1_t677 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21388(__this, method) (( bool (*) (List_1_t677 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21389(__this, method) (( bool (*) (List_1_t677 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21390(__this, method) (( Object_t * (*) (List_1_t677 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21391(__this, method) (( bool (*) (List_1_t677 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21392(__this, method) (( bool (*) (List_1_t677 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21393(__this, ___index, method) (( Object_t * (*) (List_1_t677 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21394(__this, ___index, ___value, method) (( void (*) (List_1_t677 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Add(T)
#define List_1_Add_m4863(__this, ___item, method) (( void (*) (List_1_t677 *, DataSetImpl_t626 *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21395(__this, ___newCount, method) (( void (*) (List_1_t677 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21396(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21397(__this, ___enumerable, method) (( void (*) (List_1_t677 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21398(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AsReadOnly()
#define List_1_AsReadOnly_m21399(__this, method) (( ReadOnlyCollection_1_t3505 * (*) (List_1_t677 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Clear()
#define List_1_Clear_m21400(__this, method) (( void (*) (List_1_t677 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Contains(T)
#define List_1_Contains_m21401(__this, ___item, method) (( bool (*) (List_1_t677 *, DataSetImpl_t626 *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21402(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t677 *, DataSetImplU5BU5D_t3501*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Find(System.Predicate`1<T>)
#define List_1_Find_m21403(__this, ___match, method) (( DataSetImpl_t626 * (*) (List_1_t677 *, Predicate_1_t3509 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21404(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3509 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21405(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t677 *, int32_t, int32_t, Predicate_1_t3509 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.DataSetImpl>::GetEnumerator()
#define List_1_GetEnumerator_m4875(__this, method) (( Enumerator_t846  (*) (List_1_t677 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::IndexOf(T)
#define List_1_IndexOf_m21406(__this, ___item, method) (( int32_t (*) (List_1_t677 *, DataSetImpl_t626 *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21407(__this, ___start, ___delta, method) (( void (*) (List_1_t677 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21408(__this, ___index, method) (( void (*) (List_1_t677 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Insert(System.Int32,T)
#define List_1_Insert_m21409(__this, ___index, ___item, method) (( void (*) (List_1_t677 *, int32_t, DataSetImpl_t626 *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21410(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Remove(T)
#define List_1_Remove_m4865(__this, ___item, method) (( bool (*) (List_1_t677 *, DataSetImpl_t626 *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21411(__this, ___match, method) (( int32_t (*) (List_1_t677 *, Predicate_1_t3509 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21412(__this, ___index, method) (( void (*) (List_1_t677 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Reverse()
#define List_1_Reverse_m21413(__this, method) (( void (*) (List_1_t677 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Sort()
#define List_1_Sort_m21414(__this, method) (( void (*) (List_1_t677 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21415(__this, ___comparison, method) (( void (*) (List_1_t677 *, Comparison_1_t3512 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.DataSetImpl>::ToArray()
#define List_1_ToArray_m21416(__this, method) (( DataSetImplU5BU5D_t3501* (*) (List_1_t677 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::TrimExcess()
#define List_1_TrimExcess_m21417(__this, method) (( void (*) (List_1_t677 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::get_Capacity()
#define List_1_get_Capacity_m21418(__this, method) (( int32_t (*) (List_1_t677 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21419(__this, ___value, method) (( void (*) (List_1_t677 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::get_Count()
#define List_1_get_Count_m21420(__this, method) (( int32_t (*) (List_1_t677 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.DataSetImpl>::get_Item(System.Int32)
#define List_1_get_Item_m21421(__this, ___index, method) (( DataSetImpl_t626 * (*) (List_1_t677 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::set_Item(System.Int32,T)
#define List_1_set_Item_m21422(__this, ___index, ___value, method) (( void (*) (List_1_t677 *, int32_t, DataSetImpl_t626 *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
