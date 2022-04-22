#include "door.h"

int main(void)
{
    pinInit();
    while (1)
    {
        if (PINB & 0b00000010)
            DoorOpen(); // 02
                        // 40
        else
            DoorClose(); // bf
    }
    return 0;
}