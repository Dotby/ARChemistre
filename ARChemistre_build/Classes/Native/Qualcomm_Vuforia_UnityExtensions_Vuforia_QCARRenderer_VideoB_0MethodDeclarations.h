#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRenderer/VideoBGCfgData
struct VideoBGCfgData_t719;
struct VideoBGCfgData_t719_marshaled;

void VideoBGCfgData_t719_marshal(const VideoBGCfgData_t719& unmarshaled, VideoBGCfgData_t719_marshaled& marshaled);
void VideoBGCfgData_t719_marshal_back(const VideoBGCfgData_t719_marshaled& marshaled, VideoBGCfgData_t719& unmarshaled);
void VideoBGCfgData_t719_marshal_cleanup(VideoBGCfgData_t719_marshaled& marshaled);
