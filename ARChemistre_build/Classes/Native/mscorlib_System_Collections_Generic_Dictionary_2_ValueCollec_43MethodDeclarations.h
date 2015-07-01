#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>
struct ValueCollection_t3601;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>
struct Dictionary_2_t740;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t4461;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.UInt16[]
struct UInt16U5BU5D_t1333;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_44.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_41MethodDeclarations.h"
#define ValueCollection__ctor_m22514(__this, ___dictionary, method) (( void (*) (ValueCollection_t3601 *, Dictionary_2_t740 *, MethodInfo*))ValueCollection__ctor_m22420_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m22515(__this, ___item, method) (( void (*) (ValueCollection_t3601 *, uint16_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m22421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m22516(__this, method) (( void (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m22422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m22517(__this, ___item, method) (( bool (*) (ValueCollection_t3601 *, uint16_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m22423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m22518(__this, ___item, method) (( bool (*) (ValueCollection_t3601 *, uint16_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m22424_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m22519(__this, method) (( Object_t* (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m22425_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m22520(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3601 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m22426_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m22521(__this, method) (( Object_t * (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m22427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m22522(__this, method) (( bool (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m22428_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m22523(__this, method) (( bool (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m22429_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m22524(__this, method) (( Object_t * (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m22430_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m22525(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3601 *, UInt16U5BU5D_t1333*, int32_t, MethodInfo*))ValueCollection_CopyTo_m22431_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::GetEnumerator()
#define ValueCollection_GetEnumerator_m22526(__this, method) (( Enumerator_t3602  (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_GetEnumerator_m22432_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::get_Count()
#define ValueCollection_get_Count_m22527(__this, method) (( int32_t (*) (ValueCollection_t3601 *, MethodInfo*))ValueCollection_get_Count_m22433_gshared)(__this, method)
