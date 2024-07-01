#ifndef _CONFIG_MANAGER_H_
#define _CONFIG_MANAGER_H_

#include "stm32f1xx_hal.h"

#include "main.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"


#define LED_1_PORT GPIOB
#define LED_2_PORT GPIOB
#define LED_3_PORT GPIOB

#define LED_1_PIN GPIO_PIN_12
#define LED_2_PIN GPIO_PIN_13
#define LED_3_PIN GPIO_PIN_14


/**
 * @brief Config clock of system
 * 
 */
void SystemClock_Config(void);




/**
 * @brief Configuration all functions
 * 
 */
void config_functions(void);



#endif

