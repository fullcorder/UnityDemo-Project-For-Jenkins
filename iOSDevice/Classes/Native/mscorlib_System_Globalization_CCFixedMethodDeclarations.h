﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Int32 System.Globalization.CCFixed::FromDateTime(System.DateTime)
extern "C" int32_t CCFixed_FromDateTime_m6652 (Object_t * __this /* static, unused */, DateTime_t480  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.CCFixed::day_of_week(System.Int32)
extern "C" int32_t CCFixed_day_of_week_m6653 (Object_t * __this /* static, unused */, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
