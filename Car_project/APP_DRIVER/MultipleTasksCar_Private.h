/*
 * MultipleTasksCar_Private.h
 *
 *
 *  Created on: 18/12/2022
 *  Author: ENG/Shehab aldeen
 */

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"
#include "avr/delay.h"

/* Lower Layer Interface Files*/
#include "../HAL_DRIVERS/Bluetooth_Interface.h"
#include "../HAL_DRIVERS/DCMOTOR_Interface.h"
#include "../HAL_DRIVERS/lm35_sensor.h"
#include "../HAL_DRIVERS/ULTRASONIC_Interface.h"
#include "../HAL_DRIVERS/LDR.h"

/* Own Driver Files*/
#include "../MCAL_DRIVERS/Watchdog_Interface.h"
#include "../MCAL_DRIVERS/INTERRUPT_Interface.h"
#include "../MCAL_DRIVERS/adc.h"

#ifndef APP_DRIVER_MULTIPLETASKSCAR_PRIVATE_H_
#define APP_DRIVER_MULTIPLETASKSCAR_PRIVATE_H_

#define TRIAL 5

#define UP       'a'
#define DOWN     'b'
#define RIGHT    'c'
#define LEFT     'd'
#define NO_THING 'e'

#define HIGH 1
#define LOW 0

//define wanted states
#define STOP          0
#define CLK_WISE      1
#define ANTI_CLK_WISE 2

//define PORT
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define ZERO_PERCENTAGE          0
#define THIRTY_PERCENTAGE        30
#define HALF_PERCENTAGE          50
#define FULL_PERCENTAGE          100
#define QUARTER_PERCENTAGE       25
#define THREE_QUARTER_PERCENTAGE 75

#define MIN_DISTANCE_1      15
#define MIN_DISTANCE_2      5

/* private functions  */
void MultipleTasksCar_DCMotorVelocity(u8 CopyVelocityPercentage);

#endif /* APP_DRIVER_MULTIPLETASKSCAR_PRIVATE_H_ */
