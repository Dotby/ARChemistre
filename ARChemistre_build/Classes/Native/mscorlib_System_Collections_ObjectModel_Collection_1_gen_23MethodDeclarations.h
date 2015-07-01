#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t3413;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.String[]
struct StringU5BU5D_t43;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4342;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3411;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m20370(__this, method) (( void (*) (Collection_1_t3413 *, MethodInfo*))Collection_1__ctor_m15333_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20371(__this, method) (( bool (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15334_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m20372(__this, ___array, ___index, method) (( void (*) (Collection_1_t3413 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15335_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m20373(__this, method) (( Object_t * (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15336_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m20374(__this, ___value, method) (( int32_t (*) (Collection_1_t3413 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m15337_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m20375(__this, ___value, method) (( bool (*) (Collection_1_t3413 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m15338_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m20376(__this, ___value, method) (( int32_t (*) (Collection_1_t3413 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15339_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m20377(__this, ___index, ___value, method) (( void (*) (Collection_1_t3413 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m15340_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m20378(__this, ___value, method) (( void (*) (Collection_1_t3413 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m15341_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m20379(__this, method) (( bool (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15342_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m20380(__this, method) (( Object_t * (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15343_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m20381(__this, method) (( bool (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15344_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m20382(__this, method) (( bool (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15345_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m20383(__this, ___index, method) (( Object_t * (*) (Collection_1_t3413 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15346_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m20384(__this, ___index, ___value, method) (( void (*) (Collection_1_t3413 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m20385(__this, ___item, method) (( void (*) (Collection_1_t3413 *, String_t*, MethodInfo*))Collection_1_Add_m15348_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m20386(__this, method) (( void (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_Clear_m15349_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m20387(__this, method) (( void (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_ClearItems_m15350_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m20388(__this, ___item, method) (( bool (*) (Collection_1_t3413 *, String_t*, MethodInfo*))Collection_1_Contains_m15351_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m20389(__this, ___array, ___index, method) (( void (*) (Collection_1_t3413 *, StringU5BU5D_t43*, int32_t, MethodInfo*))Collection_1_CopyTo_m15352_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m20390(__this, method) (( Object_t* (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_GetEnumerator_m15353_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m20391(__this, ___item, method) (( int32_t (*) (Collection_1_t3413 *, String_t*, MethodInfo*))Collection_1_IndexOf_m15354_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m20392(__this, ___index, ___item, method) (( void (*) (Collection_1_t3413 *, int32_t, String_t*, MethodInfo*))Collection_1_Insert_m15355_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m20393(__this, ___index, ___item, method) (( void (*) (Collection_1_t3413 *, int32_t, String_t*, MethodInfo*))Collection_1_InsertItem_m15356_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m20394(__this, ___item, method) (( bool (*) (Collection_1_t3413 *, String_t*, MethodInfo*))Collection_1_Remove_m15357_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m20395(__this, ___index, method) (( void (*) (Collection_1_t3413 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m15358_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m20396(__this, ___index, method) (( void (*) (Collection_1_t3413 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m15359_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m20397(__this, method) (( int32_t (*) (Collection_1_t3413 *, MethodInfo*))Collection_1_get_Count_m15360_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m20398(__this, ___index, method) (( String_t* (*) (Collection_1_t3413 *, int32_t, MethodInfo*))Collection_1_get_Item_m15361_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m20399(__this, ___index, ___value, method) (( void (*) (Collection_1_t3413 *, int32_t, String_t*, MethodInfo*))Collection_1_set_Item_m15362_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m20400(__this, ___index, ___item, method) (( void (*) (Collection_1_t3413 *, int32_t, String_t*, MethodInfo*))Collection_1_SetItem_m15363_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m20401(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m15364_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m20402(__this /* static, unused */, ___item, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m15365_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m20403(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m15366_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m20404(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m15367_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m20405(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m15368_gshared)(__this /* static, unused */, ___list, method)
