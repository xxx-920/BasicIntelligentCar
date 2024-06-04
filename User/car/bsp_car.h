# ifndef _BSP_CAR_H
# define _BSP_CAR_H

# include "stc89cxx.h"

/*С���������*/
/*���1*/
sbit OUT1_1 = P0^0;
sbit OUT1_2 = P0^1;
/*���2*/
sbit OUT2_1 = P0^2;
sbit OUT2_2 = P0^3;
/*���3*/
sbit OUT3_1 = P0^4;
sbit OUT3_2 = P0^5;
/*���4*/
sbit OUT4_1 = P0^6;
sbit OUT4_2 = P0^7;

/*******************��������*******************/
/*С��ɲ��*/
void car_stop(void);
/*С��ǰ��*/
void car_forward(void);
/*С������*/
void car_retreat(void);
/*С����ת*/
void car_left(void);
/*С����ת*/
void car_right(void);

# endif /*_BSP_CAR_H*/
