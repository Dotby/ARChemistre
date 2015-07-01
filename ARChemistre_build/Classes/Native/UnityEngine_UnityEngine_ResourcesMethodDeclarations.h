#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t1035;
// UnityEngine.Object
struct Object_t138;
struct Object_t138_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t959;
struct AsyncOperation_t959_marshaled;

// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" Object_t138 * Resources_Load_m420 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t138 * Resources_Load_m6308 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Resources::UnloadAsset(UnityEngine.Object)
extern "C" void Resources_UnloadAsset_m506 (Object_t * __this /* static, unused */, Object_t138 * ___assetToUnload, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C" AsyncOperation_t959 * Resources_UnloadUnusedAssets_m5190 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
