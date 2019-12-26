/*******************************************************************************
* PSoC 101 Training Lessons: StatusRegister
********************************************************************************
*
* Use toggle flip-flops to cycle the RGB LED through 4 colors (off, red, green,
* yellow) and print the current status via the UART.
*
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* When the register value changes build a string with its value and a carriage
* return (but no line feed) and print it to the UART.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
    int status = 0;         /* Current value of the register */
    
    int oldstatus = -1;     /* Previous value (initialize to to !status) */
	
    CyGlobalIntEnable;      /* Enable global interrupts */
	
	UART_Start();
	
    for(;;)
    {
        /* Read the status */
        status = Status_Read();
        
		/* If it changed, create the string and print it */
        if ( status != oldstatus )
        {
            oldstatus = status;
   
            UART_UartPutChar( '0' + status );
            UART_UartPutChar( '\r' );
        }
    }
}
