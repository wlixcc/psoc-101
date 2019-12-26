/*******************************************************************************
* PSoC 101 Training Lessons: I2CReceive-Test
********************************************************************************
*
* Allow an I2C master (Bridge Control Panel) to change the compare value of two
* PWMs so that it can control the colors of the green and red LEDs independently.
* This version has a two-byte I2C buffer - one for each PWM.
*
*/

#include <project.h>

/* Define a 2-byte I2C buffer that can be written from the master */
#define I2CBUFSIZE		(2)
#define I2CWRITEABLE	(2)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Create a two-byte I2C buffer and set it up to accept updates from the master.
* Write the updated values into the PWM compares so that the LEDs change color.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	uint16 compare_0 = 0;			/* PWM_0 compare value from I2C */
	uint16 compare_1 = 0;			/* PWM_1 value (green LED) */
	
	uint8 i2cbuf[I2CBUFSIZE];		/* I2C buffer */
	i2cbuf[0] = 0;					/* Initialize buffer content for safety */
	i2cbuf[1] = 0;
	
	CyGlobalIntEnable;				/* Enable global interrupts */
	
	/* Start the PWMs */
    PWM_0_Start();
    PWM_1_Start();

	/* Start the I2C and set up the receive buffer.
	Note that the I2CWRITEABLE argument tells EZI2C that it is OK for the master
	to write to both bytes in the array */
	EZI2C_Start();
	EZI2C_EzI2CSetBuffer1( I2CBUFSIZE, I2CWRITEABLE, i2cbuf );

    for(;;)
    {
        /* If the master has changed the compare value, write it into the PWM */
        if( compare_0 != i2cbuf[0] )
        {
            compare_0 = i2cbuf[0];            
            PWM_0_WriteCompare( compare_0 );
        }
        
        /* Repeat the above for the second PWM / LED */
        if( compare_1 != i2cbuf[1] )
        {
            compare_1 = i2cbuf[1];
            PWM_1_WriteCompare( compare_1 );
        }        
	}
}
