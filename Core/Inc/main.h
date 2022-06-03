/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ECD1_H1_Pin GPIO_PIN_0
#define ECD1_H1_GPIO_Port GPIOC
#define ECD1_H2_Pin GPIO_PIN_1
#define ECD1_H2_GPIO_Port GPIOC
#define ECD2_H1_Pin GPIO_PIN_2
#define ECD2_H1_GPIO_Port GPIOC
#define ECD2_H2_Pin GPIO_PIN_3
#define ECD2_H2_GPIO_Port GPIOC
#define NRF_CE_Pin GPIO_PIN_4
#define NRF_CE_GPIO_Port GPIOA
#define NRF_CS_Pin GPIO_PIN_4
#define NRF_CS_GPIO_Port GPIOC
#define QTR_OUT1_Pin GPIO_PIN_12
#define QTR_OUT1_GPIO_Port GPIOB
#define QTR_OUT2_Pin GPIO_PIN_13
#define QTR_OUT2_GPIO_Port GPIOB
#define QTR_OUT3_Pin GPIO_PIN_14
#define QTR_OUT3_GPIO_Port GPIOB
#define QTR_OUT4_Pin GPIO_PIN_15
#define QTR_OUT4_GPIO_Port GPIOB
#define QTR_OUT5_Pin GPIO_PIN_6
#define QTR_OUT5_GPIO_Port GPIOC
#define US_TRIG_Pin GPIO_PIN_7
#define US_TRIG_GPIO_Port GPIOC
#define US_ECHO_Pin GPIO_PIN_8
#define US_ECHO_GPIO_Port GPIOC
#define BUZZER_Pin GPIO_PIN_9
#define BUZZER_GPIO_Port GPIOC
#define STOP_Pin GPIO_PIN_8
#define STOP_GPIO_Port GPIOA
#define ENB_Pin GPIO_PIN_3
#define ENB_GPIO_Port GPIOB
#define L298_IN3_Pin GPIO_PIN_4
#define L298_IN3_GPIO_Port GPIOB
#define L298_IN4_Pin GPIO_PIN_5
#define L298_IN4_GPIO_Port GPIOB
#define L298_IN2_Pin GPIO_PIN_6
#define L298_IN2_GPIO_Port GPIOB
#define L298_IN1_Pin GPIO_PIN_7
#define L298_IN1_GPIO_Port GPIOB
#define ENA_Pin GPIO_PIN_8
#define ENA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
