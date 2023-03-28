/*
 * MultipleTasksCar_Interface.h
 *
 *  Created on: 18/12/2022
 *  Author: ENG/Shehab aldeen
 */

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"

/* Lower Layer Interface Files*/
#include "../APP_DRIVER/MultipleTasksCar_Private.h"
#include "../APP_DRIVER/MultipleTasksCar_Cfg.h"

/* Own Driver Files*/
    /* no needed */

#ifndef APP_DRIVER_MULTIPLETASKSCAR_INTERFACE_H_
#define APP_DRIVER_MULTIPLETASKSCAR_INTERFACE_H_

void MultipleTasksCar_VidInit();
void MultipleTasksCar_GetDirections();
void MultipleTasksCar_SetCarVelocity(u8 VelocityPercentage);


#endif /* APP_DRIVER_MULTIPLETASKSCAR_INTERFACE_H_ */
