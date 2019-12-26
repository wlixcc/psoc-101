/*******************************************************************************
* PSoC 101 Training Lessons: CapSense
********************************************************************************
*
* Read the finger position on a CapSense slider and write it to the UART.
*
* Note: this project uses STDIO to enable the sprintf() function from the C RTL.
*/

#include <project.h>

#include <stdio.h>

/* CapSense slider API returns -1 (16-bit) when no finger is present */
#define NO_FINGER		(0xFFFF)

/* Buffer size for the string to print to UART */
#define MSGSIZE			(10)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Set up the CapSense component for scanning. In the loop, check if it is busy
* (scans take time) and, if not, process the result. If there was no finger
* present the GetCentroidPos() function returns NO_FINGER so ignore that. If a
* finger is present (and moved) write the value to the UART. Finally, reset the
* baseline value for the block and start another scan.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	uint16 sliderval;				    /* Finger position */
    uint16 oldsliderval = NO_FINGER;	/* Previous finger position */
    
	char msg[MSGSIZE];			    	/* Local buffer for the string */
	
	CyGlobalIntEnable;				    /* Enable global interrupts */
	
	/* Start the components */
    UART_Start();	
	CapSense_Start();	    			/* Interrupts MUST be enabled */
	
	/* Set up the initial baseline CapSense values and start a scan */
	CapSense_InitializeAllBaselines();
	CapSense_ScanEnabledWidgets();
    
    for(;;)
    {
		/* Check if the scan is complete */
		if( ! CapSense_IsBusy() )
		{
			/* Read the finger position */
			sliderval = CapSense_GetCentroidPos( CapSense_LINEARSLIDER0__LS );

			/* If a finger is present and moved write the position to the UART */
			if( sliderval != NO_FINGER && sliderval != oldsliderval )
			{
				sprintf( msg, "%3d\r\n", sliderval );
				UART_UartPutString( msg );
                oldsliderval = sliderval;
			}
			
			/* Set up for the next scan */
			CapSense_UpdateEnabledBaselines();
			CapSense_ScanEnabledWidgets();
		}
	}
}
