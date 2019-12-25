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
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_Start();
   
    int i = 0;
    for(;;)
    {
        PWM_WriteCompare(i * 100);
        i += 1;
        if(i > 100) {
            i = 0;
        }
        CyDelay(50);
        
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
