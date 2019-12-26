/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"

int main(void)
{
    uint16 sliderval;
    uint16 oldsliderval = 0xFFFF;
    char msg[10];
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();
    //1.初始化CapSense
    CapSense_Start();
    //2.初始化基线
    CapSense_InitializeAllBaselines();
    //3.scan all of the enabled widgets
    CapSense_ScanEnabledWidgets();

    for(;;)
    {
       if(! CapSense_IsBusy())
       {
            sliderval = CapSense_GetCentroidPos(CapSense_LINEARSLIDER0__LS);
            //1.若手没有触摸,返回0xffff. 这里只在有触摸并且值有变化的时候发送数据
            if (sliderval != 0xffff && sliderval != oldsliderval)
            {
                sprintf(msg, "%3d\r\n", sliderval);
                UART_UartPutString(msg);
                oldsliderval = sliderval;
            }
            CapSense_UpdateEnabledBaselines();
            CapSense_ScanEnabledWidgets();
       }
    }
}

/* [] END OF FILE */
