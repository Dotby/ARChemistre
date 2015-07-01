#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t361;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4394;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4395;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t520;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3205;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t396;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3209;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3212;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2534_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1__ctor_m2534(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1__ctor_m2534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18163_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m18163(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1__ctor_m18163_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6905_gshared (List_1_t361 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m6905(__this, ___capacity, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1__ctor_m6905_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m18164_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m18164(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m18164_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18165_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18165(__this, method) (( Object_t* (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18166_gshared (List_1_t361 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18166(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t361 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18166_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18167_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18167(__this, method) (( Object_t * (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18167_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18168_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18168(__this, ___item, method) (( int32_t (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m18168_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18169_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18169(__this, ___item, method) (( bool (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m18169_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18170_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18170(__this, ___item, method) (( int32_t (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m18170_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18171_gshared (List_1_t361 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18171(__this, ___index, ___item, method) (( void (*) (List_1_t361 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m18171_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18172_gshared (List_1_t361 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18172(__this, ___item, method) (( void (*) (List_1_t361 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m18172_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18173_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18173(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18173_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18174_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18174(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18174_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18175_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18175(__this, method) (( Object_t * (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18175_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18176_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18176(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18176_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18177_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18177(__this, method) (( bool (*) (List_1_t361 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18177_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18178_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18178(__this, ___index, method) (( Object_t * (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m18178_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18179_gshared (List_1_t361 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18179(__this, ___index, ___value, method) (( void (*) (List_1_t361 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m18179_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m2422_gshared (List_1_t361 * __this, UIVertex_t380  ___item, MethodInfo* method);
#define List_1_Add_m2422(__this, ___item, method) (( void (*) (List_1_t361 *, UIVertex_t380 , MethodInfo*))List_1_Add_m2422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18180_gshared (List_1_t361 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m18180(__this, ___newCount, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m18180_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18181_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m18181(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_AddCollection_m18181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18182_gshared (List_1_t361 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m18182(__this, ___enumerable, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m18182_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18183_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m18183(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_AddRange_m18183_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3205 * List_1_AsReadOnly_m18184_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m18184(__this, method) (( ReadOnlyCollection_1_t3205 * (*) (List_1_t361 *, MethodInfo*))List_1_AsReadOnly_m18184_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m2432_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_Clear_m2432(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_Clear_m2432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m18185_gshared (List_1_t361 * __this, UIVertex_t380  ___item, MethodInfo* method);
#define List_1_Contains_m18185(__this, ___item, method) (( bool (*) (List_1_t361 *, UIVertex_t380 , MethodInfo*))List_1_Contains_m18185_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18186_gshared (List_1_t361 * __this, UIVertexU5BU5D_t396* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m18186(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t361 *, UIVertexU5BU5D_t396*, int32_t, MethodInfo*))List_1_CopyTo_m18186_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t380  List_1_Find_m18187_gshared (List_1_t361 * __this, Predicate_1_t3209 * ___match, MethodInfo* method);
#define List_1_Find_m18187(__this, ___match, method) (( UIVertex_t380  (*) (List_1_t361 *, Predicate_1_t3209 *, MethodInfo*))List_1_Find_m18187_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18188_gshared (Object_t * __this /* static, unused */, Predicate_1_t3209 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m18188(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3209 *, MethodInfo*))List_1_CheckMatch_m18188_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18189_gshared (List_1_t361 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3209 * ___match, MethodInfo* method);
#define List_1_GetIndex_m18189(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t361 *, int32_t, int32_t, Predicate_1_t3209 *, MethodInfo*))List_1_GetIndex_m18189_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3204  List_1_GetEnumerator_m18190_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m18190(__this, method) (( Enumerator_t3204  (*) (List_1_t361 *, MethodInfo*))List_1_GetEnumerator_m18190_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18191_gshared (List_1_t361 * __this, UIVertex_t380  ___item, MethodInfo* method);
#define List_1_IndexOf_m18191(__this, ___item, method) (( int32_t (*) (List_1_t361 *, UIVertex_t380 , MethodInfo*))List_1_IndexOf_m18191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18192_gshared (List_1_t361 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m18192(__this, ___start, ___delta, method) (( void (*) (List_1_t361 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m18192_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18193_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m18193(__this, ___index, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_CheckIndex_m18193_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18194_gshared (List_1_t361 * __this, int32_t ___index, UIVertex_t380  ___item, MethodInfo* method);
#define List_1_Insert_m18194(__this, ___index, ___item, method) (( void (*) (List_1_t361 *, int32_t, UIVertex_t380 , MethodInfo*))List_1_Insert_m18194_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18195_gshared (List_1_t361 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m18195(__this, ___collection, method) (( void (*) (List_1_t361 *, Object_t*, MethodInfo*))List_1_CheckCollection_m18195_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m18196_gshared (List_1_t361 * __this, UIVertex_t380  ___item, MethodInfo* method);
#define List_1_Remove_m18196(__this, ___item, method) (( bool (*) (List_1_t361 *, UIVertex_t380 , MethodInfo*))List_1_Remove_m18196_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18197_gshared (List_1_t361 * __this, Predicate_1_t3209 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m18197(__this, ___match, method) (( int32_t (*) (List_1_t361 *, Predicate_1_t3209 *, MethodInfo*))List_1_RemoveAll_m18197_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18198_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m18198(__this, ___index, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_RemoveAt_m18198_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m18199_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_Reverse_m18199(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_Reverse_m18199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m18200_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_Sort_m18200(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_Sort_m18200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18201_gshared (List_1_t361 * __this, Comparison_1_t3212 * ___comparison, MethodInfo* method);
#define List_1_Sort_m18201(__this, ___comparison, method) (( void (*) (List_1_t361 *, Comparison_1_t3212 *, MethodInfo*))List_1_Sort_m18201_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t396* List_1_ToArray_m2622_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_ToArray_m2622(__this, method) (( UIVertexU5BU5D_t396* (*) (List_1_t361 *, MethodInfo*))List_1_ToArray_m2622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m18202_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_TrimExcess_m18202(__this, method) (( void (*) (List_1_t361 *, MethodInfo*))List_1_TrimExcess_m18202_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2442_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_get_Capacity_m2442(__this, method) (( int32_t (*) (List_1_t361 *, MethodInfo*))List_1_get_Capacity_m2442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2443_gshared (List_1_t361 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m2443(__this, ___value, method) (( void (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_set_Capacity_m2443_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m2578_gshared (List_1_t361 * __this, MethodInfo* method);
#define List_1_get_Count_m2578(__this, method) (( int32_t (*) (List_1_t361 *, MethodInfo*))List_1_get_Count_m2578_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t380  List_1_get_Item_m2805_gshared (List_1_t361 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m2805(__this, ___index, method) (( UIVertex_t380  (*) (List_1_t361 *, int32_t, MethodInfo*))List_1_get_Item_m2805_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m2806_gshared (List_1_t361 * __this, int32_t ___index, UIVertex_t380  ___value, MethodInfo* method);
#define List_1_set_Item_m2806(__this, ___index, ___value, method) (( void (*) (List_1_t361 *, int32_t, UIVertex_t380 , MethodInfo*))List_1_set_Item_m2806_gshared)(__this, ___index, ___value, method)
