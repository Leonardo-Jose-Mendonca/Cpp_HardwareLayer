#include <iostream>

#define adrMem1 ((uint64_t)0x000000F000000000)
#define memory1 ((memory*)adrMem1)

typedef struct {
    volatile uint8_t     parameter1;
    volatile uint16_t    parameter2;
    volatile uint32_t    parameter3;
}memory;

int main() {
    memory1->parameter1 = 0x0A;
    memory1->parameter2 = 0x0B0C;
    memory1->parameter3 = 0x0D0E0F01;
    system("pause>0");
}