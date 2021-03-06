/**
 * @file    IO_Config.h
 * @brief
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __IO_CONFIG_H__
#define __IO_CONFIG_H__

#include "NuMicro.h"

#define SWD_DAT_IO   PA9
#define SWD_DAT_GRP  PA
#define SWD_DAT_BIT  9

#define SWD_CLK_IO   PA10
#define SWD_CLK_GRP  PA
#define SWD_CLK_BIT  10

#define JTAG_TMS_IO  SWD_DAT_IO
#define JTAG_TMS_GRP SWD_DAT_GRP
#define JTAG_TMS_BIT SWD_DAT_BIT

#define JTAG_TCK_IO  SWD_CLK_IO
#define JTAG_TCK_GRP SWD_CLK_GRP
#define JTAG_TCK_BIT SWD_CLK_BIT

#define JTAG_TDI_IO  PA5
#define JTAG_TDI_GRP PA
#define JTAG_TDI_BIT 5

#define JTAG_TDO_IO  PA4
#define JTAG_TDO_GRP PA
#define JTAG_TDO_BIT 4

#define DBG_RST_IO   PF5
#define DBG_RST_GRP  PF
#define DBG_RST_BIT  5

#define LED_ICE_IO   PF4
#define LED_ICE_GRP  PF
#define LED_ICE_BIT  4

#define LED_ISP_IO   PC6
#define LED_ISP_GRP  PC
#define LED_ISP_BIT  6

#define LED_RED_IO   PB9
#define LED_RED_GRP  PB
#define LED_RED_BIT  9

#define LED_GRE_IO   PB8
#define LED_GRE_GRP  PB
#define LED_GRE_BIT  8

#endif
