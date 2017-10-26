#include <p18f452.h>
#include "my_xlcd.h"
#include <delays.h>

extern void DelayFor18TCY(void)
{
    Delay1KTCYx(18);
    return;
}
    
extern void DelayPORXLCD(void)
{
    Delay1KTCYx(15);
    return;
}
extern void DelayXLCD(void)
{
    Delay1KTCYx(5);
    return;
}
