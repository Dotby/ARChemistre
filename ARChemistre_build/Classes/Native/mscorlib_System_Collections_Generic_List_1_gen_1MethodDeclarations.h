#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t174;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3346;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t208;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t4347;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2917;
// System.Object[]
struct ObjectU5BU5D_t164;
// System.Predicate`1<System.Object>
struct Predicate_1_t2919;
// System.Comparison`1<System.Object>
struct Comparison_1_t249;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m15200_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1__ctor_m15200(__this, method) (( void (*) (List_1_t174 *, MethodInfo*))List_1__ctor_m15200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15202_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m15202(__this, ___collection, method) (( void (*) (List_1_t174 *, Object_t*, MethodInfo*))List_1__ctor_m15202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15204_gshared (List_1_t174 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m15204(__this, ___capacity, method) (( void (*) (List_1_t174 *, int32_t, MethodInfo*))List_1__ctor_m15204_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m15206_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m15206(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15206_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208(__this, method) (( Object_t* (*) (List_1_t174 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15210_gshared (List_1_t174 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15210(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t174 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15210_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15212(__this, method) (( Object_t * (*) (List_1_t174 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15214_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15214(__this, ___item, method) (( int32_t (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15216_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15216(__this, ___item, method) (( bool (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15218_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15218(__this, ___item, method) (( int32_t (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15220_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15220(__this, ___index, ___item, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15220_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15222_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15222(__this, ___item, method) (( void (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15222_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224(__this, method) (( bool (*) (List_1_t174 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15226(__this, method) (( bool (*) (List_1_t174 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15228(__this, method) (( Object_t * (*) (List_1_t174 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15230(__this, method) (( bool (*) (List_1_t174 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15232(__this, method) (( bool (*) (List_1_t174 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15232_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15234_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15234(__this, ___index, method) (( Object_t * (*) (List_1_t174 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15236_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15236(__this, ___index, ___value, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15236_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m15237_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m15237(__this, ___item, method) (( void (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_Add_m15237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15239_gshared (List_1_t174 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m15239(__this, ___newCount, method) (( void (*) (List_1_t174 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15239_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15241_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m15241(__this, ___collection, method) (( void (*) (List_1_t174 *, Object_t*, MethodInfo*))List_1_AddCollection_m15241_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15243_gshared (List_1_t174 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m15243(__this, ___enumerable, method) (( void (*) (List_1_t174 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15243_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15245_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m15245(__this, ___collection, method) (( void (*) (List_1_t174 *, Object_t*, MethodInfo*))List_1_AddRange_m15245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2917 * List_1_AsReadOnly_m15247_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m15247(__this, method) (( ReadOnlyCollection_1_t2917 * (*) (List_1_t174 *, MethodInfo*))List_1_AsReadOnly_m15247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m15249_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_Clear_m15249(__this, method) (( void (*) (List_1_t174 *, MethodInfo*))List_1_Clear_m15249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m15251_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m15251(__this, ___item, method) (( bool (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_Contains_m15251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15253_gshared (List_1_t174 * __this, ObjectU5BU5D_t164* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m15253(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t174 *, ObjectU5BU5D_t164*, int32_t, MethodInfo*))List_1_CopyTo_m15253_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m15255_gshared (List_1_t174 * __this, Predicate_1_t2919 * ___match, MethodInfo* method);
#define List_1_Find_m15255(__this, ___match, method) (( Object_t * (*) (List_1_t174 *, Predicate_1_t2919 *, MethodInfo*))List_1_Find_m15255_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15257_gshared (Object_t * __this /* static, unused */, Predicate_1_t2919 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m15257(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2919 *, MethodInfo*))List_1_CheckMatch_m15257_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15259_gshared (List_1_t174 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2919 * ___match, MethodInfo* method);
#define List_1_GetIndex_m15259(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t174 *, int32_t, int32_t, Predicate_1_t2919 *, MethodInfo*))List_1_GetIndex_m15259_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2915  List_1_GetEnumerator_m15260_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m15260(__this, method) (( Enumerator_t2915  (*) (List_1_t174 *, MethodInfo*))List_1_GetEnumerator_m15260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15262_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m15262(__this, ___item, method) (( int32_t (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15264_gshared (List_1_t174 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m15264(__this, ___start, ___delta, method) (( void (*) (List_1_t174 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15266_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m15266(__this, ___index, method) (( void (*) (List_1_t174 *, int32_t, MethodInfo*))List_1_CheckIndex_m15266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15268_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m15268(__this, ___index, ___item, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m15268_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15270_gshared (List_1_t174 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m15270(__this, ___collection, method) (( void (*) (List_1_t174 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m15272_gshared (List_1_t174 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m15272(__this, ___item, method) (( bool (*) (List_1_t174 *, Object_t *, MethodInfo*))List_1_Remove_m15272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15274_gshared (List_1_t174 * __this, Predicate_1_t2919 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m15274(__this, ___match, method) (( int32_t (*) (List_1_t174 *, Predicate_1_t2919 *, MethodInfo*))List_1_RemoveAll_m15274_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15276_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m15276(__this, ___index, method) (( void (*) (List_1_t174 *, int32_t, MethodInfo*))List_1_RemoveAt_m15276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m15278_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_Reverse_m15278(__this, method) (( void (*) (List_1_t174 *, MethodInfo*))List_1_Reverse_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m15280_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_Sort_m15280(__this, method) (( void (*) (List_1_t174 *, MethodInfo*))List_1_Sort_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15282_gshared (List_1_t174 * __this, Comparison_1_t249 * ___comparison, MethodInfo* method);
#define List_1_Sort_m15282(__this, ___comparison, method) (( void (*) (List_1_t174 *, Comparison_1_t249 *, MethodInfo*))List_1_Sort_m15282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t164* List_1_ToArray_m15284_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_ToArray_m15284(__this, method) (( ObjectU5BU5D_t164* (*) (List_1_t174 *, MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m15286_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_TrimExcess_m15286(__this, method) (( void (*) (List_1_t174 *, MethodInfo*))List_1_TrimExcess_m15286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15288_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_get_Capacity_m15288(__this, method) (( int32_t (*) (List_1_t174 *, MethodInfo*))List_1_get_Capacity_m15288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15290_gshared (List_1_t174 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m15290(__this, ___value, method) (( void (*) (List_1_t174 *, int32_t, MethodInfo*))List_1_set_Capacity_m15290_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m15292_gshared (List_1_t174 * __this, MethodInfo* method);
#define List_1_get_Count_m15292(__this, method) (( int32_t (*) (List_1_t174 *, MethodInfo*))List_1_get_Count_m15292_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m15294_gshared (List_1_t174 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m15294(__this, ___index, method) (( Object_t * (*) (List_1_t174 *, int32_t, MethodInfo*))List_1_get_Item_m15294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15296_gshared (List_1_t174 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m15296(__this, ___index, ___value, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m15296_gshared)(__this, ___index, ___value, method)
