/*******************************************************************************
* PSoC 101 Training Lessons: I2CReceive
********************************************************************************
*
* Allow an I2C master (Bridge Control Panel) to change the PWM compare value so
* that it can control the britghtness of the red LED.
*
*/

#include <project.h>

/* Define a 1-byte I2C buffer that can be written from the master */
#define I2CBUFSIZE		(1)
#define I2CWRITEABLE	(1)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Create a one-byte I2C buffer and set it up to accept updates from the master.
* Write the updated value into the PWM compare so the LED changes brightness.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	uint16 compare = 0;				/* PWM compare value from I2C */
	
	uint8 i2cbuf[I2CBUFSIZE];		/* I2C buffer */
	i2cbuf[0] = 0;					/* Initialize buffer content for safety */
	
	CyGlobalIntEnable;				/* Enable global interrupts */
	
	/* Start the PWM */
    PWM_Start();

	/* Start the I2C and set up the receive buffer.
	Note that the I2CWRITEABLE argument tells EZI2C that it is OK for the master
	to write to the first byte in the array */
	EZI2C_Start();
	EZI2C_EzI2CSetBuffer1( I2CBUFSIZE, I2CWRITEABLE, i2cbuf );

    for(;;)
    {
		/* If the master has changed the compare value, write it into the PWM */
		if( compare != i2cbuf[0] )
		{
            compare = i2cbuf[0];
			PWM_WriteCompare( compare );			
		}
	}
}
