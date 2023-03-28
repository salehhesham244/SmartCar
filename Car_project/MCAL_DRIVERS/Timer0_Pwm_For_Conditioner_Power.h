/*
 * Timer0_Pwm_For_Led_Intensity.h
 *
 *  Created on: Mar 1, 2023
 *      Author: saber
 */

#ifndef TIMER0_PWM_FOR_CONDITIONER_POWER_H_
#define TIMER0_PWM_FOR_CONDITIONER_POWER_H_
/*
 * Description:
 * Generate a PWM signal with frequency 500Hz
 * Timer0 will be used with pre-scaler F_CPU/8
 * F_PWM=(F_CPU)/(256*N) = (10^6)/(256*8) = 500Hz
 * Duty Cycle can be changed by updating the value
 * in The Compare Register
 */
void Timer0_PWM_Init(unsigned char set_duty_cycle);
void Timer0_PWM_DeInit();
#endif /* TIMER0_PWM_FOR_CONDITIONER_POWER_H_ */
