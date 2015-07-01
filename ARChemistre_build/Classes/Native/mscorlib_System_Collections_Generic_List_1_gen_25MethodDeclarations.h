#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.Trackable>
struct List_1_t838;
// System.Object
struct Object_t;
// Vuforia.Trackable
struct Trackable_t614;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t645;
// System.Collections.Generic.IEnumerator`1<Vuforia.Trackable>
struct IEnumerator_1_t847;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<Vuforia.Trackable>
struct ICollection_1_t4443;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.Trackable>
struct ReadOnlyCollection_1_t3482;
// Vuforia.Trackable[]
struct TrackableU5BU5D_t3465;
// System.Predicate`1<Vuforia.Trackable>
struct Predicate_1_t3484;
// System.Comparison`1<Vuforia.Trackable>
struct Comparison_1_t3487;
// System.Collections.Generic.List`1/Enumerator<Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m21113(__this, method) (( void (*) (List_1_t838 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m4801(__this, ___collection, method) (( void (*) (List_1_t838 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor(System.Int32)
#define List_1__ctor_m21114(__this, ___capacity, method) (( void (*) (List_1_t838 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.cctor()
#define List_1__cctor_m21115(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21116(__this, method) (( Object_t* (*) (List_1_t838 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21117(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t838 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21118(__this, method) (( Object_t * (*) (List_1_t838 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21119(__this, ___item, method) (( int32_t (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21120(__this, ___item, method) (( bool (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21121(__this, ___item, method) (( int32_t (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21122(__this, ___index, ___item, method) (( void (*) (List_1_t838 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21123(__this, ___item, method) (( void (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21124(__this, method) (( bool (*) (List_1_t838 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21125(__this, method) (( bool (*) (List_1_t838 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21126(__this, method) (( Object_t * (*) (List_1_t838 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21127(__this, method) (( bool (*) (List_1_t838 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21128(__this, method) (( bool (*) (List_1_t838 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21129(__this, ___index, method) (( Object_t * (*) (List_1_t838 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21130(__this, ___index, ___value, method) (( void (*) (List_1_t838 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Add(T)
#define List_1_Add_m21131(__this, ___item, method) (( void (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21132(__this, ___newCount, method) (( void (*) (List_1_t838 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21133(__this, ___collection, method) (( void (*) (List_1_t838 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21134(__this, ___enumerable, method) (( void (*) (List_1_t838 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21135(__this, ___collection, method) (( void (*) (List_1_t838 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.Trackable>::AsReadOnly()
#define List_1_AsReadOnly_m21136(__this, method) (( ReadOnlyCollection_1_t3482 * (*) (List_1_t838 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Clear()
#define List_1_Clear_m21137(__this, method) (( void (*) (List_1_t838 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::Contains(T)
#define List_1_Contains_m21138(__this, ___item, method) (( bool (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21139(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t838 *, TrackableU5BU5D_t3465*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.Trackable>::Find(System.Predicate`1<T>)
#define List_1_Find_m21140(__this, ___match, method) (( Object_t * (*) (List_1_t838 *, Predicate_1_t3484 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21141(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3484 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21142(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t838 *, int32_t, int32_t, Predicate_1_t3484 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.Trackable>::GetEnumerator()
#define List_1_GetEnumerator_m4810(__this, method) (( Enumerator_t839  (*) (List_1_t838 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::IndexOf(T)
#define List_1_IndexOf_m21143(__this, ___item, method) (( int32_t (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21144(__this, ___start, ___delta, method) (( void (*) (List_1_t838 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21145(__this, ___index, method) (( void (*) (List_1_t838 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Insert(System.Int32,T)
#define List_1_Insert_m21146(__this, ___index, ___item, method) (( void (*) (List_1_t838 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21147(__this, ___collection, method) (( void (*) (List_1_t838 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::Remove(T)
#define List_1_Remove_m21148(__this, ___item, method) (( bool (*) (List_1_t838 *, Object_t *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21149(__this, ___match, method) (( int32_t (*) (List_1_t838 *, Predicate_1_t3484 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21150(__this, ___index, method) (( void (*) (List_1_t838 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Reverse()
#define List_1_Reverse_m21151(__this, method) (( void (*) (List_1_t838 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Sort()
#define List_1_Sort_m21152(__this, method) (( void (*) (List_1_t838 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21153(__this, ___comparison, method) (( void (*) (List_1_t838 *, Comparison_1_t3487 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.Trackable>::ToArray()
#define List_1_ToArray_m21154(__this, method) (( TrackableU5BU5D_t3465* (*) (List_1_t838 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::TrimExcess()
#define List_1_TrimExcess_m21155(__this, method) (( void (*) (List_1_t838 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::get_Capacity()
#define List_1_get_Capacity_m21156(__this, method) (( int32_t (*) (List_1_t838 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21157(__this, ___value, method) (( void (*) (List_1_t838 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::get_Count()
#define List_1_get_Count_m21158(__this, method) (( int32_t (*) (List_1_t838 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.Trackable>::get_Item(System.Int32)
#define List_1_get_Item_m21159(__this, ___index, method) (( Object_t * (*) (List_1_t838 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::set_Item(System.Int32,T)
#define List_1_set_Item_m21160(__this, ___index, ___value, method) (( void (*) (List_1_t838 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
