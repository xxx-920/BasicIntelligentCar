# ifndef _BSP_UART_H
# define _BSP_UART_H

# include "stc89c52rc.h"

extern char dat;

/*重写c 语言中的库函数*/
int putchar(int c);

/*串口初始化*/
void uart_Config(void);

# endif
