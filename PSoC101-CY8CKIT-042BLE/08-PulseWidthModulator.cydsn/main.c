/*******************************************************************************
* PSoC 101 Training Lessons: PulseWidthModulator
********************************************************************************
*
* Alternate the brightness of the red LED once per second.
*
*/

#include <project.h>

/* PWM compare values for a bright and a dim LED */
#define BRIGHT		(500)
#define DIM			(10000-500)

/* define a useful delay time */
#define ONE_SECOND	(1000)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Start the PWM and change the compare value every second.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	/* Start the PWM */
    PWM_Start();

    for(;;)
    {
		/* Change the compare value once every second */
        PWM_WriteCompare( BRIGHT );
		CyDelay( ONE_SECOND );
		
		PWM_WriteCompare( DIM );
		CyDelay( ONE_SECOND );
    }
}
