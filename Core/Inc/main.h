/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
#define DCMI_D4_Pin GPIO_PIN_4
#define DCMI_D4_GPIO_Port GPIOE
#define DCMI_D6_Pin GPIO_PIN_5
#define DCMI_D6_GPIO_Port GPIOE
#define DCMI_D7_Pin GPIO_PIN_6
#define DCMI_D7_GPIO_Port GPIOE
#define USER_Btn_Pin GPIO_PIN_13
#define USER_Btn_GPIO_Port GPIOC
#define RCC_OSC32_IN_Pin GPIO_PIN_14
#define RCC_OSC32_IN_GPIO_Port GPIOC
#define RCC_OSC32_OUT_Pin GPIO_PIN_15
#define RCC_OSC32_OUT_GPIO_Port GPIOC
#define RCC_OSC_IN_Pin GPIO_PIN_0
#define RCC_OSC_IN_GPIO_Port GPIOH
#define RCC_OSC_OUT_Pin GPIO_PIN_1
#define RCC_OSC_OUT_GPIO_Port GPIOH
#define Thermistor_1_Pin GPIO_PIN_0
#define Thermistor_1_GPIO_Port GPIOC
#define Thermistor_2_Pin GPIO_PIN_1
#define Thermistor_2_GPIO_Port GPIOC
#define Thermistor_3_Pin GPIO_PIN_2
#define Thermistor_3_GPIO_Port GPIOC
#define Thermistor_4_Pin GPIO_PIN_3
#define Thermistor_4_GPIO_Port GPIOC
#define TX4_Pin GPIO_PIN_0
#define TX4_GPIO_Port GPIOA
#define RX4_Pin GPIO_PIN_1
#define RX4_GPIO_Port GPIOA
#define RESET_Pin GPIO_PIN_2
#define RESET_GPIO_Port GPIOA
#define DCMI_HSYNC_Pin GPIO_PIN_4
#define DCMI_HSYNC_GPIO_Port GPIOA
#define SCK1_Pin GPIO_PIN_5
#define SCK1_GPIO_Port GPIOA
#define DCMI_PIXCLK_Pin GPIO_PIN_6
#define DCMI_PIXCLK_GPIO_Port GPIOA
#define MOSI1_Pin GPIO_PIN_7
#define MOSI1_GPIO_Port GPIOA
#define CS_Pin GPIO_PIN_4
#define CS_GPIO_Port GPIOC
#define User_LED_Pin GPIO_PIN_5
#define User_LED_GPIO_Port GPIOC
#define User_BTN_Pin GPIO_PIN_0
#define User_BTN_GPIO_Port GPIOB
#define RX7_Pin GPIO_PIN_7
#define RX7_GPIO_Port GPIOE
#define TX7_Pin GPIO_PIN_8
#define TX7_GPIO_Port GPIOE
#define SCK4_Pin GPIO_PIN_12
#define SCK4_GPIO_Port GPIOE
#define MISO4_Pin GPIO_PIN_13
#define MISO4_GPIO_Port GPIOE
#define MOSI4_Pin GPIO_PIN_14
#define MOSI4_GPIO_Port GPIOE
#define CSB12_Pin GPIO_PIN_12
#define CSB12_GPIO_Port GPIOB
#define SCK2_Pin GPIO_PIN_13
#define SCK2_GPIO_Port GPIOB
#define MISO2_Pin GPIO_PIN_14
#define MISO2_GPIO_Port GPIOB
#define MOSI2_Pin GPIO_PIN_15
#define MOSI2_GPIO_Port GPIOB
#define CS1_Pin GPIO_PIN_8
#define CS1_GPIO_Port GPIOD
#define CS2_Pin GPIO_PIN_9
#define CS2_GPIO_Port GPIOD
#define CS3_Pin GPIO_PIN_10
#define CS3_GPIO_Port GPIOD
#define Camera_PWDN_Pin GPIO_PIN_14
#define Camera_PWDN_GPIO_Port GPIOD
#define Camera_RESET_Pin GPIO_PIN_15
#define Camera_RESET_GPIO_Port GPIOD
#define DCMI_D0_Pin GPIO_PIN_6
#define DCMI_D0_GPIO_Port GPIOC
#define DCMI_D1_Pin GPIO_PIN_7
#define DCMI_D1_GPIO_Port GPIOC
#define DCMI_D2_Pin GPIO_PIN_8
#define DCMI_D2_GPIO_Port GPIOC
#define DCMI_D3_Pin GPIO_PIN_9
#define DCMI_D3_GPIO_Port GPIOC
#define RCC_MCO_1_Pin GPIO_PIN_8
#define RCC_MCO_1_GPIO_Port GPIOA
#define USB_D__Pin GPIO_PIN_11
#define USB_D__GPIO_Port GPIOA
#define USB_D_A12_Pin GPIO_PIN_12
#define USB_D_A12_GPIO_Port GPIOA
#define DEBUG_JTMS_SWDIO_Pin GPIO_PIN_13
#define DEBUG_JTMS_SWDIO_GPIO_Port GPIOA
#define DEBUG_JTCK_SWCLK_Pin GPIO_PIN_14
#define DEBUG_JTCK_SWCLK_GPIO_Port GPIOA
#define TX_Pin GPIO_PIN_10
#define TX_GPIO_Port GPIOC
#define RX_Pin GPIO_PIN_11
#define RX_GPIO_Port GPIOC
#define DCMI_D5_Pin GPIO_PIN_3
#define DCMI_D5_GPIO_Port GPIOD
#define ThermistorSel1_Pin GPIO_PIN_7
#define ThermistorSel1_GPIO_Port GPIOD
#define MISO1_Pin GPIO_PIN_4
#define MISO1_GPIO_Port GPIOB
#define DCMI_VSYNC_Pin GPIO_PIN_7
#define DCMI_VSYNC_GPIO_Port GPIOB
#define I2C1_SCL_Pin GPIO_PIN_8
#define I2C1_SCL_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_9
#define I2C1_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
