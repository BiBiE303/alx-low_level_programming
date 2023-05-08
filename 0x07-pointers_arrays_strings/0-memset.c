#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @n: Number of bytes
 * @s: Starting address of memory
 * @b: constant byte
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	int z;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}
