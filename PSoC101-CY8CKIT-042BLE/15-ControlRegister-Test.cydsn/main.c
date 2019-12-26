/*******************************************************************************
* PSoC 101 Training Lessons: ControlRegister-Test
********************************************************************************
*
* Switch the brightness of the red LED from fully on, to bright, to dim, to off,
* once per second.
*
*/

#include <project.h>

/* Number of MUX channels */
#define NUM_CHANNELS		(4)

/* Define a convenient time */
#define ONE_SECOND	        (1000)

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Start the PWM and change the mux input every second.
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
