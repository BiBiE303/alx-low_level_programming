#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 * @dest: Copy to
 * @src: Copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int z = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for ( ; z < t; z++)
	{
		dest[z] = src[z];
	}
	dest[t] = '\0';
	return (dest);
}

