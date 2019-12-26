/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
 

int main(void)
{
    uint8 pwm1_compare = 0;
    uint8 pwm2_compare = 0;
    
    uint8 i2cbuffer[2] = {0};
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_Start();
    PWM_1_Start();
    
    I2C_Start();
    //第一个参数决定了buffersize, 第二个参数决定可写的size
    I2C_EzI2CSetBuffer1(2, 2, i2cbuffer);
   
    for(;;)
    {
        /* Place your application code here. */
        if(pwm1_compare != i2cbuffer[0]) 
        {
            pwm1_compare = i2cbuffer[0];
            PWM_WriteCompare(pwm1_compare);
        }
        
        if(pwm2_compare != i2cbuffer[1]) 
        {
            pwm2_compare = i2cbuffer[1];
            PWM_1_WriteCompare(pwm2_compare);
        }
    }
}

/* [] END OF FILE */
