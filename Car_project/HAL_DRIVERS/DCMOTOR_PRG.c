/*
 * DCMOTOR_PRG.c
 *
 *  Created on: ??�/??�/????
 *      Author: HP
 */

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

/* Lower Layer Interface Files*/
#include <util/delay.h>

/* Own Driver Files*/
#include "../MCAL_DRIVERS/DIO_interface.h"
#include "../MCAL_DRIVERS/TIMER_Interface.h"
#include "DCMOTOR_Private.h"
#include "DCMOTOR_CFG.h"

void DcMotor_VidInit(void){
	/*set the direction of the two input pins of the dc motor to be output pins */
	DIO_VidSetPinDirection(DC_MOTOR_PORT , DC_MOTOR_PIN1 , HIGH);
	DIO_VidSetPinDirection(DC_MOTOR_PORT , DC_MOTOR_PIN2 , HIGH);
	DIO_VidSetPinDirection(DC_MOTOR_PORT , DC_MOTOR_PIN3 , HIGH);
	DIO_VidSetPinDirection(DC_MOTOR_PORT , DC_MOTOR_PIN4 , HIGH);

	/*initialize the dc motor to be stop at the beginning*/
	DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN1 , LOW);
	DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN2 , LOW);
	DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN3 , LOW);
	DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN4 , LOW);

	/* to init used timer*/
	switch (TARGET_TIMER){
	case TIMER0 : TIMER0_VidInitialize();  break ;
	case TIMER2 : TIMER2_VidInitialize();  break ;
	}
}

void DcMotor_VidRotate_Wheels1(u8 state){
	switch(state){
	case STOP:
		/*make the dc motor stop*/
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN1 , LOW);
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN2 , LOW);
		break;
	case CLK_WISE:
		/*make the dc motor start in CLOCK_WISE direction*/
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN1 , LOW);
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN2 , HIGH);
		break;
	case ANTI_CLK_WISE:
		/*make the dc motor start in ANTI_CLOCK_WISE  direction*/
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN1 , HIGH);
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN2 , LOW);
		break;
	}
}

void DcMotor_VidRotate_Wheels2(u8 state){
	switch(state){
	case STOP:
		/*make the dc motor stop*/
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN3 , LOW);
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN4 , LOW);
		break;
	case CLK_WISE:
		/*make the dc motor start in CLOCK_WISE direction*/
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN3 , LOW);
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN4 , HIGH);
		break;
	case ANTI_CLK_WISE:
		/*make the dc motor start in ANTI_CLOCK_WISE  direction*/
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN3 , HIGH);
		DIO_VidSetPinValue(DC_MOTOR_PORT , DC_MOTOR_PIN4 , LOW);
		break;
	}
}

void DcMotor_VidSetPWMPulsePercentage(u8 PulsePercentage){
	Timer2_VidSETDUTY(PulsePercentage);
}
