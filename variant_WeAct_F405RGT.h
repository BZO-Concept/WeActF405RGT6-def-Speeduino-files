/*
 *******************************************************************************
 * Copyright (c) 2017-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 * Variant for Arduino STM32 Core created by BZO Concept 05/01/2025 -France-
 *                           For Speeduino Project 
 *     BZO page https://www.facebook.com/profile.php?id=100086365535718
 *******************************************************************************
 */
#pragma once
//            PROG PORT
//              ----
//      3v3    |8  7|   RST
//SWDIO-PA13   |6  5|  PA9-TX
//SWCLK-PA14   |4  3|  PA10-RX
//	    GND	   |2  1|   GND
//              ----
//
// See "Doc" for SDcard pinout

/*----------------------------------------------------------------------------
 *  STM32 pins number -- 0 => Next to USB port
 *----------------------------------------------------------------------------*/
 //LEFT, UP FIRST
#define PB13                     0 
#define PB12                     1
#define PB15                     2
#define PB14                     3
#define PC7                      4
#define PC6                      5
#define PC9                      6
#define PC8                      7
#define PA9                      8
#define PA8                      9
#define PA11                     10 //USB DN
#define PA10                     11
#define PA15                     12
#define PA12                     13 //USB DP
#define PC11                     14
#define PC10                     15
#define PD2                      16
#define PC12                     17
#define PB4                      18
#define PB3                      19
#define PB6                      20
#define PB5                      21
#define PB8                      22
#define PB7                      23
//GND                            24
#define PB9                      24

//RIGHT, DOWN FIRST, Next to Quartz
#define PC13                     25
#define PC14                     26 //if SB1 OFF (RTC quartz) a tester
#define PC15                     27 //IF SB2 OFF (RTC quartz) a tester
#define PC0                      PIN_A10
#define PC1                      PIN_A11
#define PC2                      PIN_A12
#define PC3                      PIN_A13
#define PA0                      PIN_A0
#define PA1                      PIN_A1
#define PA2                      PIN_A2
#define PA3                      PIN_A3
#define PA4                      PIN_A4
#define PA5                      PIN_A5
#define PA6                      PIN_A6
#define PA7                      PIN_A7
#define PC4                      PIN_A14
#define PC5                      PIN_A15
#define PB0                      PIN_A8
#define PB1                      PIN_A9
#define PB2                      44 //LED BUILT IN/BOOT1
#define PB10                     45
#define PB11                     46
#define PA13                     47 //ON PROG PORT SWDIO
#define PA14                     48 //ON PROG PORT SWCLK

// Alternate pins number
#define PA0_ALT1                (PA0  | ALT1)
#define PA0_ALT2                (PA0  | ALT2)
#define PA1_ALT1                (PA1  | ALT1)
#define PA1_ALT2                (PA1  | ALT2)
#define PA2_ALT1                (PA2  | ALT1)
#define PA2_ALT2                (PA2  | ALT2)
#define PA3_ALT1                (PA3  | ALT1)
#define PA3_ALT2                (PA3  | ALT2)
#define PA4_ALT1                (PA4  | ALT1)
#define PA5_ALT1                (PA5  | ALT1)
#define PA6_ALT1                (PA6  | ALT1)
#define PA7_ALT1                (PA7  | ALT1)
#define PA7_ALT2                (PA7  | ALT2)
#define PA7_ALT3                (PA7  | ALT3)
#define PA15_ALT1               (PA15 | ALT1)
#define PB0_ALT1                (PB0  | ALT1)
#define PB0_ALT2                (PB0  | ALT2)
#define PB1_ALT1                (PB1  | ALT1)
#define PB1_ALT2                (PB1  | ALT2)
#define PB3_ALT1                (PB3  | ALT1)
#define PB4_ALT1                (PB4  | ALT1)
#define PB5_ALT1                (PB5  | ALT1)
#define PB8_ALT1                (PB8  | ALT1)
#define PB9_ALT1                (PB9  | ALT1)
#define PB14_ALT1               (PB14 | ALT1)
#define PB14_ALT2               (PB14 | ALT2)
#define PB15_ALT1               (PB15 | ALT1)
#define PB15_ALT2               (PB15 | ALT2)
#define PC0_ALT1                (PC0  | ALT1)
#define PC0_ALT2                (PC0  | ALT2)
#define PC1_ALT1                (PC1  | ALT1)
#define PC1_ALT2                (PC1  | ALT2)
#define PC2_ALT1                (PC2  | ALT1)
#define PC2_ALT2                (PC2  | ALT2)
#define PC3_ALT1                (PC3  | ALT1)
#define PC3_ALT2                (PC3  | ALT2)
#define PC4_ALT1                (PC4  | ALT1)
#define PC5_ALT1                (PC5  | ALT1)
#define PC6_ALT1                (PC6  | ALT1)
#define PC7_ALT1                (PC7  | ALT1)
#define PC8_ALT1                (PC8  | ALT1)
#define PC9_ALT1                (PC9  | ALT1)
#define PC10_ALT1               (PC10 | ALT1)
#define PC11_ALT1               (PC11 | ALT1)

#define NUM_DIGITAL_PINS        49
#define NUM_ANALOG_INPUTS       16

// On-board LED pin number

#ifndef LED_BUILTIN
  #define LED_BUILTIN           PB2
#endif

// I2C Definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA          PB9
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL          PB8
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM6
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM7
#endif

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  1
#endif

// Default pin used for 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA10
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA9
#endif

//#ifndef HAVE_HWSERIAL2
//  #define HAVE_HWSERIAL2
//#endif 

/* Extra HAL modules */
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_SD_MODULE_DISABLED)
  #define HAL_SD_MODULE_ENABLED
#endif

// This indicates that there is an external and fixed 1.5k pullup
// on the D+ line. This define is only needed on boards that have
// internal pullups *and* an external pullup. Note that it would have
// been better to omit the pullup and exclusively use the internal
// pullups instead.
#define USBD_FIXED_PULLUP

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial1
  #endif
#endif