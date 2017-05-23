
#include "stm32f10x.h"
#include "common.h"

TIM_TimeBaseInitTypeDef  TIM_TimeBaseMili_InitStructure;

void delay_ms(uint16_t czas) {

	TIM_SetCounter(TIM2,czas); // ustawia wartosc Period

	TIM_Cmd(TIM2, ENABLE);
	while (TIM_GetCounter(TIM2));
	TIM_Cmd(TIM2, DISABLE);

}
