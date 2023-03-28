/*
 * Watchdog_Prg.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */

#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"
#include "Watchdog_Interface.h"
#include "Watchdog_Private.h"

void Watchdog_VidEnable(){
	/*
	WDP2  WDP1   WDP0     Number of WDT          Typical Time-out     Typical Time-out
	                      Oscillator Cycles       at VCC = 3.0V        at VCC = 5.0V
	0     0        0        16K (16,384)             17.1 ms             16.3 ms
	0     0        1        32K (32,768)             68.5 ms              65 ms
	0     1        0        64K (65,536)             68.5 ms              65 ms
	0     1        1        128K (131,072)           0.14 s               0.13 s
	1     0        0        256K (262,144)           0.27 s               0.26 s
	1     0        1        512K (524,288)           0.55 s               0.52 s
	1     1        0        1,024K (1,048,576)       1.1 s                1.0 s
	1     1        1        2,048K (2,097,152)       2.2 s                2.1 s
	*/

	//Watch_dog Enable
	SET_BIT(WDTCR,WDE);

	//1 1 0 WDP2 WDP1 WDP0 1.0 s
	CLR_BIT(WDTCR,WDP2);
	SET_BIT(WDTCR,WDP1);
	SET_BIT(WDTCR,WDP0);
}

void Watchdog_VidDisable(){
	/* Write logical one to WDTOE and WDE in same operation */
	WDTCR = ( 1<<WDTOE ) | ( 1<<WDE ) ;

	/* Turn off WDE within 4 cycles */
	WDTCR = 0x00 ;
}
