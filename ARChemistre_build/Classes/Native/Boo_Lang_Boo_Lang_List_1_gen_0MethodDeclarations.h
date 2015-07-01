#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.List`1<System.Object>
struct List_1_t4213;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t208;
// System.Object[]
struct ObjectU5BU5D_t164;
// System.String
struct String_t;

// System.Void Boo.Lang.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m28914_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1__ctor_m28914(__this, method) (( void (*) (List_1_t4213 *, MethodInfo*))List_1__ctor_m28914_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m28915_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m28915(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m28915_gshared)(__this /* static, unused */, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28916_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28916(__this, ___item, method) (( void (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28916_gshared)(__this, ___item, method)
// System.Collections.IEnumerator Boo.Lang.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28917_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28917(__this, method) (( Object_t * (*) (List_1_t4213 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28917_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_Insert_m28918_gshared (List_1_t4213 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_Insert_m28918(__this, ___index, ___item, method) (( void (*) (List_1_t4213 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_Insert_m28918_gshared)(__this, ___index, ___item, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m28919_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m28919(__this, ___index, method) (( void (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m28919_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m28920_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m28920(__this, ___item, method) (( bool (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m28920_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28921_gshared (List_1_t4213 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28921(__this, ___value, method) (( int32_t (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m28921_gshared)(__this, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28922_gshared (List_1_t4213 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28922(__this, ___index, ___value, method) (( void (*) (List_1_t4213 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m28922_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28923_gshared (List_1_t4213 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28923(__this, ___value, method) (( void (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m28923_gshared)(__this, ___value, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28924_gshared (List_1_t4213 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28924(__this, ___value, method) (( int32_t (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m28924_gshared)(__this, ___value, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28925_gshared (List_1_t4213 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28925(__this, ___value, method) (( bool (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m28925_gshared)(__this, ___value, method)
// System.Object Boo.Lang.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28926_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28926(__this, ___index, method) (( Object_t * (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m28926_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28927_gshared (List_1_t4213 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28927(__this, ___index, ___value, method) (( void (*) (List_1_t4213 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m28927_gshared)(__this, ___index, ___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void List_1_System_Collections_IList_RemoveAt_m28928_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_RemoveAt_m28928(__this, ___index, method) (( void (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_System_Collections_IList_RemoveAt_m28928_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28929_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28929(__this, method) (( bool (*) (List_1_t4213 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28929_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28930_gshared (List_1_t4213 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28930(__this, ___array, ___index, method) (( void (*) (List_1_t4213 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28930_gshared)(__this, ___array, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m28931_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_get_Count_m28931(__this, method) (( int32_t (*) (List_1_t4213 *, MethodInfo*))List_1_get_Count_m28931_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1<System.Object>::GetEnumerator()
extern "C" Object_t* List_1_GetEnumerator_m28932_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m28932(__this, method) (( Object_t* (*) (List_1_t4213 *, MethodInfo*))List_1_GetEnumerator_m28932_gshared)(__this, method)
// System.Void Boo.Lang.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28933_gshared (List_1_t4213 * __this, ObjectU5BU5D_t164* ___target, int32_t ___index, MethodInfo* method);
#define List_1_CopyTo_m28933(__this, ___target, ___index, method) (( void (*) (List_1_t4213 *, ObjectU5BU5D_t164*, int32_t, MethodInfo*))List_1_CopyTo_m28933_gshared)(__this, ___target, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsSynchronized()
extern "C" bool List_1_get_IsSynchronized_m28934_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_get_IsSynchronized_m28934(__this, method) (( bool (*) (List_1_t4213 *, MethodInfo*))List_1_get_IsSynchronized_m28934_gshared)(__this, method)
// System.Object Boo.Lang.List`1<System.Object>::get_SyncRoot()
extern "C" Object_t * List_1_get_SyncRoot_m28935_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_get_SyncRoot_m28935(__this, method) (( Object_t * (*) (List_1_t4213 *, MethodInfo*))List_1_get_SyncRoot_m28935_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsReadOnly()
extern "C" bool List_1_get_IsReadOnly_m28936_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_get_IsReadOnly_m28936(__this, method) (( bool (*) (List_1_t4213 *, MethodInfo*))List_1_get_IsReadOnly_m28936_gshared)(__this, method)
// T Boo.Lang.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m28937_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m28937(__this, ___index, method) (( Object_t * (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_get_Item_m28937_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28938_gshared (List_1_t4213 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m28938(__this, ___index, ___value, method) (( void (*) (List_1_t4213 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m28938_gshared)(__this, ___index, ___value, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Push(T)
extern "C" List_1_t4213 * List_1_Push_m28939_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Push_m28939(__this, ___item, method) (( List_1_t4213 * (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_Push_m28939_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Add(T)
extern "C" List_1_t4213 * List_1_Add_m28940_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m28940(__this, ___item, method) (( List_1_t4213 * (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_Add_m28940_gshared)(__this, ___item, method)
// System.String Boo.Lang.List`1<System.Object>::ToString()
extern "C" String_t* List_1_ToString_m28941_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_ToString_m28941(__this, method) (( String_t* (*) (List_1_t4213 *, MethodInfo*))List_1_ToString_m28941_gshared)(__this, method)
// System.String Boo.Lang.List`1<System.Object>::Join(System.String)
extern "C" String_t* List_1_Join_m28942_gshared (List_1_t4213 * __this, String_t* ___separator, MethodInfo* method);
#define List_1_Join_m28942(__this, ___separator, method) (( String_t* (*) (List_1_t4213 *, String_t*, MethodInfo*))List_1_Join_m28942_gshared)(__this, ___separator, method)
// System.Int32 Boo.Lang.List`1<System.Object>::GetHashCode()
extern "C" int32_t List_1_GetHashCode_m28943_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_GetHashCode_m28943(__this, method) (( int32_t (*) (List_1_t4213 *, MethodInfo*))List_1_GetHashCode_m28943_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(System.Object)
extern "C" bool List_1_Equals_m28944_gshared (List_1_t4213 * __this, Object_t * ___other, MethodInfo* method);
#define List_1_Equals_m28944(__this, ___other, method) (( bool (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_Equals_m28944_gshared)(__this, ___other, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(Boo.Lang.List`1<T>)
extern "C" bool List_1_Equals_m28945_gshared (List_1_t4213 * __this, List_1_t4213 * ___other, MethodInfo* method);
#define List_1_Equals_m28945(__this, ___other, method) (( bool (*) (List_1_t4213 *, List_1_t4213 *, MethodInfo*))List_1_Equals_m28945_gshared)(__this, ___other, method)
// System.Void Boo.Lang.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m28946_gshared (List_1_t4213 * __this, MethodInfo* method);
#define List_1_Clear_m28946(__this, method) (( void (*) (List_1_t4213 *, MethodInfo*))List_1_Clear_m28946_gshared)(__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m28947_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m28947(__this, ___item, method) (( bool (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_Contains_m28947_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28948_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m28948(__this, ___item, method) (( int32_t (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_IndexOf_m28948_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Insert(System.Int32,T)
extern "C" List_1_t4213 * List_1_Insert_m28949_gshared (List_1_t4213 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m28949(__this, ___index, ___item, method) (( List_1_t4213 * (*) (List_1_t4213 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m28949_gshared)(__this, ___index, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Remove(T)
extern "C" List_1_t4213 * List_1_Remove_m28950_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m28950(__this, ___item, method) (( List_1_t4213 * (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_Remove_m28950_gshared)(__this, ___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" List_1_t4213 * List_1_RemoveAt_m28951_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m28951(__this, ___index, method) (( List_1_t4213 * (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_RemoveAt_m28951_gshared)(__this, ___index, method)
// System.Void Boo.Lang.List`1<System.Object>::EnsureCapacity(System.Int32)
extern "C" void List_1_EnsureCapacity_m28952_gshared (List_1_t4213 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_EnsureCapacity_m28952(__this, ___minCapacity, method) (( void (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_EnsureCapacity_m28952_gshared)(__this, ___minCapacity, method)
// T[] Boo.Lang.List`1<System.Object>::NewArray(System.Int32)
extern "C" ObjectU5BU5D_t164* List_1_NewArray_m28953_gshared (List_1_t4213 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_NewArray_m28953(__this, ___minCapacity, method) (( ObjectU5BU5D_t164* (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_NewArray_m28953_gshared)(__this, ___minCapacity, method)
// System.Void Boo.Lang.List`1<System.Object>::InnerRemoveAt(System.Int32)
extern "C" void List_1_InnerRemoveAt_m28954_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_InnerRemoveAt_m28954(__this, ___index, method) (( void (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_InnerRemoveAt_m28954_gshared)(__this, ___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::InnerRemove(T)
extern "C" bool List_1_InnerRemove_m28955_gshared (List_1_t4213 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_InnerRemove_m28955(__this, ___item, method) (( bool (*) (List_1_t4213 *, Object_t *, MethodInfo*))List_1_InnerRemove_m28955_gshared)(__this, ___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" int32_t List_1_CheckIndex_m28956_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m28956(__this, ___index, method) (( int32_t (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_CheckIndex_m28956_gshared)(__this, ___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::NormalizeIndex(System.Int32)
extern "C" int32_t List_1_NormalizeIndex_m28957_gshared (List_1_t4213 * __this, int32_t ___index, MethodInfo* method);
#define List_1_NormalizeIndex_m28957(__this, ___index, method) (( int32_t (*) (List_1_t4213 *, int32_t, MethodInfo*))List_1_NormalizeIndex_m28957_gshared)(__this, ___index, method)
// T Boo.Lang.List`1<System.Object>::Coerce(System.Object)
extern "C" Object_t * List_1_Coerce_m28958_gshared (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method);
#define List_1_Coerce_m28958(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))List_1_Coerce_m28958_gshared)(__this /* static, unused */, ___value, method)
