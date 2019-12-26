/*******************************************************************************
* PSoC 101 Training Lessons: I2CTransmit
********************************************************************************
*
* Allow an I2C master (Bridge Control Panel) to sample the PWM compare value so
* that it can display the sawtooth pattern of the counter value. This version
* has a one-byte buffer (max is 255).
*
*/

#include <project.h>

/* Define a 1-byte I2C buffer that can NOT be written from the master */
#define I2CBUFSIZE		(1)
#define I2CWRITEABLE	(0)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Create a one-byte I2C buffer and set it up to deny updates from the master.
* Write the PWM compare value into the buffer to allow sampling.
*
* Parameters:	None
*
* Return:		int (not used)
*
*******************************************************************************/
int main()
{   
	uint8 i2cbuf[I2CBUFSIZE];		/* I2C buffer */
	i2cbuf[0] = 0;					/* Initialize buffer content for safety */
	
	CyGlobalIntEnable;				/* Enable global interrupts */
	
	/* Start the PWM */
    PWM_Start();

	/* Start the I2C and set up the receive buffer.
	Note that the I2CWRITEABLE argument tells EZI2C that it is OK for the master
	to write to both bytes in the array */
	EZI2C_Start();
	EZI2C_EzI2CSetBuffer1( I2CBUFSIZE, I2CWRITEABLE, i2cbuf );

    for(;;)
    {
		/* Update the buffer content */
		i2cbuf[0] = PWM_ReadCounter();
	}
}
