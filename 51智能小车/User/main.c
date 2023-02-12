# include "stc89c52rc.h"
# include "./car/bsp_car.h"
# include "./uart/bsp_uart.h"
# include "stdio.h"

char dat;

void main(void){

    uart_Config();

    while(1){

       if (dat == 'W'){         /*前进*/
        car_stop();
        car_go();
       }
       else if (dat == 'S'){    /*后退*/
        car_stop();
        car_back_go();
       }
       else if (dat == 'A'){    /*左转*/
        car_stop();
        car_left_go();
       }
       else if (dat == 'D'){    /*右转*/
        car_stop();
        car_right_go();
       }
       else if (dat == 'T'){    /*停止*/
        car_stop();
       }
    }
}
