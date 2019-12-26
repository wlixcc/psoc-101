/*******************************************************************************
* PSoC 101 Training Lessons: Timer-Test
********************************************************************************
*
* Measure inter-pulse times on SW2 using a Timer. Set the PWM compare value
* accordingly to generate a brightness that depends on the length of time that
* the switch was pressed. Start the Timer when SW is pressed and stop it when it
* is released (then read it). Set a maximum press time of 10s (10000ms).
*
* Note: This time, the start and reload terminals act on a rising edge, stop
* and capture on a falling edge.
*
*/

#include <project.h>

/* Define the maximum PWM period and increments for the compare value */
#define PWM_INCREMENT	(100)
#define PWM_MAXIMUM		(10000)

/* Define a useful delay time */
#define FIFTY_MS		(50)


/*******************************************************************************
* Function Name: Timer_Int_Handler
********************************************************************************
*
* The switch has been pressed so copy the Timer counter value into the PWM
* compare. If the switch was not pressed for more than 10s, simply set the
* compare to the maximum (green).
*
* Parameters:	None
*
* Return:		None
*
*******************************************************************************/
CY_ISR( Timer_Int_Handler )
{
	uint16 counter = Timer_ReadCounter();	/* Timer counter value (ms) */
	
	if( counter > PWM_MAXIMUM )
	{
		counter = PWM_MAXIMUM;				/* Press > 10s, so green LED on */
	}
	
	PWM_WriteCompare( counter );			/* Change the PWM output */
	
	Timer_ClearInterrupt( Timer_INTR_MASK_CC_MATCH );
}


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Start the PWM and set its period. Start the Timer and install the ISR.
* No other application code is needed.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	CyGlobalIntEnable;
	
	/* Start the PWM and change the period */
    PWM_Start();
	PWM_WritePeriod( PWM_MAXIMUM );
	
	/* Start the Timer and install the interrupt handler */
	Timer_Start();
	Timer_Int_StartEx( Timer_Int_Handler );

    for(;;)
    {
		/* No application code needed */
	}
}
