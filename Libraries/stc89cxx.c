# include "stc89cxx.h"

void delay_1ms(uint16_t z){

	uint8_t i = 0;
	while(z --){
		for (i = 0; i <= 120; i ++);
	}
}

void delay(uint16_t n){
	while(n --);
}

