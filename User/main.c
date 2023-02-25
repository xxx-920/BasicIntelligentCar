# include "stc89cxx.h"
# include "./car/bsp_car.h"
# include "./uart/bsp_uart.h"
# include "./tcrt5000/bsp_tcrt5000.h"

extern char dat;

void main(void){

    uart_Config();

    while(1){

        if (dat == 'W'){
            car_stop();
            car_forward();
        }
        else if (dat == 'S'){
            car_stop();
            car_retreat();
        }
        else if (dat == 'A'){
            car_stop();
            car_left();
        }
        else if (dat == 'D'){
            car_stop();
            car_right();
        }
        else if (dat == 'T'){
            car_stop();
        }
        else if (dat == 'X'){
            dat = ' ';
            car_stop();
            do{
                FollowTheTrail();
            }while(dat == 'X');
            car_stop();
        }
    }
}
