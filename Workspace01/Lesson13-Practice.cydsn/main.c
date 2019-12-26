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
#include "stdio.h"

int main(void)
{
    uint32 button0 = 0;             /* Current button state */
    uint32 button1 = 0;  
    
    uint32 button0_down = 0;        /* Previous button state */
    uint32 button1_down = 0;
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();
    //1.初始化CapSense
    CapSense_Start();
    //2.初始化基线
    CapSense_InitializeAllBaselines();
    //3.scan all of the enabled widgets
    CapSense_ScanEnabledWidgets();

    for(;;)
    {
       if(! CapSense_IsBusy())
       {
            button0 = CapSense_CheckIsWidgetActive(CapSense_BUTTON0__BTN);
            button1 = CapSense_CheckIsWidgetActive(CapSense_BUTTON1__BTN);
            
            /* If button0 was not down and is now down, it was pressed */
			if( !button0_down && button0 )
			{
				UART_UartPutString( "LEFT pressed\r\n" );
                button0_down = 1;
			}
            
            /* If button0 was down and is now not down, it was released */
			if( button0_down && !button0 )
			{
				UART_UartPutString( "LEFT released\r\n" );
                button0_down = 0;
			}            
			
			/* If button1 was not down and is now down, it was pressed */
			if( !button1_down && button1 )
			{
				UART_UartPutString( "RIGHT pressed\r\n" );
                button1_down = 1;
			}
                        
            /* If button1 was down and is now not down, it was released */
			if( button1_down && !button1 )
			{
				UART_UartPutString( "RIGHT released\r\n" );
                button1_down = 0;
			}		
						
			/* Set up for the next scan */
			CapSense_UpdateEnabledBaselines();
			CapSense_ScanEnabledWidgets();
            
       }
    }
}

/* [] END OF FILE */
