/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// This file defines GPIO lookup macros for available UART IO_MUX pins on ESP32C3.

#ifndef _SOC_UART_CHANNEL_H
#define _SOC_UART_CHANNEL_H

//UART channels
#define UART_GPIO21_DIRECT_CHANNEL      UART_NUM_0
#define UART_NUM_0_TXD_DIRECT_GPIO_NUM  21
#define UART_GPIO20_DIRECT_CHANNEL      UART_NUM_0
#define UART_NUM_0_RXD_DIRECT_GPIO_NUM  20

#define UART_TXD_GPIO21_DIRECT_CHANNEL  UART_GPIO21_DIRECT_CHANNEL
#define UART_RXD_GPIO20_DIRECT_CHANNEL  UART_GPIO20_DIRECT_CHANNEL

#endif
