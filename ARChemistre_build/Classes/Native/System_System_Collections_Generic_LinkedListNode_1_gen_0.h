﻿#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t4172;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t4171;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct  LinkedListNode_1_t4171  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1<System.Object>::item
	Object_t * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::container
	LinkedList_1_t4172 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::forward
	LinkedListNode_1_t4171 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::back
	LinkedListNode_1_t4171 * ___back_3;
};