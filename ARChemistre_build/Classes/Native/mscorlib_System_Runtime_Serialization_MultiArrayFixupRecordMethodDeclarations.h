﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t2155;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2152;
// System.Int32[]
struct Int32U5BU5D_t186;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2145;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m12434 (MultiArrayFixupRecord_t2155 * __this, ObjectRecord_t2152 * ___objectToBeFixed, Int32U5BU5D_t186* ___indices, ObjectRecord_t2152 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m12435 (MultiArrayFixupRecord_t2155 * __this, ObjectManager_t2145 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;