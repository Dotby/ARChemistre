#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl/WordResultData
struct WordResultData_t702;
struct WordResultData_t702_marshaled;

void WordResultData_t702_marshal(const WordResultData_t702& unmarshaled, WordResultData_t702_marshaled& marshaled);
void WordResultData_t702_marshal_back(const WordResultData_t702_marshaled& marshaled, WordResultData_t702& unmarshaled);
void WordResultData_t702_marshal_cleanup(WordResultData_t702_marshaled& marshaled);
