/*
 * Bluetooth_Interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */

#ifndef HAL_DRIVERS_BLUETOOTH_INTERFACE_H_
#define HAL_DRIVERS_BLUETOOTH_INTERFACE_H_

/*     Libraries    */
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

void BluetoothInit();
u32 Bluetooth_U32Getnumber();
void Bluetooth_VidSendData(u8 Copy_U8Data);
void BluetoothVidSendString (u8 Copy_U8String[]);

#endif /* HAL_DRIVERS_BLUETOOTH_INTERFACE_H_ */
