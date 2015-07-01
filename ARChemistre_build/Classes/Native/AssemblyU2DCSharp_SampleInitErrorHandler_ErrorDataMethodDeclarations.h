#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SampleInitErrorHandler/ErrorData
struct ErrorData_t48;
struct ErrorData_t48_marshaled;

void ErrorData_t48_marshal(const ErrorData_t48& unmarshaled, ErrorData_t48_marshaled& marshaled);
void ErrorData_t48_marshal_back(const ErrorData_t48_marshaled& marshaled, ErrorData_t48& unmarshaled);
void ErrorData_t48_marshal_cleanup(ErrorData_t48_marshaled& marshaled);
