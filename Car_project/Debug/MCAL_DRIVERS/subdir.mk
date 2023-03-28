################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL_DRIVERS/DIO_prg.c \
../MCAL_DRIVERS/INTERRUPT_prg.c \
../MCAL_DRIVERS/TIMER_PRG.c \
../MCAL_DRIVERS/Timer0_Pwm_For_Conditioner_Power.c \
../MCAL_DRIVERS/UART_Prg.c \
../MCAL_DRIVERS/Watchdog_Prg.c \
../MCAL_DRIVERS/adc.c \
../MCAL_DRIVERS/gpio.c 

OBJS += \
./MCAL_DRIVERS/DIO_prg.o \
./MCAL_DRIVERS/INTERRUPT_prg.o \
./MCAL_DRIVERS/TIMER_PRG.o \
./MCAL_DRIVERS/Timer0_Pwm_For_Conditioner_Power.o \
./MCAL_DRIVERS/UART_Prg.o \
./MCAL_DRIVERS/Watchdog_Prg.o \
./MCAL_DRIVERS/adc.o \
./MCAL_DRIVERS/gpio.o 

C_DEPS += \
./MCAL_DRIVERS/DIO_prg.d \
./MCAL_DRIVERS/INTERRUPT_prg.d \
./MCAL_DRIVERS/TIMER_PRG.d \
./MCAL_DRIVERS/Timer0_Pwm_For_Conditioner_Power.d \
./MCAL_DRIVERS/UART_Prg.d \
./MCAL_DRIVERS/Watchdog_Prg.d \
./MCAL_DRIVERS/adc.d \
./MCAL_DRIVERS/gpio.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL_DRIVERS/%.o: ../MCAL_DRIVERS/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


