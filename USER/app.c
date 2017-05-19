#include "VidaOS.h"

vTask vTask1;
vTask vTask2;
vTask vTask3;

vTaskStack task1Env[1024];
vTaskStack task2Env[1024];
vTaskStack task3Env[1024];

int task1Flag;
void task1Entry(void * param)
{    
    for (;;)
    {
        task1Flag = 0;
        vTaskDelay(TICKS_PER_SEC);
        task1Flag = 1;
        vTaskDelay(TICKS_PER_SEC);
    }
}

int task2Flag;
void task2Entry(void * param) 
{
    for (;;) 
    {
        task2Flag = 0;
        vTaskDelay(1);
        task2Flag = 1;
        vTaskDelay(1);
    }
}

int task3Flag;
void task3Entry(void * param)
{  
    for (;;)
    {
        task3Flag = 0;
        vTaskDelay(1);
        task3Flag = 1;
        vTaskDelay(1);
    }
}

void vInitApp(void)
{
    vTaskInit(&vTask1, task1Entry, (void *)0x11111111, 0, task1Env, sizeof(task1Env));
    vTaskInit(&vTask2, task2Entry, (void *)0x22222222, 1, task2Env, sizeof(task2Env));
    vTaskInit(&vTask3, task3Entry, (void *)0x33333333, 1, task3Env, sizeof(task3Env));
}

