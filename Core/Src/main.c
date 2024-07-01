#include "config_manager.h"
#include "time.h"

void routine_10ms(void);
void routine_100ms(void);
void routine_500ms(void);
void routine_5s(void);





int main(void)
{
  config_functions();

  while (1) {
    timing_routine();

    
  }
}

  
  
  

/**
 * @brief Must be execute each 10ms
 * 
 */
void routine_10ms(void){
  // HAL_GPIO_TogglePin(LED_1_PORT, LED_1_PIN);
}



/**
 * @brief Must be execute each 100ms
 * 
 */
void routine_100ms(void){
  // HAL_GPIO_TogglePin(LED_2_PORT, LED_2_PIN);
}



/**
 * @brief Must be execute each 500ms
 * 
 */
void routine_500ms(void){
}



/**
 * @brief Must be execute each 5ms
 * 
 */
void routine_5s(void){
  HAL_GPIO_TogglePin(LED_3_PORT, LED_3_PIN);

}




/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}




#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
