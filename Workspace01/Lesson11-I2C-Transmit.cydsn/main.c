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
 
    
    uint8 i2cbuffer[1] = {0};
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_Start();
    
    I2C_Start();
    //第一个参数决定了buffersize, 第二个参数决定可写的size
    I2C_EzI2CSetBuffer1(1, 0, i2cbuffer);
   
    for(;;)
    {
        /* Place your application code here. */
        i2cbuffer[0] = PWM_ReadCounter();
    }
}

/* [] END OF FILE */
