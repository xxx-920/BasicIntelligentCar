# include "stc89cxx.h"
# include "./car/bsp_car.h"
# include "./uart/bsp_uart.h"
# include "./tcrt5000/bsp_tcrt5000.h"
# include "./obstacle_avoidance/bsp_obstacle_avoidance.h"

/*LED С��  ������VCC   ���0 ����*/
sbit left_LED = P3^6; 
sbit right_LED = P3^7;

extern char dat;

void main(void){

    uart_Config();

    while(1){

        if (dat == 'W'){        //С��ǰ��
            car_forward();
        }
        else if (dat == 'S'){   //С������
            car_retreat();
        }
        else if (dat == 'A'){   //С����ת
            car_left();
        }
        else if (dat == 'D'){   //С����ת
            car_right();
        }
        else if (dat == 'T'){   //С��ֹͣ
            car_stop();
        }
        else if (dat == 'X'){   //С��ѭ��
            while(dat == 'X'){
                FollowTheTrail();
            }
        }
        else if (dat == 'B'){   //С������
            while(dat == 'B'){
                Obsacle_Avoidance();
            }
        }
        else if (dat == 'L'){   //С���ص�
            left_LED = 1;
            right_LED = 1;
        }
        else if (dat == 'C'){   //С������
            left_LED = 0;
            right_LED = 0;
        }

        FollowTheTrail();
    }
}
