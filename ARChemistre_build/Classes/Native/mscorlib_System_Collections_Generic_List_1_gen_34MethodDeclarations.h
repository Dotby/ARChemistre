#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t756;
// System.Object
struct Object_t;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t86;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t751;
// System.Collections.Generic.IEnumerator`1<Vuforia.WordAbstractBehaviour>
struct IEnumerator_1_t878;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<Vuforia.WordAbstractBehaviour>
struct ICollection_1_t4468;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.WordAbstractBehaviour>
struct ReadOnlyCollection_1_t3655;
// Vuforia.WordAbstractBehaviour[]
struct WordAbstractBehaviourU5BU5D_t865;
// System.Predicate`1<Vuforia.WordAbstractBehaviour>
struct Predicate_1_t3657;
// System.Comparison`1<Vuforia.WordAbstractBehaviour>
struct Comparison_1_t3660;
// System.Collections.Generic.List`1/Enumerator<Vuforia.WordAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m5010(__this, method) (( void (*) (List_1_t756 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23103(__this, ___collection, method) (( void (*) (List_1_t756 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.ctor(System.Int32)
#define List_1__ctor_m23104(__this, ___capacity, method) (( void (*) (List_1_t756 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.cctor()
#define List_1__cctor_m23105(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23106(__this, method) (( Object_t* (*) (List_1_t756 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23107(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t756 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23108(__this, method) (( Object_t * (*) (List_1_t756 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23109(__this, ___item, method) (( int32_t (*) (List_1_t756 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23110(__this, ___item, method) (( bool (*) (List_1_t756 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23111(__this, ___item, method) (( int32_t (*) (List_1_t756 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23112(__this, ___index, ___item, method) (( void (*) (List_1_t756 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23113(__this, ___item, method) (( void (*) (List_1_t756 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23114(__this, method) (( bool (*) (List_1_t756 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23115(__this, method) (( bool (*) (List_1_t756 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23116(__this, method) (( Object_t * (*) (List_1_t756 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23117(__this, method) (( bool (*) (List_1_t756 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23118(__this, method) (( bool (*) (List_1_t756 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23119(__this, ___index, method) (( Object_t * (*) (List_1_t756 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23120(__this, ___index, ___value, method) (( void (*) (List_1_t756 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Add(T)
#define List_1_Add_m5016(__this, ___item, method) (( void (*) (List_1_t756 *, WordAbstractBehaviour_t86 *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23121(__this, ___newCount, method) (( void (*) (List_1_t756 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23122(__this, ___collection, method) (( void (*) (List_1_t756 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23123(__this, ___enumerable, method) (( void (*) (List_1_t756 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m5072(__this, ___collection, method) (( void (*) (List_1_t756 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AsReadOnly()
#define List_1_AsReadOnly_m23124(__this, method) (( ReadOnlyCollection_1_t3655 * (*) (List_1_t756 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Clear()
#define List_1_Clear_m5023(__this, method) (( void (*) (List_1_t756 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Contains(T)
#define List_1_Contains_m5012(__this, ___item, method) (( bool (*) (List_1_t756 *, WordAbstractBehaviour_t86 *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23125(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t756 *, WordAbstractBehaviourU5BU5D_t865*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Find(System.Predicate`1<T>)
#define List_1_Find_m23126(__this, ___match, method) (( WordAbstractBehaviour_t86 * (*) (List_1_t756 *, Predicate_1_t3657 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23127(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3657 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23128(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t756 *, int32_t, int32_t, Predicate_1_t3657 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m5075(__this, method) (( Enumerator_t864  (*) (List_1_t756 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::IndexOf(T)
#define List_1_IndexOf_m23129(__this, ___item, method) (( int32_t (*) (List_1_t756 *, WordAbstractBehaviour_t86 *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23130(__this, ___start, ___delta, method) (( void (*) (List_1_t756 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23131(__this, ___index, method) (( void (*) (List_1_t756 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Insert(System.Int32,T)
#define List_1_Insert_m23132(__this, ___index, ___item, method) (( void (*) (List_1_t756 *, int32_t, WordAbstractBehaviour_t86 *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23133(__this, ___collection, method) (( void (*) (List_1_t756 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Remove(T)
#define List_1_Remove_m5013(__this, ___item, method) (( bool (*) (List_1_t756 *, WordAbstractBehaviour_t86 *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23134(__this, ___match, method) (( int32_t (*) (List_1_t756 *, Predicate_1_t3657 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m5025(__this, ___index, method) (( void (*) (List_1_t756 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Reverse()
#define List_1_Reverse_m23135(__this, method) (( void (*) (List_1_t756 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Sort()
#define List_1_Sort_m23136(__this, method) (( void (*) (List_1_t756 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23137(__this, ___comparison, method) (( void (*) (List_1_t756 *, Comparison_1_t3660 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::ToArray()
#define List_1_ToArray_m23138(__this, method) (( WordAbstractBehaviourU5BU5D_t865* (*) (List_1_t756 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::TrimExcess()
#define List_1_TrimExcess_m23139(__this, method) (( void (*) (List_1_t756 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Capacity()
#define List_1_get_Capacity_m23140(__this, method) (( int32_t (*) (List_1_t756 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23141(__this, ___value, method) (( void (*) (List_1_t756 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Count()
#define List_1_get_Count_m5014(__this, method) (( int32_t (*) (List_1_t756 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m5024(__this, ___index, method) (( WordAbstractBehaviour_t86 * (*) (List_1_t756 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::set_Item(System.Int32,T)
#define List_1_set_Item_m23142(__this, ___index, ___value, method) (( void (*) (List_1_t756 *, int32_t, WordAbstractBehaviour_t86 *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
