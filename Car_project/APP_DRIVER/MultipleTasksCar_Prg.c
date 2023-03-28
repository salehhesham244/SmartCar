/*
 * MultipleTasksCar_Prg.c
 *
 *  Created on: 18/12/2022
 *  Author: ENG/Shehab aldeen
 */

/*     Libraries    */
   /******************/

/* Lower Layer Interface Files*/
#include "MultipleTasksCar_Interface.h"
#include "MultipleTasksCar_Private.h"
#include "MultipleTasksCar_Cfg.h"

/* Own Driver Files*/
      /**********************/
/*
 Name        : MultipleTasksCar_VidInit
 Input       : void
 Output      : void
 Description : to initialise the states of the car
*/
void MultipleTasksCar_VidInit(){
	/**/
	BluetoothInit();
	DcMotor_VidInit();

	/**/
	GIE_VidEnable();
	Ultrasonic_init();

	/**/
	MultipleTasksCar_SetCarVelocity('3');

	/**/
	ADC_init();
    LDR_mode();

}

/*
 Name        : MultipleTasksCar_SetCarVelocity
 Input       : u8
 Output      : void
 Description : to set the velocity of car
*/
void MultipleTasksCar_SetCarVelocity (u8 VelocityNUMBER){
	switch (VelocityNUMBER){
	case '1' :	DcMotor_VidSetPWMPulsePercentage(QUARTER_PERCENTAGE);         break ;
	case '2' : 	DcMotor_VidSetPWMPulsePercentage(HALF_PERCENTAGE);            break ;
	case '3' :  DcMotor_VidSetPWMPulsePercentage(THREE_QUARTER_PERCENTAGE);   break ;
	case '4' :  DcMotor_VidSetPWMPulsePercentage(FULL_PERCENTAGE);            break ;
	case '5' :  DcMotor_VidSetPWMPulsePercentage(STOP);                       break ;
	}
}

/*
 Name        : MultipleTasksCar_GetDirections
 Input       : void
 Output      : void
 Description : to set the directions of the car
 steps       : determine derctions by press numbers that u wanted
               up ^    down ^'   right >    left <    stop 'select'

               if driver continue in come back within obtacle , car will be automaticaaly stopped

                to lighten system accroding to the intensity in room
*/
void MultipleTasksCar_GetDirections(){

	/* to stop without input data from bluetooth by watch dog timer */
	//Watchdog_VidEnable();
    u8 direction = Bluetooth_U32Getnumber() ;
    //Watchdog_VidDisable();

    /* to get distance on back car */
    //u16 distance = Ultrasonic_readDistance();

	switch (direction){
	 case UP :
		DcMotor_VidRotate_Wheels1(ANTI_CLK_WISE);
		DcMotor_VidRotate_Wheels2(ANTI_CLK_WISE);
		break ;
	case DOWN :
		DcMotor_VidRotate_Wheels1(CLK_WISE);
		DcMotor_VidRotate_Wheels2(CLK_WISE);
		break ;
	case RIGHT :
		DcMotor_VidRotate_Wheels1(STOP);
		DcMotor_VidRotate_Wheels2(CLK_WISE);
		break ;
	case LEFT :
	    DcMotor_VidRotate_Wheels1(CLK_WISE);
		DcMotor_VidRotate_Wheels2(STOP);
		break ;
	case NO_THING :
		DcMotor_VidRotate_Wheels1(STOP);
		DcMotor_VidRotate_Wheels2(STOP);
		break ;
    }//end switch

	/* to prevent driver from come back if there is an obtacle*/
	/*if (distance < MIN_DISTANCE_1 && distance > MIN_DISTANCE_2){
		Timer2_VidSETDUTY(THIRTY_PERCENTAGE);
	}//end if
	else if (distance < MIN_DISTANCE_2){
		/* to stop pulse*/
		//Timer2_VidSETDUTY(ZERO_PERCENTAGE);

		/*to stop wheels*/
		/*DcMotor_VidRotate_Wheels1(STOP);
		DcMotor_VidRotate_Wheels2(STOP);
	}//end else

	/* to lighten system accroding to the intensity in room*/
    Auto_Air_Conditioner_unit_Init();
	process();

}
