/*******************************************************************************
* PSoC 101 Training Lessons: Interrupts
********************************************************************************
*
* On a falling edge of the SW2 pin, generate an interrupt that toggles the LED
* state.
*
*/

#include <project.h>


/*******************************************************************************
* Function Name: Pin_SW2_Handler
********************************************************************************
*
* Toggle the red LED pin and clear the interrupt.
*
* Parameters:	None
*
* Return:		None
*
*******************************************************************************/
CY_ISR( Pin_SW2_Handler )
{
	/* Change the state of the red LED */
	Pin_Red_Write( ~ Pin_Red_Read() );
	
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
