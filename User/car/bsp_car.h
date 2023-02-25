# ifndef _BSP_CAR_H
# define _BSP_CAR_H

# include "stc89cxx.h"

/*小车电机引脚*/
/*电机1*/
sbit OUT1_1 = P0^0;
sbit OUT1_2 = P0^1;
/*电机2*/
sbit OUT2_1 = P0^2;
sbit OUT2_2 = P0^3;
/*电机3*/
sbit OUT3_1 = P0^4;
sbit OUT3_2 = P0^5;
/*电机4*/
sbit OUT4_1 = P0^6;
sbit OUT4_2 = P0^7;

/*******************函数定义*******************/
/*小车刹车*/
void car_stop(void);
/*小车前进*/
void car_forward(void);
/*小车后退*/
void car_retreat(void);
/*小车左转*/
void car_left(void);
/*小车右转*/
void car_right(void);

# endif /*_BSP_CAR_H*/
