/**
 * \file halLed.h
 *
 * \brief LEDs interface
 *
 * Copyright (C) 2012-2014, Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 * Modification and other use of this code is subject to Atmel's Limited
 * License Agreement (license.txt).
 *
 * $Id: halLed.h 9267 2014-03-18 21:46:19Z ataradov $
 *
 */

#ifndef _HAL_LED_H_
#define _HAL_LED_H_

/*- Includes ---------------------------------------------------------------*/
#include "hal.h"
#include "halGpio.h"

/*- Definitions ------------------------------------------------------------*/
#if defined(PLATFORM_RCB256RFR2)
  HAL_GPIO_PIN(LED0, E, 2);
  HAL_GPIO_PIN(LED1, E, 3);
  HAL_GPIO_PIN(LED2, E, 4);

#elif defined(PLATFORM_XPLAINED_PRO_ATMEGA256RFR2)
  HAL_GPIO_PIN(LED0, B, 4);
  HAL_GPIO_PIN(LED1, B, 5); // Not on the board
  HAL_GPIO_PIN(LED2, B, 6); // Not on the board

#endif

/*- Implementations --------------------------------------------------------*/

/*************************************************************************//**
*****************************************************************************/
INLINE void HAL_LedInit(void)
{
}

/*************************************************************************//**
*****************************************************************************/
INLINE void HAL_LedClose(void)
{
}

/*************************************************************************//**
*****************************************************************************/
INLINE void HAL_LedOn(uint8_t i)
{
}

/*************************************************************************//**
*****************************************************************************/
INLINE void HAL_LedOff(uint8_t i)
{
}

/*************************************************************************//**
*****************************************************************************/
INLINE void HAL_LedToggle(uint8_t i)
{
}

#endif // _HAL_LED_H_
