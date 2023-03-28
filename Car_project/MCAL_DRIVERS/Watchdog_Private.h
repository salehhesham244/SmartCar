/*
 * Watchdog_Private.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: HP
 */

#ifndef WATCHDOG_PRIVATE_H_
#define WATCHDOG_PRIVATE_H_

#define MCUCSR  *((volatile u8*)(0x54))
#define JTRF  4
#define WDRF  3
#define BORF  2
#define EXTRF 1
#define PORF  0

#define WDTCR   *((volatile u8*)(0x41))
#define WDTOE 4
#define WDE   3
#define WDP2  2
#define WDP1  1
#define WDP0  0

#endif /* WATCHDOG_PRIVATE_H_ */
