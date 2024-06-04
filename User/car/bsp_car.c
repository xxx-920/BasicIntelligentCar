# include "./car/bsp_car.h"

/**
 *  @brief  С��ɲ��
 *  @param  ��
 *  @retval ��
 */
void car_stop(void){
    OUT1_1 = 1;
    OUT1_2 = 1;
    OUT2_1 = 1;
    OUT2_2 = 1;
    OUT3_1 = 1;
    OUT3_2 = 1;
    OUT4_1 = 1;
    OUT4_2 = 1;
}

/**
 *  @brief  С��ǰ��
 *  @param  ��
 *  @retval ��
 */
void car_forward(void){
    OUT1_1 = 1;
    OUT1_2 = 0;
    OUT2_1 = 0;
    OUT2_2 = 1;
    OUT3_1 = 1;
    OUT3_2 = 0;
    OUT4_1 = 0;
    OUT4_2 = 1;
}

/**
 *  @brief  С������
 *  @param  ��
 *  @retval ��
 */
void car_retreat(void){
    OUT1_1 = 0;
    OUT1_2 = 1;
    OUT2_1 = 1;
    OUT2_2 = 0;
    OUT3_1 = 0;
    OUT3_2 = 1;
    OUT4_1 = 1;
    OUT4_2 = 0;
}

/**
 *  @brief  С����ת
 *  @param  ��
 *  @retval ��
 */
void car_left(void){
    OUT1_1 = 1;
    OUT1_2 = 0;
    OUT2_1 = 0;
    OUT2_2 = 1;
    OUT3_1 = 0;
    OUT3_2 = 1;
    OUT4_1 = 1;
    OUT4_2 = 0;
}

/**
 *  @brief  С����ת
 *  @param  ��
 *  @retval ��
 */
void car_right(void){
    OUT1_1 = 0;
    OUT1_2 = 1;
    OUT2_1 = 1;
    OUT2_2 = 0;
    OUT3_1 = 1;
    OUT3_2 = 0;
    OUT4_1 = 0;
    OUT4_2 = 1;
}
