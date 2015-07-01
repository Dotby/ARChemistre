#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t4172;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t4171;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t208;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Object[]
struct ObjectU5BU5D_t164;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m28566_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1__ctor_m28566(__this, method) (( void (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1__ctor_m28566_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m28567_gshared (LinkedList_1_t4172 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define LinkedList_1__ctor_m28567(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t4172 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))LinkedList_1__ctor_m28567_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28568_gshared (LinkedList_1_t4172 * __this, Object_t * ___value, MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28568(__this, ___value, method) (( void (*) (LinkedList_1_t4172 *, Object_t *, MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28568_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m28569_gshared (LinkedList_1_t4172 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m28569(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t4172 *, Array_t *, int32_t, MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m28569_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28570_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28570(__this, method) (( Object_t* (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28570_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m28571_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m28571(__this, method) (( Object_t * (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m28571_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28572_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28572(__this, method) (( bool (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28572_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m28573_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m28573(__this, method) (( bool (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m28573_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m28574_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m28574(__this, method) (( Object_t * (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m28574_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m28575_gshared (LinkedList_1_t4172 * __this, LinkedListNode_1_t4171 * ___node, MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m28575(__this, ___node, method) (( void (*) (LinkedList_1_t4172 *, LinkedListNode_1_t4171 *, MethodInfo*))LinkedList_1_VerifyReferencedNode_m28575_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t4171 * LinkedList_1_AddLast_m28576_gshared (LinkedList_1_t4172 * __this, Object_t * ___value, MethodInfo* method);
#define LinkedList_1_AddLast_m28576(__this, ___value, method) (( LinkedListNode_1_t4171 * (*) (LinkedList_1_t4172 *, Object_t *, MethodInfo*))LinkedList_1_AddLast_m28576_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m28577_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_Clear_m28577(__this, method) (( void (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_Clear_m28577_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m28578_gshared (LinkedList_1_t4172 * __this, Object_t * ___value, MethodInfo* method);
#define LinkedList_1_Contains_m28578(__this, ___value, method) (( bool (*) (LinkedList_1_t4172 *, Object_t *, MethodInfo*))LinkedList_1_Contains_m28578_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m28579_gshared (LinkedList_1_t4172 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method);
#define LinkedList_1_CopyTo_m28579(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t4172 *, ObjectU5BU5D_t164*, int32_t, MethodInfo*))LinkedList_1_CopyTo_m28579_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t4171 * LinkedList_1_Find_m28580_gshared (LinkedList_1_t4172 * __this, Object_t * ___value, MethodInfo* method);
#define LinkedList_1_Find_m28580(__this, ___value, method) (( LinkedListNode_1_t4171 * (*) (LinkedList_1_t4172 *, Object_t *, MethodInfo*))LinkedList_1_Find_m28580_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4173  LinkedList_1_GetEnumerator_m28581_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_GetEnumerator_m28581(__this, method) (( Enumerator_t4173  (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_GetEnumerator_m28581_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m28582_gshared (LinkedList_1_t4172 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define LinkedList_1_GetObjectData_m28582(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t4172 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))LinkedList_1_GetObjectData_m28582_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m28583_gshared (LinkedList_1_t4172 * __this, Object_t * ___sender, MethodInfo* method);
#define LinkedList_1_OnDeserialization_m28583(__this, ___sender, method) (( void (*) (LinkedList_1_t4172 *, Object_t *, MethodInfo*))LinkedList_1_OnDeserialization_m28583_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m28584_gshared (LinkedList_1_t4172 * __this, Object_t * ___value, MethodInfo* method);
#define LinkedList_1_Remove_m28584(__this, ___value, method) (( bool (*) (LinkedList_1_t4172 *, Object_t *, MethodInfo*))LinkedList_1_Remove_m28584_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m28585_gshared (LinkedList_1_t4172 * __this, LinkedListNode_1_t4171 * ___node, MethodInfo* method);
#define LinkedList_1_Remove_m28585(__this, ___node, method) (( void (*) (LinkedList_1_t4172 *, LinkedListNode_1_t4171 *, MethodInfo*))LinkedList_1_Remove_m28585_gshared)(__this, ___node, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m28586_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_get_Count_m28586(__this, method) (( int32_t (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_get_Count_m28586_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t4171 * LinkedList_1_get_First_m28587_gshared (LinkedList_1_t4172 * __this, MethodInfo* method);
#define LinkedList_1_get_First_m28587(__this, method) (( LinkedListNode_1_t4171 * (*) (LinkedList_1_t4172 *, MethodInfo*))LinkedList_1_get_First_m28587_gshared)(__this, method)
