#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	_putchar('\n');

}

