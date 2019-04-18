#include <avr/io.h>
#include <util/delay.h>


int main() {
	DDRA  |= (1 << 0);
	DDRA  &= ~(1<<1);
	PORTA |= (1<<5);

	while(1){
		if(bit_is_clear(PINA, 5)){
			PORTA |= (1<<0);
		}else{
			PORTA |= (1<<0);
			_delay_ms(100);
			PORTA &= ~(1<<0);
			_delay_ms(100);
		}
	}
}
