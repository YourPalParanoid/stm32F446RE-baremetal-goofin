// Never done this before ooooo
// need to define register addresses ahead of time so this isnt archaic slop
// gonna work with GPIOA for starters
// seg faulted immediately lol
#include <stdint.h>
#include <stdio.h>

struct gpio{
	volatile uint32_t MODER;
};

#define GPIOA ((struct gpio *) 0x40020000)

static void gpioaSetModer(int pin, int mode){
	// bit shift 2 bits (3 in base10) by the pin were trying to set
	// 2 bits per pin so pin * 2
	int mask = ~(3 << pin);
	// sets the pins selected to 0
	GPIOA->MODER &= mask;
	GPIOA->MODER |= (mode << pin);
}


int main()
{

	printf("so long and thanks for all the fish\n");
}
