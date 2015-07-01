﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t4315;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2213;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t4312;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t4571;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t2209;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m29622(__this, method) (( void (*) (Collection_1_t4315 *, MethodInfo*))Collection_1__ctor_m15333_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29623(__this, method) (( bool (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15334_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m29624(__this, ___array, ___index, method) (( void (*) (Collection_1_t4315 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15335_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m29625(__this, method) (( Object_t * (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15336_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m29626(__this, ___value, method) (( int32_t (*) (Collection_1_t4315 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m15337_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m29627(__this, ___value, method) (( bool (*) (Collection_1_t4315 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m15338_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m29628(__this, ___value, method) (( int32_t (*) (Collection_1_t4315 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15339_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m29629(__this, ___index, ___value, method) (( void (*) (Collection_1_t4315 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m15340_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m29630(__this, ___value, method) (( void (*) (Collection_1_t4315 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m15341_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m29631(__this, method) (( bool (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15342_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m29632(__this, method) (( Object_t * (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15343_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m29633(__this, method) (( bool (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15344_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m29634(__this, method) (( bool (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15345_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m29635(__this, ___index, method) (( Object_t * (*) (Collection_1_t4315 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15346_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m29636(__this, ___index, ___value, method) (( void (*) (Collection_1_t4315 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m29637(__this, ___item, method) (( void (*) (Collection_1_t4315 *, StrongName_t2213 *, MethodInfo*))Collection_1_Add_m15348_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m29638(__this, method) (( void (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_Clear_m15349_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m29639(__this, method) (( void (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_ClearItems_m15350_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m29640(__this, ___item, method) (( bool (*) (Collection_1_t4315 *, StrongName_t2213 *, MethodInfo*))Collection_1_Contains_m15351_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m29641(__this, ___array, ___index, method) (( void (*) (Collection_1_t4315 *, StrongNameU5BU5D_t4312*, int32_t, MethodInfo*))Collection_1_CopyTo_m15352_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m29642(__this, method) (( Object_t* (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_GetEnumerator_m15353_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m29643(__this, ___item, method) (( int32_t (*) (Collection_1_t4315 *, StrongName_t2213 *, MethodInfo*))Collection_1_IndexOf_m15354_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m29644(__this, ___index, ___item, method) (( void (*) (Collection_1_t4315 *, int32_t, StrongName_t2213 *, MethodInfo*))Collection_1_Insert_m15355_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m29645(__this, ___index, ___item, method) (( void (*) (Collection_1_t4315 *, int32_t, StrongName_t2213 *, MethodInfo*))Collection_1_InsertItem_m15356_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m29646(__this, ___item, method) (( bool (*) (Collection_1_t4315 *, StrongName_t2213 *, MethodInfo*))Collection_1_Remove_m15357_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m29647(__this, ___index, method) (( void (*) (Collection_1_t4315 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m15358_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m29648(__this, ___index, method) (( void (*) (Collection_1_t4315 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m15359_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m29649(__this, method) (( int32_t (*) (Collection_1_t4315 *, MethodInfo*))Collection_1_get_Count_m15360_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m29650(__this, ___index, method) (( StrongName_t2213 * (*) (Collection_1_t4315 *, int32_t, MethodInfo*))Collection_1_get_Item_m15361_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m29651(__this, ___index, ___value, method) (( void (*) (Collection_1_t4315 *, int32_t, StrongName_t2213 *, MethodInfo*))Collection_1_set_Item_m15362_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m29652(__this, ___index, ___item, method) (( void (*) (Collection_1_t4315 *, int32_t, StrongName_t2213 *, MethodInfo*))Collection_1_SetItem_m15363_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m29653(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m15364_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m29654(__this /* static, unused */, ___item, method) (( StrongName_t2213 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m15365_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m29655(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m15366_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m29656(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m15367_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m29657(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m15368_gshared)(__this /* static, unused */, ___list, method)
