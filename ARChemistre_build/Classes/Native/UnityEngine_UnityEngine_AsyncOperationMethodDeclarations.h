#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t959;
struct AsyncOperation_t959_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m6347 (AsyncOperation_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m6348 (AsyncOperation_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m6349 (AsyncOperation_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t959_marshal(const AsyncOperation_t959& unmarshaled, AsyncOperation_t959_marshaled& marshaled);
void AsyncOperation_t959_marshal_back(const AsyncOperation_t959_marshaled& marshaled, AsyncOperation_t959& unmarshaled);
void AsyncOperation_t959_marshal_cleanup(AsyncOperation_t959_marshaled& marshaled);
