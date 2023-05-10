#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string
 * @accept: String
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int o;

		while (*s)
		{
			for (o = 0; accept[o]; o++)
			{
			if (*s == accept[o])
			return (s);
			}
		s++;
		}

	return ('\0');
}
