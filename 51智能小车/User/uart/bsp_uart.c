# include "./uart/bsp_uart.h"
# include "stdio.h"

extern char dat = 0;

int putchar(int c){

    while(!(SCON & 0x02));
    SCON &= ~0x02;
    SBUF = c;
    return (c);
}

/**
 *  @brief  串口初始化
 *  @param  无
 *  @retval 无
 */
void uart_Config(void){

    TMOD = 0x20;
    SCON = 0x50;

    TH1 = 0xFD;
    TL1 = 0xFD;
    SCON |= 0x02;

    ES=1;		
		EA=1;		
		TR1=1;
    EA = 1;
}

void uart() interrupt 4 {

  if (RI == 1){
    RI = 0;			
    dat = SBUF;
  }
}
