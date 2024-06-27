
#include "main.h"
#include "stm32f1xx_it.h"


extern TIM_HandleTypeDef htim2;




/******************************************************************************/
/*           Cortex-M3 Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  while (1) {
  }
}




void HardFault_Handler(void)
{

  while (1) {

  }
}




void MemManage_Handler(void)
{
  while (1) {

  }
}




void BusFault_Handler(void)
{

  while (1) {

  }
}




void UsageFault_Handler(void)
{

  while (1) {

  }
}




void SVC_Handler(void)
{

}




void DebugMon_Handler(void)
{

}




void PendSV_Handler(void)
{

}




/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  HAL_IncTick();
}

/******************************************************************************/
/* STM32F1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f1xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles TIM2 global interrupt.
  */
void TIM2_IRQHandler(void)
{
  HAL_TIM_IRQHandler(&htim2);
}


