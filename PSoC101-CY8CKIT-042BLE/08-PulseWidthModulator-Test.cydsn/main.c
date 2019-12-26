/*******************************************************************************
* PSoC 101 Training Lessons: PulseWidthModulator-Test
********************************************************************************
*
* Smoothly change the LED color from red to yellow to green, then repeat.
*
*/

#include <project.h>


/* Define the maximum PWM period and increments for the compare value */
#define PWM_INCREMENT	(100)
#define PWM_MAXIMUM		(10000)

/* Define a useful delay time */
#define FIFTY_MS		(50)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Start the PWM and set the compare value to a number makes the mathematics easy
* (this can also be done by editing the period value in the component dialog).
* In the loop, write the compare value then increment it and wait a while. If
* the compare value gets to the maximum, set it back to zero. 
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	uint16 compare = 0;			/* PWM compare value */
	
	/* Start the PWM and change the period */
    PWM_Start();
	PWM_WritePeriod( PWM_MAXIMUM );

    for(;;)
    {
		/* Change the compare value and wait 50ms */		
        PWM_WriteCompare( compare );
		CyDelay( FIFTY_MS );
		
		/* Calculate the next compare value */
		compare += PWM_INCREMENT;
        
        /* Return to the intial state - red on, green off */
		if( compare >= PWM_MAXIMUM )
		{
			compare = 0;
		}
    }
}
