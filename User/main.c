# include "stc89cxx.h"
# include "./car/bsp_car.h"
# include "./uart/bsp_uart.h"
# include "./tcrt5000/bsp_tcrt5000.h"
# include "./obstacle_avoidance/bsp_obstacle_avoidance.h"

extern char dat;

void main(void){

    uart_Config();

    while(1){

        if (dat == 'W'){
            car_forward();
        }
        else if (dat == 'S'){
            car_retreat();
        }
        else if (dat == 'A'){
            car_left();
        }
        else if (dat == 'D'){
            car_right();
        }
        else if (dat == 'T'){
            car_stop();
        }
        else if (dat == 'X'){
            while(dat == 'X'){
                FollowTheTrail();
            }
        }
        else if (dat == 'B'){
            while(dat == 'B'){
                Obsacle_Avoidance();
            }
        }
    }
}
