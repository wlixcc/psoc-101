/*******************************************************************************
* PSoC 101 Training Lessons: SoftwareInputPins
********************************************************************************
*
* Copy the state of the input pin (switch) to the output pin (LED).
* 
*/

#include <project.h>


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Repeatedly read the state of the switch and write it to the LED.
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
		/* Read the switch pin and write its state to the LED pin */
        Pin_Red_Write( Pin_SW2_Read() );
    }
}

