/*******************************************************************************
* PSoC 101 Training Lessons: UART-Test
********************************************************************************
*
* Get a char from the UART and, if it is lower case, change it to upper case
* and write it back to the UART.
*
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Start the UART and print a string. In the loop, read a character, check the
* range for a lower case ASCI value, and write back the upper case value.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	int ch;						/* Character read from the UART */
	
	/* Start the UART and print the string */
    UART_Start();
	UART_UartPutString( "Type a lower case character\r\n" );
    
    for(;;)
    {
		/* read the character and, if lower case, convert and send it back */
		ch = UART_UartGetChar();
		if( ( ch >= 'a' ) && ( ch <= 'z' ) )
		{
			UART_UartPutChar( ch + ( 'A' - 'a' ) );
		}
    }
}
