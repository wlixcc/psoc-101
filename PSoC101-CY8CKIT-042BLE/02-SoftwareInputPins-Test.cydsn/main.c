/*******************************************************************************
* PSoC 101 Training Lessons: SoftwareInputPins-Test
********************************************************************************
*
* Toggle the red LED on/off and the green LED off/on when the switch is pressed.
* 
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Repeatedly read the state of the switch and write the inverted value to the
* red LED and the unchanged value to the green LED.
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
		/* Read the switch pin and update the LED pins */
        Pin_Red_Write( ~ Pin_SW2_Read() );		/* Inverted */
		Pin_Green_Write( Pin_SW2_Read() );		/* Unchanged */
    }
}
