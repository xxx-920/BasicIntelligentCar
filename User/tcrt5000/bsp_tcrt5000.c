# include "./tcrt5000/bsp_tcrt5000.h"
# include "./car/bsp_car.h"

/**
 *  @brief  小车循迹
 *  @param  无
 *  @retval 无
 */
void FollowTheTrail(void){

    if (S1 == 1 && S2 == 1 && S3 == 1 && S4 == 1 || S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0){ //中间检测到黑线，一般中间的线检测不到，如果没检测到就前进
        car_forward();
    }
    else if(S1 == 0 && S2 == 1 && S3 == 1 && S4 == 1){ //左边检测到黑线，左转
        car_left();
        delay(4000);
    }
    else if(S1 == 1 && S2 == 0 && S3 == 1 && S4 == 1){ //左边检测到黑线，左转
        car_left();
        delay(3000);
    }
    else if (S1 == 1 && S2 == 1 && S3 == 0 && S4 == 1){ //右侧检测到黑线，右转
        car_right();
        delay(3000);
    }
    else if(S1 == 1 && S2 == 1 && S3 == 1 && S4 == 0){ //右侧检测到黑线，右转
        car_right();
        delay(4000);
    }
}
