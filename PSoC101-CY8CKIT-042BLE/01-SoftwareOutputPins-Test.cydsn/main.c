/*******************************************************************************
* PSoC 101 Training Lessons: SoftwareOutputPins-Test
********************************************************************************
*
* Vary the duty cycle (on/off time) so that the LED is lit for longer than it
* is off.
* 
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Repeatedly turn the LED on for 800ms and off for 200ms.
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
		/* Turn the pin on (active low) for 800ms */
        Pin_Red_Write( 0 );
		CyDelay( 800 );
		
		/* Turn the pin off for 200ms */
        Pin_Red_Write( 1 );
		CyDelay( 200 );		
    }
}

