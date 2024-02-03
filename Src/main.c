#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "STD_Functions.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "SysTick_interface.h"
#include "NVIC_interface.h"
#include "EXTI_interface.h"
#include "DMA_interface.h"
#include "UART_interface.h"

static u8 reading=0;

int main (){

RCC_VoidSysClckInit();
RCC_VoidEnablePerClck(RCC_APB2, 14);
RCC_VoidEnablePerClck(RCC_APB2, 2);

GPIO_voidSetPinDirection(PORTA,9, GPIO_OUTPUT_2MHZ_AFPP);
GPIO_voidSetPinDirection(PORTA,10,GPIO_INPUT_FLOATING);

GPIO_voidSetPinDirection(PORTA, 1, GPIO_OUTPUT_2MHZ_PP);


UART_voidinit();
UART_voidTxEnable();
UART_voidRxEnable();

UART_voidSendString('6');
_delay_ms(1000);
reading=UART_RecieveString();
_delay_ms(1000);


while(1){
if(reading=='6'){
	GPIO_voidSetPinValue(PORTA,1,GPIO_HIGH);
	_delay_ms(5000);

}

}
return 0;
}

