#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.InternalEyewear/EyewearCalibrationReading
struct EyewearCalibrationReading_t611;
struct EyewearCalibrationReading_t611_marshaled;

void EyewearCalibrationReading_t611_marshal(const EyewearCalibrationReading_t611& unmarshaled, EyewearCalibrationReading_t611_marshaled& marshaled);
void EyewearCalibrationReading_t611_marshal_back(const EyewearCalibrationReading_t611_marshaled& marshaled, EyewearCalibrationReading_t611& unmarshaled);
void EyewearCalibrationReading_t611_marshal_cleanup(EyewearCalibrationReading_t611_marshaled& marshaled);
