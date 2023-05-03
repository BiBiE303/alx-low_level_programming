#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: Input string
 * Return: Print
 */
void puts2(char *str)
{
	int longi = 0;
	int g = 0;
	char *l = str;
	int b;

	while (*l != '\0')
	{
		l++;
		longi++;
	}
	g = longi - 1;
	for (b = 0; b <= g; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
