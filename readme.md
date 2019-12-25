## 1. Software Outout Pins

1. 勾选取消`HW connection`
2. 注意配置初始化状态,设置`Initial drive state` to `High`初始化led熄灭


## 2. Software Input Pins

1. 注意配置`input pin`的 drive mode
2. 注意选择`external terminal`,勾选取消`HW connection`

## 3. Interrupts

1. `input pin`的input中选择触发条件, 并勾选`Dedicated interrupt`
2. 拖选`isr`组件,连接到`input pin`。命名`isr` 后续的中断函数都和这个命名相关
3. 代码


		 
		 CY_ISR(Pin_SW2_Handler) 
        {
            Pin_Red_Write(~Pin_Red_Read()); 
            Pin_Green_Write(~Pin_Green_Read());   
            Pin_SW2_ClearInterrupt();
                
        }

        int main(void)
        {
            CyGlobalIntEnable; /* Enable global interrupts. */
            
            Pin_SW2_Int_StartEx(Pin_SW2_Handler);
            Pin_Green_Write(~Pin_Green_Read());   

            /* Place your initialization/startup code here (e.g. MyInst_Start()) */

            for(;;)
            {
                /* Place your application code here. */
            }
        }

4. 按钮按下可能会触发多次中断

## 4. Hardware Pins
1. 勾选`HW Connection`

## 5. Toggle Flip-Flop
1. 拖选`Toggle Flip-Flop`(触发器)


## 6. Basic Counter
1. 拖选`Basic counter`
2. `counter`出来的是总线, 配置LED连接到总线上的`导线` `edit name and width`

## 7. Counter
> 计算按键按下的次数,向下计数，计数为0的时候,触发中断

1. 学会使用`Timer Counter(TCPWM mode)`


## 8. PWM
> 使用PWM控制LED等的亮度


## 9. Timer
> 检测按键按下时间, 决定PWM的占空比->改变led亮度

## 10.I2C
> EZI2C组件,通过`Bridege control panel`发空字节控制PWM

1. I2C组件配置好以后还要配置引脚 

## 11. I2C Transmit
> 通过I2C发送数据
> 

## 参考链接

1. [视频教程](https://www.youtube.com/watch?v=OPgqcC5J3K0&list=PLIOkqhZiy83FGFxV-QIxi_qTAS8Dfq-4G)
2. [PSOC101包含引脚定义](https://www.cypress.com/PSoc101)