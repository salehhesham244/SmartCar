/*
 * LDR.c
 *
 *  Created on: 26 Feb 2023
 *      Author: Assem
 */

#include "LDR.h"
#include "../MCAL_DRIVERS/adc.h"
#include "../MCAL_DRIVERS/gpio.h"

void process (void)
{
	uint8 ledStatus =0;

	ledStatus =LDR_getLightIntensity();
			if(ledStatus)
			{
				GPIO_writePin(PORTD_ID,LED_PIN_ID , 1);
			}
			else
			{
				GPIO_writePin(PORTD_ID,LED_PIN_ID , 0);
			}

}

void LDR_mode (void)
{
	GPIO_setupPinDirection(LED_PORT, LED_PIN_ID, PIN_OUTPUT);
}

uint8 LDR_getLightIntensity (void)
{
	uint16 adc_value = 0;

	/* Read ADC channel where the LDR sensor is connected */
	adc_value = ADC_readChannel(SENSOR_CHANNEL_ID);

	/*Compare the ADC value with the Threshold value obtained from the sensor*/
	if(adc_value >= THRESHOLD_VALUE)
	{
		/* If the ADC value is larger than the threshold value then this means
		 * that the sensor can feel a suitable light intensity thus we turn off the LED*/
		return TURN_OFF_LIGHT;
	}
	else
	{
		/* If the ADC value is smaller than the threshold value then this means that
		 * the sensor cannot feel a suitable light intensity thus we turn on the LED*/
		return TURN_ON_LIGHT;
	}
	/* It's somewhat of a Negative logic*/
}
