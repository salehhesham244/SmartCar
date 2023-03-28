################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL_DRIVERS/Auto_Air_Conditioner_unit.c \
../HAL_DRIVERS/BlueTooth_prg.c \
../HAL_DRIVERS/DCMOTOR_PRG.c \
../HAL_DRIVERS/LDR.c \
../HAL_DRIVERS/UltraSonic_Prg.c \
../HAL_DRIVERS/lm35_sensor.c 

OBJS += \
./HAL_DRIVERS/Auto_Air_Conditioner_unit.o \
./HAL_DRIVERS/BlueTooth_prg.o \
./HAL_DRIVERS/DCMOTOR_PRG.o \
./HAL_DRIVERS/LDR.o \
./HAL_DRIVERS/UltraSonic_Prg.o \
./HAL_DRIVERS/lm35_sensor.o 

C_DEPS += \
./HAL_DRIVERS/Auto_Air_Conditioner_unit.d \
./HAL_DRIVERS/BlueTooth_prg.d \
./HAL_DRIVERS/DCMOTOR_PRG.d \
./HAL_DRIVERS/LDR.d \
./HAL_DRIVERS/UltraSonic_Prg.d \
./HAL_DRIVERS/lm35_sensor.d 


# Each subdirectory must supply rules for building sources it contributes
HAL_DRIVERS/%.o: ../HAL_DRIVERS/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


