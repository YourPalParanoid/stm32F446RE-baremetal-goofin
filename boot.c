// hoping to flash the board with this

__attribute__((naked, noreturn)) void _reset(void) {
	for (;;) (void) 0;
}

extern void _estack(void);

__attribute__((section(".vectors"))) void (*const tab[16 + 96])(void) = {
	_estack, _reset
};
