#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t2374;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2213;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t4570;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t4571;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t4572;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t4314;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t4312;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t4318;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t4321;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_57.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m29537(__this, method) (( void (*) (List_1_t2374 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29538(__this, ___collection, method) (( void (*) (List_1_t2374 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m14096(__this, ___capacity, method) (( void (*) (List_1_t2374 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m29539(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29540(__this, method) (( Object_t* (*) (List_1_t2374 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29541(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2374 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29542(__this, method) (( Object_t * (*) (List_1_t2374 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29543(__this, ___item, method) (( int32_t (*) (List_1_t2374 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29544(__this, ___item, method) (( bool (*) (List_1_t2374 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29545(__this, ___item, method) (( int32_t (*) (List_1_t2374 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29546(__this, ___index, ___item, method) (( void (*) (List_1_t2374 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29547(__this, ___item, method) (( void (*) (List_1_t2374 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29548(__this, method) (( bool (*) (List_1_t2374 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29549(__this, method) (( bool (*) (List_1_t2374 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29550(__this, method) (( Object_t * (*) (List_1_t2374 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29551(__this, method) (( bool (*) (List_1_t2374 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29552(__this, method) (( bool (*) (List_1_t2374 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29553(__this, ___index, method) (( Object_t * (*) (List_1_t2374 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29554(__this, ___index, ___value, method) (( void (*) (List_1_t2374 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m29555(__this, ___item, method) (( void (*) (List_1_t2374 *, StrongName_t2213 *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29556(__this, ___newCount, method) (( void (*) (List_1_t2374 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29557(__this, ___collection, method) (( void (*) (List_1_t2374 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29558(__this, ___enumerable, method) (( void (*) (List_1_t2374 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29559(__this, ___collection, method) (( void (*) (List_1_t2374 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m29560(__this, method) (( ReadOnlyCollection_1_t4314 * (*) (List_1_t2374 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m29561(__this, method) (( void (*) (List_1_t2374 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m29562(__this, ___item, method) (( bool (*) (List_1_t2374 *, StrongName_t2213 *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29563(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2374 *, StrongNameU5BU5D_t4312*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m29564(__this, ___match, method) (( StrongName_t2213 * (*) (List_1_t2374 *, Predicate_1_t4318 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29565(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4318 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29566(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2374 *, int32_t, int32_t, Predicate_1_t4318 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m29567(__this, method) (( Enumerator_t4313  (*) (List_1_t2374 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m29568(__this, ___item, method) (( int32_t (*) (List_1_t2374 *, StrongName_t2213 *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29569(__this, ___start, ___delta, method) (( void (*) (List_1_t2374 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29570(__this, ___index, method) (( void (*) (List_1_t2374 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m29571(__this, ___index, ___item, method) (( void (*) (List_1_t2374 *, int32_t, StrongName_t2213 *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29572(__this, ___collection, method) (( void (*) (List_1_t2374 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m29573(__this, ___item, method) (( bool (*) (List_1_t2374 *, StrongName_t2213 *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29574(__this, ___match, method) (( int32_t (*) (List_1_t2374 *, Predicate_1_t4318 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29575(__this, ___index, method) (( void (*) (List_1_t2374 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m29576(__this, method) (( void (*) (List_1_t2374 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m29577(__this, method) (( void (*) (List_1_t2374 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29578(__this, ___comparison, method) (( void (*) (List_1_t2374 *, Comparison_1_t4321 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m29579(__this, method) (( StrongNameU5BU5D_t4312* (*) (List_1_t2374 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m29580(__this, method) (( void (*) (List_1_t2374 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m29581(__this, method) (( int32_t (*) (List_1_t2374 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29582(__this, ___value, method) (( void (*) (List_1_t2374 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m29583(__this, method) (( int32_t (*) (List_1_t2374 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m29584(__this, ___index, method) (( StrongName_t2213 * (*) (List_1_t2374 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m29585(__this, ___index, ___value, method) (( void (*) (List_1_t2374 *, int32_t, StrongName_t2213 *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
