/*******************************************************************************
* PSoC 101 Training Lessons: Interrupts-Test
********************************************************************************
*
* On a falling edge of the SW2 pin, generate an interrupt that toggles two LEDs
* on and off - one should go off as the other goes on.
*
*/

#include <project.h>


/*******************************************************************************
* Function Name: Pin_SW2_Handler
********************************************************************************
*
* Toggle the green and red LED pins and clear the interrupt.
*
* Parameters:	None
*
* Return:		None
*
*******************************************************************************/
CY_ISR( Pin_SW2_Handler )
{
	uint8 red_pin_state = Pin_Red_Read();
	
	/* Make the green LED take the state of the red LED */
	Pin_Green_Write( red_pin_state );
	
	/* Change the state of the red LED */
	Pin_Red_Write( ~ red_pin_state );
	
	Pin_SW2_ClearInterrupt();
}


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Install the ISR handler. No other application code required.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{
    CyGlobalIntEnable;      /* Enable global interrupts */
	   
	/* Install the ISR */
    Pin_SW2_Int_StartEx( Pin_SW2_Handler );
    
    for(;;)
    {
		/* No application code needed */
    }
}
