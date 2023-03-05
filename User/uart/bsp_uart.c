# include "./uart/bsp_uart.h"

char dat;

/**
 *  @brief  串口初始化
 *  @param  无
 *  @retval 无
 */
void uart_Config(void){

  TMOD = 0x21;
  SCON |= 0x50;

  TH1 = 0xFD;
  SCON |= 0x02;
  TH0 = 0;
  TL0 = 0;
  ES=1;		
  EA=1;		
  TR1=1;
  EA=1;
}

void uart() interrupt 4 {

  if(RI == 1){
    RI = 0;			
    dat = SBUF;
  }
}
