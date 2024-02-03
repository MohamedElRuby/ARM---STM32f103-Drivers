################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ADC_main.c \
../Src/ADC_program.c \
../Src/DMA__program.c \
../Src/DMA_main.c \
../Src/EXTI_program.c \
../Src/GPIO_main.c \
../Src/GPIO_program.c \
../Src/NVIC_main.c \
../Src/NVIC_program.c \
../Src/RCC_program.c \
../Src/SysTick_program.c \
../Src/UART_program.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/ADC_main.o \
./Src/ADC_program.o \
./Src/DMA__program.o \
./Src/DMA_main.o \
./Src/EXTI_program.o \
./Src/GPIO_main.o \
./Src/GPIO_program.o \
./Src/NVIC_main.o \
./Src/NVIC_program.o \
./Src/RCC_program.o \
./Src/SysTick_program.o \
./Src/UART_program.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/ADC_main.d \
./Src/ADC_program.d \
./Src/DMA__program.d \
./Src/DMA_main.d \
./Src/EXTI_program.d \
./Src/GPIO_main.d \
./Src/GPIO_program.d \
./Src/NVIC_main.d \
./Src/NVIC_program.d \
./Src/RCC_program.d \
./Src/SysTick_program.d \
./Src/UART_program.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/EXTI" -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/GPIO" -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/NVIC" -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/RCC" -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/SysTick" -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/DMA" -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/ADC" -I"C:/Users/hp/Desktop/NTI/STM32F103_Drivers/Inc/UART" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/ADC_main.cyclo ./Src/ADC_main.d ./Src/ADC_main.o ./Src/ADC_main.su ./Src/ADC_program.cyclo ./Src/ADC_program.d ./Src/ADC_program.o ./Src/ADC_program.su ./Src/DMA__program.cyclo ./Src/DMA__program.d ./Src/DMA__program.o ./Src/DMA__program.su ./Src/DMA_main.cyclo ./Src/DMA_main.d ./Src/DMA_main.o ./Src/DMA_main.su ./Src/EXTI_program.cyclo ./Src/EXTI_program.d ./Src/EXTI_program.o ./Src/EXTI_program.su ./Src/GPIO_main.cyclo ./Src/GPIO_main.d ./Src/GPIO_main.o ./Src/GPIO_main.su ./Src/GPIO_program.cyclo ./Src/GPIO_program.d ./Src/GPIO_program.o ./Src/GPIO_program.su ./Src/NVIC_main.cyclo ./Src/NVIC_main.d ./Src/NVIC_main.o ./Src/NVIC_main.su ./Src/NVIC_program.cyclo ./Src/NVIC_program.d ./Src/NVIC_program.o ./Src/NVIC_program.su ./Src/RCC_program.cyclo ./Src/RCC_program.d ./Src/RCC_program.o ./Src/RCC_program.su ./Src/SysTick_program.cyclo ./Src/SysTick_program.d ./Src/SysTick_program.o ./Src/SysTick_program.su ./Src/UART_program.cyclo ./Src/UART_program.d ./Src/UART_program.o ./Src/UART_program.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

