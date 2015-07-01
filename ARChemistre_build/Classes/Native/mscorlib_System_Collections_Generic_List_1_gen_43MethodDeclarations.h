#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t812;
// System.Object
struct Object_t;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t816;
// System.Collections.Generic.IEnumerable`1<Vuforia.ITrackerEventHandler>
struct IEnumerable_1_t4512;
// System.Collections.Generic.IEnumerator`1<Vuforia.ITrackerEventHandler>
struct IEnumerator_1_t4513;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>
struct ICollection_1_t4514;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>
struct ReadOnlyCollection_1_t3923;
// Vuforia.ITrackerEventHandler[]
struct ITrackerEventHandlerU5BU5D_t3920;
// System.Predicate`1<Vuforia.ITrackerEventHandler>
struct Predicate_1_t3927;
// System.Comparison`1<Vuforia.ITrackerEventHandler>
struct Comparison_1_t3930;
// System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m5437(__this, method) (( void (*) (List_1_t812 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25999(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor(System.Int32)
#define List_1__ctor_m26000(__this, ___capacity, method) (( void (*) (List_1_t812 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.cctor()
#define List_1__cctor_m26001(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26002(__this, method) (( Object_t* (*) (List_1_t812 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26003(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t812 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26004(__this, method) (( Object_t * (*) (List_1_t812 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26005(__this, ___item, method) (( int32_t (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26006(__this, ___item, method) (( bool (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26007(__this, ___item, method) (( int32_t (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26008(__this, ___index, ___item, method) (( void (*) (List_1_t812 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26009(__this, ___item, method) (( void (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26010(__this, method) (( bool (*) (List_1_t812 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26011(__this, method) (( bool (*) (List_1_t812 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26012(__this, method) (( Object_t * (*) (List_1_t812 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26013(__this, method) (( bool (*) (List_1_t812 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26014(__this, method) (( bool (*) (List_1_t812 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26015(__this, ___index, method) (( Object_t * (*) (List_1_t812 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26016(__this, ___index, ___value, method) (( void (*) (List_1_t812 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Add(T)
#define List_1_Add_m5399(__this, ___item, method) (( void (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26017(__this, ___newCount, method) (( void (*) (List_1_t812 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26018(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26019(__this, ___enumerable, method) (( void (*) (List_1_t812 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26020(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AsReadOnly()
#define List_1_AsReadOnly_m26021(__this, method) (( ReadOnlyCollection_1_t3923 * (*) (List_1_t812 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Clear()
#define List_1_Clear_m26022(__this, method) (( void (*) (List_1_t812 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Contains(T)
#define List_1_Contains_m26023(__this, ___item, method) (( bool (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26024(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t812 *, ITrackerEventHandlerU5BU5D_t3920*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m26025(__this, ___match, method) (( Object_t * (*) (List_1_t812 *, Predicate_1_t3927 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26026(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3927 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26027(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t812 *, int32_t, int32_t, Predicate_1_t3927 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GetEnumerator()
#define List_1_GetEnumerator_m5447(__this, method) (( Enumerator_t920  (*) (List_1_t812 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::IndexOf(T)
#define List_1_IndexOf_m26028(__this, ___item, method) (( int32_t (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26029(__this, ___start, ___delta, method) (( void (*) (List_1_t812 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26030(__this, ___index, method) (( void (*) (List_1_t812 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Insert(System.Int32,T)
#define List_1_Insert_m26031(__this, ___index, ___item, method) (( void (*) (List_1_t812 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26032(__this, ___collection, method) (( void (*) (List_1_t812 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Remove(T)
#define List_1_Remove_m5401(__this, ___item, method) (( bool (*) (List_1_t812 *, Object_t *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26033(__this, ___match, method) (( int32_t (*) (List_1_t812 *, Predicate_1_t3927 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26034(__this, ___index, method) (( void (*) (List_1_t812 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Reverse()
#define List_1_Reverse_m26035(__this, method) (( void (*) (List_1_t812 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Sort()
#define List_1_Sort_m26036(__this, method) (( void (*) (List_1_t812 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26037(__this, ___comparison, method) (( void (*) (List_1_t812 *, Comparison_1_t3930 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::ToArray()
#define List_1_ToArray_m26038(__this, method) (( ITrackerEventHandlerU5BU5D_t3920* (*) (List_1_t812 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::TrimExcess()
#define List_1_TrimExcess_m26039(__this, method) (( void (*) (List_1_t812 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Capacity()
#define List_1_get_Capacity_m26040(__this, method) (( int32_t (*) (List_1_t812 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26041(__this, ___value, method) (( void (*) (List_1_t812 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Count()
#define List_1_get_Count_m26042(__this, method) (( int32_t (*) (List_1_t812 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Item(System.Int32)
#define List_1_get_Item_m26043(__this, ___index, method) (( Object_t * (*) (List_1_t812 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m26044(__this, ___index, ___value, method) (( void (*) (List_1_t812 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
