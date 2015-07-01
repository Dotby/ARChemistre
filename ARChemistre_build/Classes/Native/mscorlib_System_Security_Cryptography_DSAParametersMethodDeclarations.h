#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1482;
struct DSAParameters_t1482_marshaled;

void DSAParameters_t1482_marshal(const DSAParameters_t1482& unmarshaled, DSAParameters_t1482_marshaled& marshaled);
void DSAParameters_t1482_marshal_back(const DSAParameters_t1482_marshaled& marshaled, DSAParameters_t1482& unmarshaled);
void DSAParameters_t1482_marshal_cleanup(DSAParameters_t1482_marshaled& marshaled);
