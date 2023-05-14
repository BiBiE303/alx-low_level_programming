#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates n bytes of two strings
 * @dest: Copy to
 * @src: Copy from
 * @n: Number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int o;
	int p;

	o = 0;
	while (dest[o] != '\0')
	{
	o++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
	dest[o] = src[p];
	o++;
	p++;
	}
	dest[o] = '\0';
	return (dest);
}
