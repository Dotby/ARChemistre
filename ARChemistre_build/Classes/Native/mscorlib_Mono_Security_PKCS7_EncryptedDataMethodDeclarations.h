#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1887;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1895;
// System.Byte[]
struct ByteU5BU5D_t669;
// Mono.Security.ASN1
struct ASN1_t1882;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m10847 (EncryptedData_t1887 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m10848 (EncryptedData_t1887 * __this, ASN1_t1882 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1895 * EncryptedData_get_EncryptionAlgorithm_m10849 (EncryptedData_t1887 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t669* EncryptedData_get_EncryptedContent_m10850 (EncryptedData_t1887 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
