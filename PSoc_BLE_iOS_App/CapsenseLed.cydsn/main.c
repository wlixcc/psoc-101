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


uint16 fingerPos = 0XFFFF;
uint16 fingerPosOld = 0XFFFF;

//notify = 1 , 非nottify = 0
int capsenseNotify;

void updateLed() 
{
    //1.未连接,return
    if (CyBle_GetState() != CYBLE_STATE_CONNECTED)
    {
        return;
    }
    //2.获取LED状态取反
    int currentLed = (!red_Read());
    
    //3.写入GTTA
    CYBLE_GATTS_HANDLE_VALUE_NTF_T tempHandle;
    tempHandle.attrHandle = CYBLE_LEDCAPSENSE_LED_CHAR_HANDLE;
    tempHandle.value.val = (uint8*)&currentLed;
    tempHandle.value.len = 1;
    CyBle_GattsWriteAttributeValue(&tempHandle, 0, &cyBle_connHandle, 0);
}


void updateCapsense() 
{
    if (CyBle_GetState() != CYBLE_STATE_CONNECTED)
    {
        return;
    }
    
    CYBLE_GATTS_HANDLE_VALUE_NTF_T tempHandle;
    tempHandle.attrHandle = CYBLE_LEDCAPSENSE_CAPSENSE_CHAR_HANDLE;
    tempHandle.value.val = (uint8*)&fingerPos;
    tempHandle.value.len = 2;
    CyBle_GattsWriteAttributeValue(&tempHandle, 0, &cyBle_connHandle, 0);
    
    //若char被notify,每次值变化都进行通知
    if (capsenseNotify && (fingerPos != fingerPosOld))
    {
        CyBle_GattsNotification(cyBle_connHandle, &tempHandle);
        fingerPosOld = fingerPos;
    }
    
}

void bleCallBack(uint32 event, void* eventParam);

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    CapSense_Start();
    CapSense_InitializeEnabledBaselines();
    
    CyBle_Start(bleCallBack);

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        if (!CapSense_IsBusy())
        {
            fingerPos = CapSense_GetCentroidPos(CapSense_LINEARSLIDER0__LS);
            CapSense_UpdateEnabledBaselines();
            CapSense_ScanEnabledWidgets();
            updateCapsense();
         
        }
        
        CyBle_ProcessEvents();
        CyBle_EnterLPM(CYBLE_BLESS_DEEPSLEEP);
    }
}


void bleCallBack(uint32 event, void* eventParam) 
{
    CYBLE_GATTS_WRITE_REQ_PARAM_T *wrReqParam;
    switch(event)
    {
        //启动和断开连接的时候开始广播
        case CYBLE_EVT_STACK_ON:
        case CYBLE_EVT_GAP_DEVICE_DISCONNECTED:
            capsenseNotify = 0;
            CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
            PWM_Start();
            break;
         
        case CYBLE_EVT_GATT_CONNECT_IND:
            updateLed();
            updateCapsense();
            PWM_Stop();
            break;
            
        case CYBLE_EVT_GATTS_WRITE_REQ:
            wrReqParam = (CYBLE_GATTS_WRITE_REQ_PARAM_T *)eventParam;
            //app写led char value
            if (wrReqParam->handleValPair.attrHandle == CYBLE_LEDCAPSENSE_LED_CHAR_HANDLE)
            {
                //只有在允许写的情况下写入数据
                if(CYBLE_GATT_ERR_NONE == CyBle_GattsWriteAttributeValue(&wrReqParam->handleValPair, 0, &cyBle_connHandle, CYBLE_GATT_DB_PEER_INITIATED))
                {
                    red_Write(!wrReqParam->handleValPair.value.val[0]);
                    //必须要有响应
                    CyBle_GattsWriteRsp(cyBle_connHandle); 
                }
            }
            //request to update the capsense notification
            if (wrReqParam->handleValPair.attrHandle == CYBLE_LEDCAPSENSE_CAPSENSE_CAPSENSECCCD_DESC_HANDLE)
            {
                CyBle_GattsWriteAttributeValue(&wrReqParam->handleValPair, 0, &cyBle_connHandle, CYBLE_GATT_DB_PEER_INITIATED);
                capsenseNotify = wrReqParam->handleValPair.value.val[0] & 0x01;
                CyBle_GattsWriteRsp(cyBle_connHandle); 
            }
    }
}

/* [] END OF FILE */
