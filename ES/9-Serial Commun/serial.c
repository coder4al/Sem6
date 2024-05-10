#include <LPC214x.H>

#define PCLK 30000000

void Init(int baudrate) {
    short div = PCLK / (16 * baudrate);
    PINSEL0 = 0x05;
    U0LCR = 0x83;
    U0DLL = div & 0xFF;
    U0DLM = div >> 8;
    U0LCR = 0x03;
}

void PutC(char c) {
    while (!(U0LSR & 0x20));
    U0THR = c;
}

void PutS(char *str) {
    while (*str) PutC(*str++);
}

char GetC(void) {
    while (!(U0LSR & 0x01));
    return U0RBR;
}

int main(void) {
    VPBDIV = 0x02;
    Init(9600);
    PutS("Welcome to ARM7 Serial Communication Demo!\r\n");

    while (1) {
        PutS("Pressed Key is: ");
        PutC(GetC());
        PutS("\r\n");
    }
}
