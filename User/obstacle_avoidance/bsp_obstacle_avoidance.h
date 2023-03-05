# ifndef _BSP_OBSTACLE_AVOIDANCE_H
# define _BSP_OBSTACLE_AVOIDANCE_H

# include "stc89cxx.h"

sbit TRIG = P2^2;
sbit ECHO = P2^3;

void Obsacle_Avoidance(void);

# endif /*_BSP_OBSTACLE_AVOIDANCE_H*/
