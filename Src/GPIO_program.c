#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"
#include "GPIO_private.h"
#include "GPIO_interface.h"


void	GPIO_voidSetPinDirection		(u8 PortId,u8 PinId,u8 Direction){
	if(PortId<3 && PinId<16){
		if(PinId<8){
			switch(PortId){
			case PORTA:
				/*		CLEAR_BITS		*/
				GPIOA_CRL &= ~((0b1111)<<(PinId*4));
				/*		SET_BITS		*/
				GPIOA_CRL |= ((Direction)<<(PinId*4));
				break;
			case PORTB:
				/*		CLEAR_BITS		*/
				GPIOB_CRL &= ~((0b1111)<<(PinId*4));
				/*		SET_BITS		*/
				GPIOB_CRL |= ((Direction)<<(PinId*4));
				break;
			case PORTC:
				/*		CLEAR_BITS		*/
				GPIOC_CRL &= ~((0b1111)<<(PinId*4));
				/*		SET_BITS		*/
				GPIOC_CRL |= ((Direction)<<(PinId*4));
				break;
			}
		}else if(PinId>8){
			switch(PortId){
			case PORTA:
				/*		CLEAR_BITS		*/
				GPIOA_CRH &= ~((0b1111)<<(PinId*4));
				/*		SET_BITS		*/
				GPIOA_CRH |= ((Direction)<<(PinId*4));
				break;
			case PORTB:
				/*		CLEAR_BITS		*/
				GPIOB_CRH &= ~((0b1111)<<(PinId*4));
				/*		SET_BITS		*/
				GPIOB_CRH |= ((Direction)<<(PinId*4));
				break;
			case PORTC:
				/*		CLEAR_BITS		*/
				GPIOC_CRH &= ~((0b1111)<<(PinId*4));
				/*		SET_BITS		*/
				GPIOC_CRH |= ((Direction)<<(PinId*4));
				break;
			}
		}

	}
}


void	GPIO_voidSetPinValue			(u8 PortId,u8 PinId,u8 Value){
	if(PortId<3 && PinId<16){
		 if(Value==GPIO_HIGH){
			switch(PortId){
	        case PORTA:SET_BIT(GPIOA_ODR,PinId);break;
	        case PORTB:SET_BIT(GPIOB_ODR,PinId);break;
	        case PORTC:SET_BIT(GPIOC_ODR,PinId);break;
	        default: break;
			}
		}
		    else if(Value==GPIO_LOW){
           	switch(PortId){
            case PORTA: CLR_BIT(GPIOA_ODR,PinId); break;
            case PORTB: CLR_BIT(GPIOB_ODR,PinId); break;
            case PORTC: CLR_BIT(GPIOC_ODR,PinId); break;
            default: break;
        }
}
	}
}
