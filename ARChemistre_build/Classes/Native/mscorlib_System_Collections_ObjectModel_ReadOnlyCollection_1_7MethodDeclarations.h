﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t3051;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t267;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IList_1_t3050;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t3047;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t4366;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m16653(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t3051 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m15303_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16654(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t3051 *, Entry_t267 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15304_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m16655(__this, method) (( void (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15305_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m16656(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t3051 *, int32_t, Entry_t267 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15306_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m16657(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t3051 *, Entry_t267 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15307_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m16658(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3051 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15308_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m16659(__this, ___index, method) (( Entry_t267 * (*) (ReadOnlyCollection_1_t3051 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15309_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m16660(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3051 *, int32_t, Entry_t267 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15310_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16661(__this, method) (( bool (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15311_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m16662(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3051 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15312_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m16663(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15313_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m16664(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3051 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m15314_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m16665(__this, method) (( void (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m15315_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m16666(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3051 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m15316_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m16667(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3051 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15317_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m16668(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3051 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m15318_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m16669(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t3051 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m15319_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m16670(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3051 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15320_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m16671(__this, method) (( bool (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15321_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m16672(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15322_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m16673(__this, method) (( bool (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15323_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m16674(__this, method) (( bool (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15324_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m16675(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3051 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m15325_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m16676(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3051 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m15326_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define ReadOnlyCollection_1_Contains_m16677(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3051 *, Entry_t267 *, MethodInfo*))ReadOnlyCollection_1_Contains_m15327_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m16678(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3051 *, EntryU5BU5D_t3047*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m15328_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m16679(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m15329_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m16680(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3051 *, Entry_t267 *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m15330_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define ReadOnlyCollection_1_get_Count_m16681(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t3051 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m15331_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m16682(__this, ___index, method) (( Entry_t267 * (*) (ReadOnlyCollection_1_t3051 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m15332_gshared)(__this, ___index, method)