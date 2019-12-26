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
#include <project.h>


CY_ISR(Timer_Int_Handler)
{
    Timer_ClearInterrupt(Timer_INTR_MASK_TC);
}

int main (void)
{
    CyGlobalIntEnable;   /* Enable global interrupts */
    
    UART_Start();
    Timer_Int_StartEx(Timer_Int_Handler);
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    for(;;)
    {
        CyDelay(7000);
        UART_UartPutString("Going to Sleep in 3....\r\n");
        CyDelay(1000);
        UART_UartPutString("2...\r\n");
        CyDelay(1000);
        UART_UartPutString("1...(wake up in 10s)\r\n");
        CyDelay(1000);
        Timer_Start();
        //任何终端可以终止睡眠状态
        CySysPmSleep();
        
        UART_UartPutString("wake up\r\n");
    }
}

