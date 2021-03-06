/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "hal/simulation/SPIAccelerometerData.h"

#include "hal/simulation/SimDataValue.h"

extern "C" {
void HALSIM_ResetSPIAccelerometerData(int32_t index) {}

#define DEFINE_CAPI(TYPE, CAPINAME, RETURN) \
  HAL_SIMDATAVALUE_STUB_CAPI(TYPE, HALSIM, SPIAccelerometer##CAPINAME, RETURN)

DEFINE_CAPI(HAL_Bool, Active, false)
DEFINE_CAPI(int32_t, Range, 0)
DEFINE_CAPI(double, X, 0)
DEFINE_CAPI(double, Y, 0)
DEFINE_CAPI(double, Z, 0)

void HALSIM_RegisterSPIAccelerometerAllCallbcaks(int32_t index,
                                                 HAL_NotifyCallback callback,
                                                 void* param,
                                                 HAL_Bool initialNotify) {}
}  // extern "C"
