/*
 * M0PWM7.h
 * ----------
 * Inspired by the PWM example in ValvanoWare by Dr. Jonathan Valvano
 * as well as his book Embedded Systems: Real-Time Interfacing to Arm Cortex-M Microcontrollers
 * You can find VavanoWare at http://users.ece.utexas.edu/~valvano/arm/downloadmsp432.html
 * You can find his book at https://www.amazon.com/gp/product/1463590156/ref=oh_aui_detailpage_o05_s00?ie=UTF8&psc=1
 * You can find more of his work at http://users.ece.utexas.edu/~valvano/
 * ----------
 * Zee Livermorium
 * Dec 21, 2017
 */

#include <stdint.h>
#include "tm4c123gh6pm.h"   // put tm4c123gh6pm.h in your project folder or change this line

/*
 * Function: void M0PWM7_Init(uint16_t period, uint16_t duty)
 * Parameters:
 *   - period: period of the PWM signal
 *   - duty: duty cycle of the PWM signal
 * Discription: Initialize M0PWM7/PC5.
 */
void M0PWM7_Init(uint16_t period, uint16_t duty);

/*
 * Function: void M0PWM7_Set_Duty(uint16_t duty)
 * Parameters:
 *   - duty: new duty cycle to be set.
 * Discription: Set duty cycle of the PWM signal to a new value.
 */
void M0PWM7_Set_Duty(uint16_t duty);

