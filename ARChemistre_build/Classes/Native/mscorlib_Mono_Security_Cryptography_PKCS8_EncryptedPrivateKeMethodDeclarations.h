﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t1877;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t669;

// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
extern "C" void EncryptedPrivateKeyInfo__ctor_m10695 (EncryptedPrivateKeyInfo_t1877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
extern "C" void EncryptedPrivateKeyInfo__ctor_m10696 (EncryptedPrivateKeyInfo_t1877 * __this, ByteU5BU5D_t669* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
extern "C" String_t* EncryptedPrivateKeyInfo_get_Algorithm_m10697 (EncryptedPrivateKeyInfo_t1877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
extern "C" ByteU5BU5D_t669* EncryptedPrivateKeyInfo_get_EncryptedData_m10698 (EncryptedPrivateKeyInfo_t1877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
extern "C" ByteU5BU5D_t669* EncryptedPrivateKeyInfo_get_Salt_m10699 (EncryptedPrivateKeyInfo_t1877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
extern "C" int32_t EncryptedPrivateKeyInfo_get_IterationCount_m10700 (EncryptedPrivateKeyInfo_t1877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
extern "C" void EncryptedPrivateKeyInfo_Decode_m10701 (EncryptedPrivateKeyInfo_t1877 * __this, ByteU5BU5D_t669* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;