#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1985;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1986;
// System.Exception
struct Exception_t154;
// System.Reflection.AssemblyName
struct AssemblyName_t1987;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m11590 (AssemblyBuilder_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1986* AssemblyBuilder_GetModulesInternal_m11591 (AssemblyBuilder_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m11592 (AssemblyBuilder_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t154 * AssemblyBuilder_not_supported_m11593 (AssemblyBuilder_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1987 * AssemblyBuilder_UnprotectedGetName_m11594 (AssemblyBuilder_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
