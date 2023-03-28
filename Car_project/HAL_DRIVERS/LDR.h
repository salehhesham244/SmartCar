 /******************************************************************************
 *
 * Module: Temperature Sensor
 *
 * File Name: lm35_sensor.h
 *
 * Description: header file for the LM35 Temperature Sensor driver
 *
 * Author: saber & assim
 *
 *******************************************************************************/

#ifndef LDR_H_
#define LDR_H_

#include "../Serivecs_driver/STD_TYPES.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define SENSOR_CHANNEL_ID         5
#define THRESHOLD_VALUE           20
#define TURN_ON_LIGHT             LOGIC_HIGH
#define TURN_OFF_LIGHT            LOGIC_LOW
#define LED_PIN_ID                PIN3_ID
#define LED_PORT                  PORTD_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for calculate the light intensity.
 */

void process (void);

/*
 * Description :
 * Function responsible for identify  LED pins .
 */

void LDR_mode (void);

/*
 * Description :
 * Function responsible for calculate the temperature from the ADC digital value.
 */
uint8 LDR_getLightIntensity (void);

#endif /* LDR_SENSOR_H_ */
