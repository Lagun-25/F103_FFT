
#ifndef COMMON_H_
#define COMMON_H_

#define LED_ON GPIO_SetBits(GPIOA, GPIO_Pin_5)
#define LED_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_5)
#define LED_TOG GPIO_WriteBit(GPIOA, GPIO_Pin_5, (BitAction)(1-GPIO_ReadOutputDataBit(GPIOA, GPIO_Pin_5)))

void delay_ms(uint16_t czas);

#endif /* COMMON_H_ */
