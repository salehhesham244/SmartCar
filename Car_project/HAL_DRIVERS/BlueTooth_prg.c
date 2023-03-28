/*
 * BlueTooth_prg.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */

#include "../MCAL_DRIVERS/UART_Interface.h"
#include "../Serivecs_driver/STD_TYPES.h"
#include "../Serivecs_driver/BIT_MATH.h"

void BluetoothInit(){
	UART_VidInit () ;
}
u32 Bluetooth_U32Getnumber(){
	return UART_VidRecieveData();
}
void Bluetooth_VidSendData(u8 Copy_U8Data){
	 UART_VidSendData(Copy_U8Data);
}
void BluetoothVidSendString (u8 Copy_U8String[]){
	UART_VidSendString(Copy_U8String);
}
