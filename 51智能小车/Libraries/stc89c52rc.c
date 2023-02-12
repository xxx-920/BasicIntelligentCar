# include "stc89c52rc.h"

void Delay_50ms(void){    /*11.0592MHz*/

    uint8_t i, j;

    i = 90;
    j = 163;

    do{
        while(--j);
    } while(--i);
}
