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


CY_ISR(Timer_Int_Handler) 
{
    uint16 counter = Timer_ReadCapture();
    if (counter > 10000) 
    {
        counter = 10000;
    }
    PWM_WriteCompare(counter);
    
    Timer_ClearInterrupt(Timer_INTR_MASK_CC_MATCH);
    
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_Start();
    Timer_Start();
    Timer_Int_StartEx(Timer_Int_Handler);
    
   
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
