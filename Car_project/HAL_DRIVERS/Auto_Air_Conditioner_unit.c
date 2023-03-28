/*
 * Au
to_Air_Conditioner_unit.c
 *
 *  Created on: Mar 1, 2023
 *      Author: saber
 */
#include "lm35_sensor.h"
#include "std_types.h"
#include "util/delay.h"
#include "Auto_Air_Conditioner_unit.h"
#include "../MCAL_DRIVERS/adc.h"
#include "../MCAL_DRIVERS/Timer0_Pwm_For_Conditioner_Power.h"
void Auto_Air_Conditioner_unit_Init()
{
	uint8 Temperature=LM35_getTemperature();
	if(Temperature>=15&&Temperature<=35)
	{
		Timer0_PWM_Init(Full_Power);
	}
	else if(Temperature>=25&&Temperature<=27)
	{
		Timer0_PWM_Init(Half_Power);
	}
	else if(Temperature>=27&&Temperature<=29)
	{
		Timer0_PWM_Init(Three_Quarters_of_Power);
	}
	else if(Temperature>29)
	{
		Timer0_PWM_Init(Full_Power);
	}
	else
	{
		Timer0_PWM_DeInit();
	}

}
