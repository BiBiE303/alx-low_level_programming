#include "main.h"
/**
 * cap_string -  a function that capitalizes all words of a string
 * @r: Strings
 * Return: String with all words capitalized
 */
char *cap_string(char *r)
{
	int b, c;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	b = 0;
	while (*(r + b) != '\0')
	{
		if (*(r + b) >= 'a' && *(r + b) <= 'z')
		{
			if (b == 0)
			{
				*(r + b) = *(r + b) - 32;
			}
			else
			{
				for (c = 0; c <= 12; c++)
				{
					if (a[c] == *(r + b - 1))
					{
						*(r + b) = *(r + b) - 32;
					}
				}
			}
		}
	b++;
	}
	return (r);
}

