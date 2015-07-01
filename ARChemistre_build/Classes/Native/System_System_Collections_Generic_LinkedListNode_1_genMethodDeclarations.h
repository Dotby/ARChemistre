#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t856;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t715;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m21974_gshared (LinkedListNode_1_t856 * __this, LinkedList_1_t715 * ___list, int32_t ___value, MethodInfo* method);
#define LinkedListNode_1__ctor_m21974(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t856 *, LinkedList_1_t715 *, int32_t, MethodInfo*))LinkedListNode_1__ctor_m21974_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m21975_gshared (LinkedListNode_1_t856 * __this, LinkedList_1_t715 * ___list, int32_t ___value, LinkedListNode_1_t856 * ___previousNode, LinkedListNode_1_t856 * ___nextNode, MethodInfo* method);
#define LinkedListNode_1__ctor_m21975(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t856 *, LinkedList_1_t715 *, int32_t, LinkedListNode_1_t856 *, LinkedListNode_1_t856 *, MethodInfo*))LinkedListNode_1__ctor_m21975_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m21976_gshared (LinkedListNode_1_t856 * __this, MethodInfo* method);
#define LinkedListNode_1_Detach_m21976(__this, method) (( void (*) (LinkedListNode_1_t856 *, MethodInfo*))LinkedListNode_1_Detach_m21976_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t715 * LinkedListNode_1_get_List_m21977_gshared (LinkedListNode_1_t856 * __this, MethodInfo* method);
#define LinkedListNode_1_get_List_m21977(__this, method) (( LinkedList_1_t715 * (*) (LinkedListNode_1_t856 *, MethodInfo*))LinkedListNode_1_get_List_m21977_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t856 * LinkedListNode_1_get_Next_m5296_gshared (LinkedListNode_1_t856 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Next_m5296(__this, method) (( LinkedListNode_1_t856 * (*) (LinkedListNode_1_t856 *, MethodInfo*))LinkedListNode_1_get_Next_m5296_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m4945_gshared (LinkedListNode_1_t856 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Value_m4945(__this, method) (( int32_t (*) (LinkedListNode_1_t856 *, MethodInfo*))LinkedListNode_1_get_Value_m4945_gshared)(__this, method)
