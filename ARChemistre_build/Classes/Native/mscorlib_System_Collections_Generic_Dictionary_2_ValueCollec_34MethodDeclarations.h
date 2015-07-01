#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct ValueCollection_t3189;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct Dictionary_2_t351;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t494;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct IEnumerator_1_t4392;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t26;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>[]
struct List_1U5BU5D_t3162;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_35.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26MethodDeclarations.h"
#define ValueCollection__ctor_m18089(__this, ___dictionary, method) (( void (*) (ValueCollection_t3189 *, Dictionary_2_t351 *, MethodInfo*))ValueCollection__ctor_m15000_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18090(__this, ___item, method) (( void (*) (ValueCollection_t3189 *, List_1_t494 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m15001_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18091(__this, method) (( void (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m15002_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18092(__this, ___item, method) (( bool (*) (ValueCollection_t3189 *, List_1_t494 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m15003_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18093(__this, ___item, method) (( bool (*) (ValueCollection_t3189 *, List_1_t494 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m15004_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18094(__this, method) (( Object_t* (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m18095(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3189 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m15006_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18096(__this, method) (( Object_t * (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m15007_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18097(__this, method) (( bool (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m15008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18098(__this, method) (( bool (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m15009_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18099(__this, method) (( Object_t * (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m15010_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m18100(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3189 *, List_1U5BU5D_t3162*, int32_t, MethodInfo*))ValueCollection_CopyTo_m15011_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m18101(__this, method) (( Enumerator_t3190  (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_GetEnumerator_m15012_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
#define ValueCollection_get_Count_m18102(__this, method) (( int32_t (*) (ValueCollection_t3189 *, MethodInfo*))ValueCollection_get_Count_m15013_gshared)(__this, method)
