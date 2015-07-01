#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t2174;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1675;
// System.Byte[]
struct ByteU5BU5D_t669;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m12528 (DESCryptoServiceProvider_t2174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m12529 (DESCryptoServiceProvider_t2174 * __this, ByteU5BU5D_t669* ___rgbKey, ByteU5BU5D_t669* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m12530 (DESCryptoServiceProvider_t2174 * __this, ByteU5BU5D_t669* ___rgbKey, ByteU5BU5D_t669* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m12531 (DESCryptoServiceProvider_t2174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m12532 (DESCryptoServiceProvider_t2174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
