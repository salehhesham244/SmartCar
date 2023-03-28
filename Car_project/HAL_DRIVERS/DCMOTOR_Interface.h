/*
 * DCMOTOR_Interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */

#ifndef DCMOTOR_INTERFACE_H_
#define DCMOTOR_INTERFACE_H_

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

void DcMotor_VidInit(void);
void DcMotor_VidRotate_Wheels1(u8 state);
void DcMotor_VidRotate_Wheels2(u8 state);
void DcMotor_VidSetPWMPulsePercentage(u8 PulsePercentage);

#endif /* DCMOTOR_INTERFACE_H_ */
