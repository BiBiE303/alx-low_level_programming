#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase
 * @w: String
 * Return: String of letters in uppercase
 */
char *string_toupper(char *w)
{
	int q;

	q = 0;
	while (*(w + q) != '\0')
	{
		if (*(w + q) >= 'a' && *(w + q) <= 'z')
		{
			*(w + q) = *(w + q) - 32;
		}
		q++;
	}
	return (w);
}
