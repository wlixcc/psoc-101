/*******************************************************************************
* PSoC 101 Training Lessons: DeepSleep-Test
********************************************************************************
*
* Enable power measurement on the board by repeatedly switching between Active
* and DeepSleep mode. Wake up on an I2C event and delay in active mode for the
* number of seconds written from the master (plus 2s).
*
*/

#include <project.h>

/* Define a 1-byte I2C buffer that can be written from the master */
#define I2CBUFSIZE		    (1)
#define I2CWRITEABLE	    (1)

/* Define times to allow active mode current measurement */
#define ONE_SECOND		    (1000)
#define DEFAULT_WAIT_SECS	(8)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Set up I2C to wake from DeepSleep. Allow time to measure the current draw
* then blink the red LED and go into DeepSleep mode. On wakeup blink the green
* LED and wait 10s before returning to DeepSleep.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{
	uint8 i2cbuf[I2CBUFSIZE];		/* I2C buffer */
	i2cbuf[0] = DEFAULT_WAIT_SECS;	/* Initialize buffer content */
    
    CyGlobalIntEnable;              /* Enable global interrupts */
  
    /* Start the I2C */
    I2C_Start();
    I2C_EzI2CSetBuffer1( I2CBUFSIZE, I2CWRITEABLE, i2cbuf );
       
    for(;;)
    {
        /* Flash the green LED for 1s */
        Output_Pin_0_Write( 0 );
        CyDelay( ONE_SECOND );
        Output_Pin_0_Write( 1 );
        
		/* Delay for time requested over I2C */
        CyDelay( i2cbuf[0] * ONE_SECOND );

        /* Flash the red LED for 1s */
        Output_Pin_1_Write( 0 );
        CyDelay( ONE_SECOND );
        Output_Pin_1_Write( 1 );
        
        /* Prepare the I2C for deep sleep wakeup and go into DeepSleep mode */        
        I2C_Sleep();
		CySysPmDeepSleep();
        I2C_Wakeup();
    }
}
