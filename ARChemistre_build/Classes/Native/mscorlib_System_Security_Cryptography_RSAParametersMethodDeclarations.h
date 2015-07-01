#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1480;
struct RSAParameters_t1480_marshaled;

void RSAParameters_t1480_marshal(const RSAParameters_t1480& unmarshaled, RSAParameters_t1480_marshaled& marshaled);
void RSAParameters_t1480_marshal_back(const RSAParameters_t1480_marshaled& marshaled, RSAParameters_t1480& unmarshaled);
void RSAParameters_t1480_marshal_cleanup(RSAParameters_t1480_marshaled& marshaled);
