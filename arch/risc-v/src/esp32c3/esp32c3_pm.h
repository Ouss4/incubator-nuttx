/****************************************************************************
 * arch/risc-v/src/esp32c3/esp32c3_pm.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#ifndef __ARCH_RISCV_SRC_ESP32C3_ESP32C3_PM_H
#define __ARCH_RISCV_SRC_ESP32C3_ESP32C3_PM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <stdint.h>

#ifndef __ASSEMBLY__

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

#ifdef CONFIG_PM

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

/****************************************************************************
 * Name:  esp32c3_sleep_enable_timer_wakeup
 *
 * Description:
 *   Configure wake-up interval
 *
 * Input Parameters:
 *   time_in_us - Configure wake-up time interval
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void esp32c3_sleep_enable_timer_wakeup(uint64_t time_in_us);

/****************************************************************************
 * Name:  esp32c3_light_sleep_start
 *
 * Description:
 *   Enter sleep mode
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   0 is returned on success or a negated errno value is returned
 *
 ****************************************************************************/

int esp32c3_light_sleep_start(void);

/****************************************************************************
 * Name: esp32c3_pminit
 *
 * Description:
 *   Initialize force sleep parameters.
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void esp32c3_pminit(void);

/****************************************************************************
 * Name: esp32c3_pmstandby
 *
 * Description:
 *   Enter force sleep time interval.
 *
 * Input Parameters:
 *   time_in_us - force sleep time interval
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void esp32c3_pmstandby(uint64_t time_in_us);

/****************************************************************************
 * Name:  esp32c3_deep_sleep_start
 *
 * Description:
 *   Enter deep sleep mode
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void esp32c3_deep_sleep_start(void);

/****************************************************************************
 * Name: esp32c3_pmsleep
 *
 * Description:
 *   Enter deep sleep.
 *
 * Input Parameters:
 *   time_in_us - deep sleep time interval
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

void esp32c3_pmsleep(uint64_t time_in_us);

#endif /* CONFIG_PM */

#ifdef __cplusplus
}
#endif
#undef EXTERN

#endif /* __ASSEMBLY__ */
#endif /* __ARCH_RISCV_SRC_ESP32C3_ESP32C3_PM_H */
