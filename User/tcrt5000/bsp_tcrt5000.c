# include "./tcrt5000/bsp_tcrt5000.h"
# include "./car/bsp_car.h"

/**
 *  @brief  С��ѭ��
 *  @param  ��
 *  @retval ��
 */
void FollowTheTrail(void){

    if (S1 == 1 && S2 == 1 && S3 == 1 && S4 == 1 || S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0){ //�м��⵽���ߣ�һ���м���߼�ⲻ�������û��⵽��ǰ��
        car_forward();
    }
    else if(S1 == 0 && S2 == 1 && S3 == 1 && S4 == 1){ //��߼�⵽���ߣ���ת
        car_left();
        delay(4000);
    }
    else if(S1 == 1 && S2 == 0 && S3 == 1 && S4 == 1){ //��߼�⵽���ߣ���ת
        car_left();
        delay(3000);
    }
    else if (S1 == 1 && S2 == 1 && S3 == 0 && S4 == 1){ //�Ҳ��⵽���ߣ���ת
        car_right();
        delay(3000);
    }
    else if(S1 == 1 && S2 == 1 && S3 == 1 && S4 == 0){ //�Ҳ��⵽���ߣ���ת
        car_right();
        delay(4000);
    }
}
