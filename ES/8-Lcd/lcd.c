#include<lpc214x.h>

#define bit(x) (1 << x)
#define delay1 for(int i=0; i<900; i++);
#define delay2 for(int i=0; i<90000; i++);

void init(void);
void cmd(char);
void dat(char);
void string(char *);

int main(){
	IO0DIR = 0xFFF;
	init();
	cmd(0x8a);
	string("OUTPUT VERIFIED...");
	
	while(1){
		cmd(0x18);
	}
}

void init(void){
	cmd(0x30);
	cmd(0x0C);
	cmd(0x06);
	cmd(0x01);
	cmd(0x80);
}

void cmd(char c){
	IO0PIN = (c << 0);
	IO0CLR = bit(8);
	IO0CLR = bit(9);
	IO0SET = bit(10);
	delay2;
	IO0CLR = bit(10);
}

void dat(char d){
	IO0PIN = (d << 0);
	IO0SET = bit(8);
	IO0CLR = bit(9);
	IO0SET = bit(10);
	delay1;
	IO0CLR = bit(10);
}

void string(char *str){
	while(*str){
		dat(*str++);
	}
}
