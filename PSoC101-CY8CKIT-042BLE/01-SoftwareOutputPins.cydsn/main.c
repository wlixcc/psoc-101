/*******************************************************************************
* PSoC 101 Training Lessons: SoftwareOutputPins
********************************************************************************
*
* Blink an LED once per second.
* 
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Read the pin state, invert it, write it back twice per second.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{
    for(;;)
    {
		/* Toggle the red LED pin (read - invert - write) */
        Pin_Red_Write( ~ Pin_Red_Read() );
		
		/* Delay half a second */
		CyDelay( 500 );
    }
}

