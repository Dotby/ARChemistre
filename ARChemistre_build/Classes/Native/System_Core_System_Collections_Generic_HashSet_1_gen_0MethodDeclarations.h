#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t3973;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1123;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t208;
// System.Object[]
struct ObjectU5BU5D_t164;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2860;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m26576_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1__ctor_m26576(__this, method) (( void (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1__ctor_m26576_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m26578_gshared (HashSet_1_t3973 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define HashSet_1__ctor_m26578(__this, ___info, ___context, method) (( void (*) (HashSet_1_t3973 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))HashSet_1__ctor_m26578_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26580_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26580(__this, method) (( Object_t* (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26582_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26582(__this, method) (( bool (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26582_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26584_gshared (HashSet_1_t3973 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26584(__this, ___array, ___index, method) (( void (*) (HashSet_1_t3973 *, ObjectU5BU5D_t164*, int32_t, MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26584_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26586_gshared (HashSet_1_t3973 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26586(__this, ___item, method) (( void (*) (HashSet_1_t3973 *, Object_t *, MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26586_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26588_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26588(__this, method) (( Object_t * (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m26590_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1_get_Count_m26590(__this, method) (( int32_t (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1_get_Count_m26590_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m26592_gshared (HashSet_1_t3973 * __this, int32_t ___capacity, Object_t* ___comparer, MethodInfo* method);
#define HashSet_1_Init_m26592(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t3973 *, int32_t, Object_t*, MethodInfo*))HashSet_1_Init_m26592_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m26594_gshared (HashSet_1_t3973 * __this, int32_t ___size, MethodInfo* method);
#define HashSet_1_InitArrays_m26594(__this, ___size, method) (( void (*) (HashSet_1_t3973 *, int32_t, MethodInfo*))HashSet_1_InitArrays_m26594_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m26596_gshared (HashSet_1_t3973 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m26596(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t3973 *, int32_t, int32_t, Object_t *, MethodInfo*))HashSet_1_SlotsContainsAt_m26596_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m26598_gshared (HashSet_1_t3973 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, MethodInfo* method);
#define HashSet_1_CopyTo_m26598(__this, ___array, ___index, method) (( void (*) (HashSet_1_t3973 *, ObjectU5BU5D_t164*, int32_t, MethodInfo*))HashSet_1_CopyTo_m26598_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m26600_gshared (HashSet_1_t3973 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, int32_t ___count, MethodInfo* method);
#define HashSet_1_CopyTo_m26600(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t3973 *, ObjectU5BU5D_t164*, int32_t, int32_t, MethodInfo*))HashSet_1_CopyTo_m26600_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m26602_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1_Resize_m26602(__this, method) (( void (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1_Resize_m26602_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m26604_gshared (HashSet_1_t3973 * __this, int32_t ___index, MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m26604(__this, ___index, method) (( int32_t (*) (HashSet_1_t3973 *, int32_t, MethodInfo*))HashSet_1_GetLinkHashCode_m26604_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m26606_gshared (HashSet_1_t3973 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_GetItemHashCode_m26606(__this, ___item, method) (( int32_t (*) (HashSet_1_t3973 *, Object_t *, MethodInfo*))HashSet_1_GetItemHashCode_m26606_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m26607_gshared (HashSet_1_t3973 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_Add_m26607(__this, ___item, method) (( bool (*) (HashSet_1_t3973 *, Object_t *, MethodInfo*))HashSet_1_Add_m26607_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m26608_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1_Clear_m26608(__this, method) (( void (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1_Clear_m26608_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m26609_gshared (HashSet_1_t3973 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_Contains_m26609(__this, ___item, method) (( bool (*) (HashSet_1_t3973 *, Object_t *, MethodInfo*))HashSet_1_Contains_m26609_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m26611_gshared (HashSet_1_t3973 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_Remove_m26611(__this, ___item, method) (( bool (*) (HashSet_1_t3973 *, Object_t *, MethodInfo*))HashSet_1_Remove_m26611_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m26613_gshared (HashSet_1_t3973 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method);
#define HashSet_1_GetObjectData_m26613(__this, ___info, ___context, method) (( void (*) (HashSet_1_t3973 *, SerializationInfo_t1123 *, StreamingContext_t1124 , MethodInfo*))HashSet_1_GetObjectData_m26613_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m26615_gshared (HashSet_1_t3973 * __this, Object_t * ___sender, MethodInfo* method);
#define HashSet_1_OnDeserialization_m26615(__this, ___sender, method) (( void (*) (HashSet_1_t3973 *, Object_t *, MethodInfo*))HashSet_1_OnDeserialization_m26615_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3975  HashSet_1_GetEnumerator_m26616_gshared (HashSet_1_t3973 * __this, MethodInfo* method);
#define HashSet_1_GetEnumerator_m26616(__this, method) (( Enumerator_t3975  (*) (HashSet_1_t3973 *, MethodInfo*))HashSet_1_GetEnumerator_m26616_gshared)(__this, method)
