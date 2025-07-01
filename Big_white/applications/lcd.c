#include <rtthread.h>
#include "lcd.h"

int lcd_init(void)
{
    rt_kprintf("[LCD] Initialized\n");
    return RT_EOK;
}

/* 注册为设备初始化 */
INIT_DEVICE_EXPORT(lcd_init);
