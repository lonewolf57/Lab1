/*Lab 1 first lcd file - ID number 815006656*/
#include <p18f452.h>
#include "my_xlcd.h"
#include <delays.h>

/*Set configuration bits for use with ICD2*/
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

#define _XTAL_FREQ 4000000

void main(void)
{
    while( BusyXLCD() ); 
    OpenXLCD( FOUR_BIT & LINES_5X7);                                            //configure LCD to 4 bit mode & 2 line display
    while( BusyXLCD() ); 
    WriteCmdXLCD( FOUR_BIT & LINES_5X7 ); 
    while( BusyXLCD() ); 
    WriteCmdXLCD( BLINK_ON ); 
    while( BusyXLCD() ); 
    WriteCmdXLCD( SHIFT_DISP_LEFT );
    while( BusyXLCD() ); 
   
    
                                                                                //selects the second line & fourth character
    while( BusyXLCD());                                                          //waits for the LCD to not be busy
    SetDDRamAddr (0x43);                                                         //sets the pointer at the ddaddr 
    putrsXLCD ("Hello World");                                                         //writes the sting of characters to the LCD
    
    while(1)
    {}
    return;
}
