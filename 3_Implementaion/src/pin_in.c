#include "door.h"

void pinInit()
{
    DDRB = DDRB & 0b11111101; // fd
    DDRC = DDRC | 0b01000000; // 40
}

void DoorOpen()
{
    PORTC = PORTC | 0b01000000;
}

void DoorClose()
{
    PORTC = PORTC & 0b10111111;
}