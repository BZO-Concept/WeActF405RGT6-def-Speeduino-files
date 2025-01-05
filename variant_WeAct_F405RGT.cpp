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
#if defined(ARDUINO_WeAct_F405RGT)

#include "pins_arduino.h"

// Digital PinName array
// This array allows to wrap Arduino pin number(Dx or x)
// to STM32 PinName (PX_n)
const PinName digitalPin[] = {
  PB_13,  PB_12, 
  PB_15,  PB_14,                 
  PC_7,   PC_6,                
  PC_9,   PC_8,                  
  PA_9,   PA_8,                   
  PA_11,  PA_10,            
  PA_15,  PA_12,
  PC_11,  PC_10,                  
  PD_2,   PC_12,                
  PB_4,   PB_3,                   
  PB_6,   PB_5,         
  PB_8,   PB_7,               
  PB_9,   PC_13,              
  PC_14,  PC_15,            
  PC_0,   PC_1,          
  PC_2,   PC_3,
  PA_0,   PA_1,
  PA_2,   PA_3,
  PA_4,   PA_5,
  PA_6,   PA_7,
  PC_4,   PC_5,
  PB_0,   PB_1,
  PB_2,   PB_10,
  PB_11,  PA_13,
  PA_14
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  32, // A0
  33, // A1
  34, // A2
  35, // A3
  36, // A4
  37, // A5
  38, // A6
  39, // A7
  42, // A8
  43, // A9
  28, // A10
  29, // A11
  30, // A12
  31, // A13
  40, // A14
  41  // A15

};

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};

  /**Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
    Error_Handler();
  }

  /* Ensure CCM RAM clock is enabled */
  __HAL_RCC_CCMDATARAMEN_CLK_ENABLE();

}

#ifdef __cplusplus
}
#endif

#endif /* ARDUINO_WeAct_F405RGT */