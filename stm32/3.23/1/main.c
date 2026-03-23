/**
 ******************************************************************************
 * @file     main.c
 * @author   正点原子团队(ALIENTEK)
 * @version  V1.0
 * @date     2023-08-01
 * @brief    新建工程实验-HAL库版本实验
 * @license  Copyright (c) 2020-2032, 广州市星翼电子科技有限公司
 ******************************************************************************
 * @attention
 * 
 * 实验平台:正点原子 M48Z-M3最小系统板STM32F103版
 * 在线视频:www.yuanzige.com
 * 技术论坛:www.openedv.com
 * 公司网址:www.alientek.com
 * 购买地址:openedv.taobao.com
 ******************************************************************************
 */

#include "./SYSTEM/sys/sys.h"
#include "./SYSTEM/usart/usart.h"
#include "./SYSTEM/delay/delay.h"


int main(void)
{
    GPIO_InitTypeDef  gpio_initstruct;
	HAL_Init();                                             /* 初始化HAL库 */
    sys_stm32_clock_init(RCC_PLL_MUL9);                     /* 设置时钟, 72Mhz */
    delay_init(72);                                         /* 延时初始化 */
    usart_init(11520  0);                                     /* 初始化串口 */


    
	
	__HAL_RCC_GPIOB_CLK_ENABLE();

	
	gpio_initstruct.Pin = GPIO_PIN_8|GPIO_PIN_9
	                      | GPIO_PIN_10|GPIO_PIN_11
	                      | GPIO_PIN_12|GPIO_PIN_13
	                      | GPIO_PIN_14|GPIO_PIN_15;
	
	gpio_initstruct.Mode  = GPIO_MODE_OUTPUT_PP;
	gpio_initstruct.Pull  = GPIO_PULLUP;
	gpio_initstruct.Speed = GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(GPIOB, &gpio_initstruct);
	
    while(1)
    { 
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_RESET);
		delay_ms(100);
		
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_RESET);
		delay_ms(100);
		
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,GPIO_PIN_RESET);
		delay_ms(100);
		
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,GPIO_PIN_RESET);
		delay_ms(100);
		
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,GPIO_PIN_RESET);
		delay_ms(100);
		
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,GPIO_PIN_RESET);
		delay_ms(100);
		
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,GPIO_PIN_RESET);
		delay_ms(100);
		
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,GPIO_PIN_RESET);
		delay_ms(100);
    }
}
