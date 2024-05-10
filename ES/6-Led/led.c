#include<lpc214x.h>

#define delay for(int i=0; i<500000; i++);

int main(){
	IO0DIR = 0xFFFFFFF;
	
	while(1){
		IO0SET = 0xFFFFFFF;
		delay;
		IO0CLR = 0xFFFFFFF;
		delay;
	}
}
