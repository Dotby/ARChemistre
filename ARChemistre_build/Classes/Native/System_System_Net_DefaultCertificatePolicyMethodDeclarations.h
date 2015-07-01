#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1314;
// System.Net.ServicePoint
struct ServicePoint_t1315;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1316;
// System.Net.WebRequest
struct WebRequest_t1317;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m7188 (DefaultCertificatePolicy_t1314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m7189 (DefaultCertificatePolicy_t1314 * __this, ServicePoint_t1315 * ___point, X509Certificate_t1316 * ___certificate, WebRequest_t1317 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
