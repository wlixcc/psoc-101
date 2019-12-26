/*******************************************************************************
* PSoC 101 Training Lessons: Counter
********************************************************************************
*
* Toggle the green LED in an ISR every three presses of SW2.
*
*/

#include <project.h>


/*******************************************************************************
* Function Name: Counter_Int_Handler
********************************************************************************
*
* Toggle the green LED pin and clear the interrupt when the Timer hits the
* terminal count value (TC).
*
* Parameters:	None
*
* Return:		None
*
*******************************************************************************/
CY_ISR( Counter_Int_Handler )
{
	Pin_Green_Write( ~ Pin_Green_Read() );
	
	/* Clear the interrupt in the TCPWM hardware */
	Counter_ClearInterrupt( Counter_INTR_MASK_TC );
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
    
	/* Start the Counter and install the ISR */
    Counter_Start();
	Counter_Int_StartEx( Counter_Int_Handler );
    
    for(;;)
    {
        /* Place your application code here */
    }
}
