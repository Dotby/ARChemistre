#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1686;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1685;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1675;
// System.String
struct String_t;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C" void SymmetricAlgorithm__ctor_m9464 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
extern "C" void SymmetricAlgorithm_System_IDisposable_Dispose_m9602 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
extern "C" void SymmetricAlgorithm_Finalize_m9450 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
extern "C" void SymmetricAlgorithm_Clear_m9485 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C" void SymmetricAlgorithm_Dispose_m9612 (SymmetricAlgorithm_t1686 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
extern "C" int32_t SymmetricAlgorithm_get_BlockSize_m9603 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
extern "C" void SymmetricAlgorithm_set_BlockSize_m9525 (SymmetricAlgorithm_t1686 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
extern "C" int32_t SymmetricAlgorithm_get_FeedbackSize_m9604 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C" ByteU5BU5D_t669* SymmetricAlgorithm_get_IV_m12774 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C" void SymmetricAlgorithm_set_IV_m9481 (SymmetricAlgorithm_t1686 * __this, ByteU5BU5D_t669* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C" ByteU5BU5D_t669* SymmetricAlgorithm_get_Key_m9613 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C" void SymmetricAlgorithm_set_Key_m9480 (SymmetricAlgorithm_t1686 * __this, ByteU5BU5D_t669* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C" int32_t SymmetricAlgorithm_get_KeySize_m9605 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C" void SymmetricAlgorithm_set_KeySize_m9524 (SymmetricAlgorithm_t1686 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
extern "C" KeySizesU5BU5D_t1685* SymmetricAlgorithm_get_LegalKeySizes_m9606 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
extern "C" int32_t SymmetricAlgorithm_get_Mode_m9607 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
extern "C" void SymmetricAlgorithm_set_Mode_m9482 (SymmetricAlgorithm_t1686 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
extern "C" int32_t SymmetricAlgorithm_get_Padding_m9608 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C" void SymmetricAlgorithm_set_Padding_m9523 (SymmetricAlgorithm_t1686 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateDecryptor_m9483 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateEncryptor_m9453 (SymmetricAlgorithm_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C" SymmetricAlgorithm_t1686 * SymmetricAlgorithm_Create_m9479 (Object_t * __this /* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
