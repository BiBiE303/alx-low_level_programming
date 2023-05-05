#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings
 * @dest: Copy to
 * *src: Copy from
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int s;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[k] = src[s];
		k++;
		s++;
	}
	dest[k] = '\0';
	return (dest);
}
