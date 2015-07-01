#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t175;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t1563;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
struct IEnumerator_1_t1560;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
struct ICollection_1_t4348;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>
struct ReadOnlyCollection_1_t2962;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t168;
// System.Predicate`1<System.Reflection.MethodInfo>
struct Predicate_1_t2966;
// System.Comparison`1<System.Reflection.MethodInfo>
struct Comparison_1_t2969;
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m15597(__this, method) (( void (*) (List_1_t175 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m15598(__this, ___collection, method) (( void (*) (List_1_t175 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Int32)
#define List_1__ctor_m15599(__this, ___capacity, method) (( void (*) (List_1_t175 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.cctor()
#define List_1__cctor_m15600(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15601(__this, method) (( Object_t* (*) (List_1_t175 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15602(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t175 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15603(__this, method) (( Object_t * (*) (List_1_t175 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15604(__this, ___item, method) (( int32_t (*) (List_1_t175 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15605(__this, ___item, method) (( bool (*) (List_1_t175 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15606(__this, ___item, method) (( int32_t (*) (List_1_t175 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15607(__this, ___index, ___item, method) (( void (*) (List_1_t175 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15608(__this, ___item, method) (( void (*) (List_1_t175 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15609(__this, method) (( bool (*) (List_1_t175 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15610(__this, method) (( bool (*) (List_1_t175 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15611(__this, method) (( Object_t * (*) (List_1_t175 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15612(__this, method) (( bool (*) (List_1_t175 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15613(__this, method) (( bool (*) (List_1_t175 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15614(__this, ___index, method) (( Object_t * (*) (List_1_t175 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15615(__this, ___index, ___value, method) (( void (*) (List_1_t175 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(T)
#define List_1_Add_m15616(__this, ___item, method) (( void (*) (List_1_t175 *, MethodInfo_t *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15617(__this, ___newCount, method) (( void (*) (List_1_t175 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15618(__this, ___collection, method) (( void (*) (List_1_t175 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15619(__this, ___enumerable, method) (( void (*) (List_1_t175 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m575(__this, ___collection, method) (( void (*) (List_1_t175 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AsReadOnly()
#define List_1_AsReadOnly_m15620(__this, method) (( ReadOnlyCollection_1_t2962 * (*) (List_1_t175 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Clear()
#define List_1_Clear_m15621(__this, method) (( void (*) (List_1_t175 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Contains(T)
#define List_1_Contains_m15622(__this, ___item, method) (( bool (*) (List_1_t175 *, MethodInfo_t *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15623(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t175 *, MethodInfoU5BU5D_t168*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m15624(__this, ___match, method) (( MethodInfo_t * (*) (List_1_t175 *, Predicate_1_t2966 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15625(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2966 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15626(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t175 *, int32_t, int32_t, Predicate_1_t2966 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetEnumerator()
#define List_1_GetEnumerator_m576(__this, method) (( Enumerator_t170  (*) (List_1_t175 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::IndexOf(T)
#define List_1_IndexOf_m15627(__this, ___item, method) (( int32_t (*) (List_1_t175 *, MethodInfo_t *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15628(__this, ___start, ___delta, method) (( void (*) (List_1_t175 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15629(__this, ___index, method) (( void (*) (List_1_t175 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
#define List_1_Insert_m15630(__this, ___index, ___item, method) (( void (*) (List_1_t175 *, int32_t, MethodInfo_t *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15631(__this, ___collection, method) (( void (*) (List_1_t175 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Remove(T)
#define List_1_Remove_m15632(__this, ___item, method) (( bool (*) (List_1_t175 *, MethodInfo_t *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15633(__this, ___match, method) (( int32_t (*) (List_1_t175 *, Predicate_1_t2966 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15634(__this, ___index, method) (( void (*) (List_1_t175 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Reverse()
#define List_1_Reverse_m15635(__this, method) (( void (*) (List_1_t175 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort()
#define List_1_Sort_m15636(__this, method) (( void (*) (List_1_t175 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15637(__this, ___comparison, method) (( void (*) (List_1_t175 *, Comparison_1_t2969 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Reflection.MethodInfo>::ToArray()
#define List_1_ToArray_m15638(__this, method) (( MethodInfoU5BU5D_t168* (*) (List_1_t175 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::TrimExcess()
#define List_1_TrimExcess_m15639(__this, method) (( void (*) (List_1_t175 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Capacity()
#define List_1_get_Capacity_m15640(__this, method) (( int32_t (*) (List_1_t175 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15641(__this, ___value, method) (( void (*) (List_1_t175 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Count()
#define List_1_get_Count_m15642(__this, method) (( int32_t (*) (List_1_t175 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
#define List_1_get_Item_m15643(__this, ___index, method) (( MethodInfo_t * (*) (List_1_t175 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m15644(__this, ___index, ___value, method) (( void (*) (List_1_t175 *, int32_t, MethodInfo_t *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
