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
    int status = 0;
    int oldStatus = -1;
    
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();
    
    for(;;)
    {
        status = Status_Reg_Read();
        if(status != oldStatus) 
        {
            UART_UartPutChar('0' + status);
            UART_UartPutChar('\r');
            oldStatus = status;
        }
       
    }
}

/* [] END OF FILE */
