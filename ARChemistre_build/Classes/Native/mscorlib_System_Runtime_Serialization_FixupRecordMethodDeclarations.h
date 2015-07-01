#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t2156;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2152;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2145;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m12436 (FixupRecord_t2156 * __this, ObjectRecord_t2152 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t2152 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m12437 (FixupRecord_t2156 * __this, ObjectManager_t2145 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
