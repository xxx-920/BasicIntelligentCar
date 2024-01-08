# include "stc89cxx.h"
# include "./car/bsp_car.h"
# include "./uart/bsp_uart.h"
# include "./tcrt5000/bsp_tcrt5000.h"
# include "./obstacle_avoidance/bsp_obstacle_avoidance.h"

/*LED 小灯  负级接VCC   输出0 开灯*/
sbit left_LED = P3^6; 
sbit right_LED = P3^7;

extern char dat;

void main(void){

    uart_Config();

    while(1){

        if (dat == 'W'){        //小车前进
            car_forward();
        }
        else if (dat == 'S'){   //小车后退
            car_retreat();
        }
        else if (dat == 'A'){   //小车左转
            car_left();
        }
        else if (dat == 'D'){   //小车右转
            car_right();
        }
        else if (dat == 'T'){   //小车停止
            car_stop();
        }
        else if (dat == 'X'){   //小车循迹
            while(dat == 'X'){
                FollowTheTrail();
            }
        }
        else if (dat == 'B'){   //小车避障
            while(dat == 'B'){
                Obsacle_Avoidance();
            }
        }
        else if (dat == 'L'){   //小车关灯
            left_LED = 1;
            right_LED = 1;
        }
        else if (dat == 'C'){   //小车开灯
            left_LED = 0;
            right_LED = 0;
        }

        FollowTheTrail();
    }
}
