/*******************************************************************************
* PSoC 101 Training Lessons: Sleep
********************************************************************************
*
* Enable power measurement on the board by running for ten seconds then going
* to sleep until the timer expires.
*
*/

#include <project.h>

/* Define times to allow active mode current measurement */
#define ONE_SECOND		    (1000)
#define SEVEN_SECONDS		(7*ONE_SECOND)


/*******************************************************************************
* Function Name: Timer_Int_Handler
********************************************************************************
*
* Clear the interrupt and return.
*
* Parameters:	None
*
* Return:		None
*
*******************************************************************************/
CY_ISR( Timer_Int_Handler )
{
	/* Just clear the interrupt and return */
	Timer_ClearInterrupt( Timer_INTR_MASK_TC );
}


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Install the Timer ISR handler and start the UART. Simply wait 10s then start
* the Timer and go to sleep.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{
    CyGlobalIntEnable; 		/* Enable global interrupts. */
	
	/* Install the interrupt handler */
	Timer_Int_StartEx( Timer_Int_Handler );
    
    /* Start the UART */
    UART_Start();

    for(;;)
    {
		/* Allow time to measure the active current and then sleep */
        CyDelay( SEVEN_SECONDS );
        UART_UartPutString( "Going to Sleep in 3..." );
        CyDelay( ONE_SECOND );
        UART_UartPutString( " 2..." );
        CyDelay( ONE_SECOND );
        UART_UartPutString( " 1... (wake up in 10s)" );
        CyDelay( ONE_SECOND );

        /* Start the one-shot Timer and go to sleep */
        Timer_Start();
		CySysPmSleep();
        /* No need to stop Timer - it is one-shot so can just be restarted */
        
        UART_UartPutString( "\r\nAwake!!\r\n" );
    }
}
