# ifndef _BSP_TCRT5000_H
# define _BSP_TCRT5000_H

# include "stc89cxx.h"

/*红外循迹从左到右*/
sbit S1 = P1^0;
sbit S2 = P1^1;
sbit S3 = P1^2;
sbit S4 = P1^3;

/*******************函数定义*******************/
/*小车循迹*/
void FollowTheTrail(void);

# endif /* _BSP_TCRT_5000_H*/
