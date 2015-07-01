#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t966;
struct YieldInstruction_t966_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m6465 (YieldInstruction_t966 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t966_marshal(const YieldInstruction_t966& unmarshaled, YieldInstruction_t966_marshaled& marshaled);
void YieldInstruction_t966_marshal_back(const YieldInstruction_t966_marshaled& marshaled, YieldInstruction_t966& unmarshaled);
void YieldInstruction_t966_marshal_cleanup(YieldInstruction_t966_marshaled& marshaled);
