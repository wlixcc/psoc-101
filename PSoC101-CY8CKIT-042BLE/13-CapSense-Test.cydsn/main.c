/*******************************************************************************
* PSoC 101 Training Lessons: CapSense-Test
********************************************************************************
*
* Report left or right button presses on the UART.
*
* Note: this project uses pins P1.1 and P1.5, on opposite ends of the slider,
* as buttons.
*
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Set up the CapSense component for scanning. In the loop, check if it is busy
* (scans take time) and, if not, process the result. If the state of a button
* has changed write a message to the UART. Finally, reset the baseline value
* for the block and start another scan.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
    uint32 button0 = 0;             /* Current button state */
    uint32 button1 = 0;  
    
    uint32 button0_down = 0;        /* Previous button state */
    uint32 button1_down = 0;
    
	CyGlobalIntEnable;				/* Enable global interrupts */
	
	/* Start the components */
    UART_Start();	
	CapSense_Start();				/* Interrupts MUST be enabled */
	
	/* Set up the initial baseline CapSense values and start a scan */
	CapSense_InitializeAllBaselines();
	CapSense_ScanEnabledWidgets();
    
    for(;;)
    {
		/* Check if the scan is complete */
		if( ! CapSense_IsBusy() )
		{
            /* Read the buttons */
            button0 = CapSense_CheckIsWidgetActive( CapSense_BUTTON0__BTN );
            button1 = CapSense_CheckIsWidgetActive( CapSense_BUTTON1__BTN );
            
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
