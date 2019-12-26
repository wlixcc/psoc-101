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
    UART_Start();
    UART_UartPutString("Hello World");
    
     
    uint32 value = 0;

    for(;;)
    {
       value = UART_UartGetChar();
       if(value >= 'a' && value <= 'z') {
            UART_UartPutChar(value + 'A' - 'a');     
       } 
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
