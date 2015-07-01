#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.GLErrorHandler
struct GLErrorHandler_t72;
// System.String
struct String_t;

// System.Void Vuforia.GLErrorHandler::.ctor()
extern "C" void GLErrorHandler__ctor_m139 (GLErrorHandler_t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::.cctor()
extern "C" void GLErrorHandler__cctor_m140 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::SetError(System.String)
extern "C" void GLErrorHandler_SetError_m141 (Object_t * __this /* static, unused */, String_t* ___errorText, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::OnGUI()
extern "C" void GLErrorHandler_OnGUI_m142 (GLErrorHandler_t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.GLErrorHandler::DrawWindowContent(System.Int32)
extern "C" void GLErrorHandler_DrawWindowContent_m143 (GLErrorHandler_t72 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
