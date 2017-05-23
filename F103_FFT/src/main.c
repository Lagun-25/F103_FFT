
#include "stm32f10x.h"
#include "common.h"
#include "config.h"

int main(void)
{

	GPIO_Config();
	TIMERS_Config();

	while(1){

		LED_TOG;
		delay_ms(1000);

	}
}
