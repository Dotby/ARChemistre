#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t4171;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t4172;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m28588_gshared (LinkedListNode_1_t4171 * __this, LinkedList_1_t4172 * ___list, Object_t * ___value, MethodInfo* method);
#define LinkedListNode_1__ctor_m28588(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t4171 *, LinkedList_1_t4172 *, Object_t *, MethodInfo*))LinkedListNode_1__ctor_m28588_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m28589_gshared (LinkedListNode_1_t4171 * __this, LinkedList_1_t4172 * ___list, Object_t * ___value, LinkedListNode_1_t4171 * ___previousNode, LinkedListNode_1_t4171 * ___nextNode, MethodInfo* method);
#define LinkedListNode_1__ctor_m28589(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t4171 *, LinkedList_1_t4172 *, Object_t *, LinkedListNode_1_t4171 *, LinkedListNode_1_t4171 *, MethodInfo*))LinkedListNode_1__ctor_m28589_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m28590_gshared (LinkedListNode_1_t4171 * __this, MethodInfo* method);
#define LinkedListNode_1_Detach_m28590(__this, method) (( void (*) (LinkedListNode_1_t4171 *, MethodInfo*))LinkedListNode_1_Detach_m28590_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t4172 * LinkedListNode_1_get_List_m28591_gshared (LinkedListNode_1_t4171 * __this, MethodInfo* method);
#define LinkedListNode_1_get_List_m28591(__this, method) (( LinkedList_1_t4172 * (*) (LinkedListNode_1_t4171 *, MethodInfo*))LinkedListNode_1_get_List_m28591_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t4171 * LinkedListNode_1_get_Next_m28592_gshared (LinkedListNode_1_t4171 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Next_m28592(__this, method) (( LinkedListNode_1_t4171 * (*) (LinkedListNode_1_t4171 *, MethodInfo*))LinkedListNode_1_get_Next_m28592_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m28593_gshared (LinkedListNode_1_t4171 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Value_m28593(__this, method) (( Object_t * (*) (LinkedListNode_1_t4171 *, MethodInfo*))LinkedListNode_1_get_Value_m28593_gshared)(__this, method)
