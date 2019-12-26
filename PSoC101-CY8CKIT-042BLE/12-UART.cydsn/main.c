/*******************************************************************************
* PSoC 101 Training Lessons: UART
********************************************************************************
*
* Print "Hello World!" on reset. UART is set to 115200, 8, n, 1.
*
* On 042 kit wire UART:Tx P0.5 to header J8_9, UART:Rx P0.4 to header J8_10.
*
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Start the UART and print the string. No other application code required.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   	
	/* Start the UART and print the string */
    UART_Start();
	UART_UartPutString( "Hello World!\r\n" );
    
    for(;;)
    {
		/* No application code needed */
	}
}
