/*
 * main.c
 *
 *  Created on: 18/12/2022
 *  Author: ENG/Shehab aldeen
 */

#include "APP_DRIVER/MultipleTasksCar_Interface.h"


/* steps : 1 ) determine velocity 2) determine mode*/

int main (){
	/* initializiation function of car  */
	MultipleTasksCar_VidInit();

	/* to implemnet ur target mode */
	for(;;)
	{
		MultipleTasksCar_GetDirections() ;
	}//end while
	return 0 ;
}
