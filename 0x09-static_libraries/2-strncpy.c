#include "main.h"
#include <stdio.h>
/**
 * _strncpy - a function that copies a string
 * @dest: Copy to
 * @src: Copy from
 * @n: integer
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n  && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
