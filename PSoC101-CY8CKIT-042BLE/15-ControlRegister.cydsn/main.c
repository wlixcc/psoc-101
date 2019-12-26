/*******************************************************************************
* PSoC 101 Training Lessons: ControlRegister
********************************************************************************
*
* Alternate the brightness of the red LED from bright to dim once per second.
*
*/

#include <project.h>

/* Number of MUX channels */
#define NUM_CHANNELS		(2)

/* Define a convenient time */
#define ONE_SECOND	        (1000)

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Start the PWM and swap the mux input every second.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
    int ctlval = 0;				/* Value of the control register */
    
	/* Start the PWM */
    PWM_Start();

    for(;;)
    {
		/* Write the register value once every second */
        Control_Write( ctlval );
        
        /* Change the register value or reset to zero */
        ctlval++;
        if( ctlval >= NUM_CHANNELS )
        {
            ctlval = 0;
        }
        
        CyDelay( ONE_SECOND );
    }
}
