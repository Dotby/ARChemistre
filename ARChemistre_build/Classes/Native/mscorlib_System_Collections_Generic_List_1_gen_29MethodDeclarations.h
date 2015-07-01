#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t784;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4439;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4374;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4440;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3451;
// System.Int32[]
struct Int32U5BU5D_t186;
// System.Predicate`1<System.Int32>
struct Predicate_1_t3453;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3456;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m5033_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1__ctor_m5033(__this, method) (( void (*) (List_1_t784 *, MethodInfo*))List_1__ctor_m5033_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m4913_gshared (List_1_t784 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m4913(__this, ___collection, method) (( void (*) (List_1_t784 *, Object_t*, MethodInfo*))List_1__ctor_m4913_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m20717_gshared (List_1_t784 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m20717(__this, ___capacity, method) (( void (*) (List_1_t784 *, int32_t, MethodInfo*))List_1__ctor_m20717_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m20719_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m20719(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m20719_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20721_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20721(__this, method) (( Object_t* (*) (List_1_t784 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20721_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20723_gshared (List_1_t784 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20723(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t784 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20723_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20725_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20725(__this, method) (( Object_t * (*) (List_1_t784 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20725_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20727_gshared (List_1_t784 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20727(__this, ___item, method) (( int32_t (*) (List_1_t784 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m20727_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20729_gshared (List_1_t784 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20729(__this, ___item, method) (( bool (*) (List_1_t784 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m20729_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20731_gshared (List_1_t784 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20731(__this, ___item, method) (( int32_t (*) (List_1_t784 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m20731_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20733_gshared (List_1_t784 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20733(__this, ___index, ___item, method) (( void (*) (List_1_t784 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m20733_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20735_gshared (List_1_t784 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20735(__this, ___item, method) (( void (*) (List_1_t784 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m20735_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20737_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20737(__this, method) (( bool (*) (List_1_t784 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20737_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20739_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20739(__this, method) (( bool (*) (List_1_t784 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20739_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20741_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20741(__this, method) (( Object_t * (*) (List_1_t784 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20741_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20743_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20743(__this, method) (( bool (*) (List_1_t784 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20743_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20745_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20745(__this, method) (( bool (*) (List_1_t784 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20745_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20747_gshared (List_1_t784 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20747(__this, ___index, method) (( Object_t * (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m20747_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20749_gshared (List_1_t784 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20749(__this, ___index, ___value, method) (( void (*) (List_1_t784 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m20749_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m5036_gshared (List_1_t784 * __this, int32_t ___item, MethodInfo* method);
#define List_1_Add_m5036(__this, ___item, method) (( void (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_Add_m5036_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20751_gshared (List_1_t784 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m20751(__this, ___newCount, method) (( void (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m20751_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20753_gshared (List_1_t784 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m20753(__this, ___collection, method) (( void (*) (List_1_t784 *, Object_t*, MethodInfo*))List_1_AddCollection_m20753_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20755_gshared (List_1_t784 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m20755(__this, ___enumerable, method) (( void (*) (List_1_t784 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m20755_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20757_gshared (List_1_t784 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m20757(__this, ___collection, method) (( void (*) (List_1_t784 *, Object_t*, MethodInfo*))List_1_AddRange_m20757_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3451 * List_1_AsReadOnly_m20759_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m20759(__this, method) (( ReadOnlyCollection_1_t3451 * (*) (List_1_t784 *, MethodInfo*))List_1_AsReadOnly_m20759_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m5253_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_Clear_m5253(__this, method) (( void (*) (List_1_t784 *, MethodInfo*))List_1_Clear_m5253_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m5037_gshared (List_1_t784 * __this, int32_t ___item, MethodInfo* method);
#define List_1_Contains_m5037(__this, ___item, method) (( bool (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_Contains_m5037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20762_gshared (List_1_t784 * __this, Int32U5BU5D_t186* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m20762(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t784 *, Int32U5BU5D_t186*, int32_t, MethodInfo*))List_1_CopyTo_m20762_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m20764_gshared (List_1_t784 * __this, Predicate_1_t3453 * ___match, MethodInfo* method);
#define List_1_Find_m20764(__this, ___match, method) (( int32_t (*) (List_1_t784 *, Predicate_1_t3453 *, MethodInfo*))List_1_Find_m20764_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20766_gshared (Object_t * __this /* static, unused */, Predicate_1_t3453 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m20766(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3453 *, MethodInfo*))List_1_CheckMatch_m20766_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20768_gshared (List_1_t784 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3453 * ___match, MethodInfo* method);
#define List_1_GetIndex_m20768(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t784 *, int32_t, int32_t, Predicate_1_t3453 *, MethodInfo*))List_1_GetIndex_m20768_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t852  List_1_GetEnumerator_m4941_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m4941(__this, method) (( Enumerator_t852  (*) (List_1_t784 *, MethodInfo*))List_1_GetEnumerator_m4941_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20771_gshared (List_1_t784 * __this, int32_t ___item, MethodInfo* method);
#define List_1_IndexOf_m20771(__this, ___item, method) (( int32_t (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_IndexOf_m20771_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20773_gshared (List_1_t784 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m20773(__this, ___start, ___delta, method) (( void (*) (List_1_t784 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m20773_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20775_gshared (List_1_t784 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m20775(__this, ___index, method) (( void (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_CheckIndex_m20775_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20777_gshared (List_1_t784 * __this, int32_t ___index, int32_t ___item, MethodInfo* method);
#define List_1_Insert_m20777(__this, ___index, ___item, method) (( void (*) (List_1_t784 *, int32_t, int32_t, MethodInfo*))List_1_Insert_m20777_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20779_gshared (List_1_t784 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m20779(__this, ___collection, method) (( void (*) (List_1_t784 *, Object_t*, MethodInfo*))List_1_CheckCollection_m20779_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m5235_gshared (List_1_t784 * __this, int32_t ___item, MethodInfo* method);
#define List_1_Remove_m5235(__this, ___item, method) (( bool (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_Remove_m5235_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20781_gshared (List_1_t784 * __this, Predicate_1_t3453 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m20781(__this, ___match, method) (( int32_t (*) (List_1_t784 *, Predicate_1_t3453 *, MethodInfo*))List_1_RemoveAll_m20781_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20783_gshared (List_1_t784 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m20783(__this, ___index, method) (( void (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_RemoveAt_m20783_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m20785_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_Reverse_m20785(__this, method) (( void (*) (List_1_t784 *, MethodInfo*))List_1_Reverse_m20785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m20787_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_Sort_m20787(__this, method) (( void (*) (List_1_t784 *, MethodInfo*))List_1_Sort_m20787_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20789_gshared (List_1_t784 * __this, Comparison_1_t3456 * ___comparison, MethodInfo* method);
#define List_1_Sort_m20789(__this, ___comparison, method) (( void (*) (List_1_t784 *, Comparison_1_t3456 *, MethodInfo*))List_1_Sort_m20789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t186* List_1_ToArray_m20791_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_ToArray_m20791(__this, method) (( Int32U5BU5D_t186* (*) (List_1_t784 *, MethodInfo*))List_1_ToArray_m20791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m20793_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_TrimExcess_m20793(__this, method) (( void (*) (List_1_t784 *, MethodInfo*))List_1_TrimExcess_m20793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20795_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_get_Capacity_m20795(__this, method) (( int32_t (*) (List_1_t784 *, MethodInfo*))List_1_get_Capacity_m20795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20797_gshared (List_1_t784 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m20797(__this, ___value, method) (( void (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_set_Capacity_m20797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m20799_gshared (List_1_t784 * __this, MethodInfo* method);
#define List_1_get_Count_m20799(__this, method) (( int32_t (*) (List_1_t784 *, MethodInfo*))List_1_get_Count_m20799_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m20801_gshared (List_1_t784 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m20801(__this, ___index, method) (( int32_t (*) (List_1_t784 *, int32_t, MethodInfo*))List_1_get_Item_m20801_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20803_gshared (List_1_t784 * __this, int32_t ___index, int32_t ___value, MethodInfo* method);
#define List_1_set_Item_m20803(__this, ___index, ___value, method) (( void (*) (List_1_t784 *, int32_t, int32_t, MethodInfo*))List_1_set_Item_m20803_gshared)(__this, ___index, ___value, method)
