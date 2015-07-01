#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t1393;
// System.String[]
struct StringU5BU5D_t43;
// System.Text.RegularExpressions.Regex
struct Regex_t858;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t1394;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m7533 (BaseMachine_t1393 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.BaseMachine::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t43* BaseMachine_Split_m7534 (BaseMachine_t1393 * __this, Regex_t858 * ___regex, String_t* ___input, int32_t ___count, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1394 * BaseMachine_Scan_m7535 (BaseMachine_t1393 * __this, Regex_t858 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
