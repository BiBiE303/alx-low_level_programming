#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * followed by a new line
 * @str: Input string
 * Return: Half input
 */
void puts_half(char *str)
{
	int e, f, longi;

	longi = 0;

	for (e = 0; str[e] != '\0'; e++)
		longi++;
	f = (longi / 2);
	if ((longi % 2) == 1)
		f = ((longi + 1) / 2);

	for (e = f; str[e] != '\0'; e++)
		_putchar(str[e]);
	_putchar('\n');
}
