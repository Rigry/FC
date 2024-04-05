/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOC
#define ASYNC_Pin GPIO_PIN_2
#define ASYNC_GPIO_Port GPIOA
#define LED_CAN_Pin GPIO_PIN_9
#define LED_CAN_GPIO_Port GPIOC
#define UNLOAD_Pin GPIO_PIN_15
#define UNLOAD_GPIO_Port GPIOA
#define CONDENS_Pin GPIO_PIN_12
#define CONDENS_GPIO_Port GPIOC
#define Contactor_Pin GPIO_PIN_2
#define Contactor_GPIO_Port GPIOD
#define VENT_Pin GPIO_PIN_4
#define VENT_GPIO_Port GPIOB
#define LED_GREEN_Pin GPIO_PIN_5
#define LED_GREEN_GPIO_Port GPIOB
#define TD_DM_Pin GPIO_PIN_7
#define TD_DM_GPIO_Port GPIOB
#define SP_Pin GPIO_PIN_8
#define SP_GPIO_Port GPIOB
#define START_Pin GPIO_PIN_9
#define START_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
