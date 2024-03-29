/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-08-11     SkyLin       the first version
 */
#ifndef HAL_INCLUDE_HAL_H_
#define HAL_INCLUDE_HAL_H_

#include "tim.h"
#include <board.h>
#include <rtthread.h>
#include <rtdevice.h>

#define ledFlash GET_PIN(A,1)

void HalInit();

#endif /* HAL_INCLUDE_HAL_H_ */
