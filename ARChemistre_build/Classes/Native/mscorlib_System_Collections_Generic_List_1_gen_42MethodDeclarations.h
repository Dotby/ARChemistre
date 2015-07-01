#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.ImageTarget>
struct List_1_t3867;
// System.Object
struct Object_t;
// Vuforia.ImageTarget
struct ImageTarget_t632;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t791;
// System.Collections.Generic.IEnumerator`1<Vuforia.ImageTarget>
struct IEnumerator_1_t4503;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>
struct ICollection_1_t4504;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>
struct ReadOnlyCollection_1_t3870;
// Vuforia.ImageTarget[]
struct ImageTargetU5BU5D_t911;
// System.Predicate`1<Vuforia.ImageTarget>
struct Predicate_1_t3872;
// System.Comparison`1<Vuforia.ImageTarget>
struct Comparison_1_t3875;
// System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m25456(__this, method) (( void (*) (List_1_t3867 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25457(__this, ___collection, method) (( void (*) (List_1_t3867 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor(System.Int32)
#define List_1__ctor_m25458(__this, ___capacity, method) (( void (*) (List_1_t3867 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.cctor()
#define List_1__cctor_m25459(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25460(__this, method) (( Object_t* (*) (List_1_t3867 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25461(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3867 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25462(__this, method) (( Object_t * (*) (List_1_t3867 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25463(__this, ___item, method) (( int32_t (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25464(__this, ___item, method) (( bool (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25465(__this, ___item, method) (( int32_t (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25466(__this, ___index, ___item, method) (( void (*) (List_1_t3867 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25467(__this, ___item, method) (( void (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25468(__this, method) (( bool (*) (List_1_t3867 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25469(__this, method) (( bool (*) (List_1_t3867 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25470(__this, method) (( Object_t * (*) (List_1_t3867 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25471(__this, method) (( bool (*) (List_1_t3867 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25472(__this, method) (( bool (*) (List_1_t3867 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25473(__this, ___index, method) (( Object_t * (*) (List_1_t3867 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25474(__this, ___index, ___value, method) (( void (*) (List_1_t3867 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Add(T)
#define List_1_Add_m25475(__this, ___item, method) (( void (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25476(__this, ___newCount, method) (( void (*) (List_1_t3867 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25477(__this, ___collection, method) (( void (*) (List_1_t3867 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25478(__this, ___enumerable, method) (( void (*) (List_1_t3867 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25479(__this, ___collection, method) (( void (*) (List_1_t3867 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::AsReadOnly()
#define List_1_AsReadOnly_m25480(__this, method) (( ReadOnlyCollection_1_t3870 * (*) (List_1_t3867 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Clear()
#define List_1_Clear_m25481(__this, method) (( void (*) (List_1_t3867 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::Contains(T)
#define List_1_Contains_m25482(__this, ___item, method) (( bool (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25483(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3867 *, ImageTargetU5BU5D_t911*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.ImageTarget>::Find(System.Predicate`1<T>)
#define List_1_Find_m25484(__this, ___match, method) (( Object_t * (*) (List_1_t3867 *, Predicate_1_t3872 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25485(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3872 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25486(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3867 *, int32_t, int32_t, Predicate_1_t3872 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::GetEnumerator()
#define List_1_GetEnumerator_m25487(__this, method) (( Enumerator_t3868  (*) (List_1_t3867 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::IndexOf(T)
#define List_1_IndexOf_m25488(__this, ___item, method) (( int32_t (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25489(__this, ___start, ___delta, method) (( void (*) (List_1_t3867 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25490(__this, ___index, method) (( void (*) (List_1_t3867 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Insert(System.Int32,T)
#define List_1_Insert_m25491(__this, ___index, ___item, method) (( void (*) (List_1_t3867 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25492(__this, ___collection, method) (( void (*) (List_1_t3867 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::Remove(T)
#define List_1_Remove_m25493(__this, ___item, method) (( bool (*) (List_1_t3867 *, Object_t *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25494(__this, ___match, method) (( int32_t (*) (List_1_t3867 *, Predicate_1_t3872 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25495(__this, ___index, method) (( void (*) (List_1_t3867 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Reverse()
#define List_1_Reverse_m25496(__this, method) (( void (*) (List_1_t3867 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Sort()
#define List_1_Sort_m25497(__this, method) (( void (*) (List_1_t3867 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25498(__this, ___comparison, method) (( void (*) (List_1_t3867 *, Comparison_1_t3875 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.ImageTarget>::ToArray()
#define List_1_ToArray_m25499(__this, method) (( ImageTargetU5BU5D_t911* (*) (List_1_t3867 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::TrimExcess()
#define List_1_TrimExcess_m25500(__this, method) (( void (*) (List_1_t3867 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Capacity()
#define List_1_get_Capacity_m25501(__this, method) (( int32_t (*) (List_1_t3867 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25502(__this, ___value, method) (( void (*) (List_1_t3867 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Count()
#define List_1_get_Count_m25503(__this, method) (( int32_t (*) (List_1_t3867 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Item(System.Int32)
#define List_1_get_Item_m25504(__this, ___index, method) (( Object_t * (*) (List_1_t3867 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::set_Item(System.Int32,T)
#define List_1_set_Item_m25505(__this, ___index, ___value, method) (( void (*) (List_1_t3867 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
