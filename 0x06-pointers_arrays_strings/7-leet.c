#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @p: String
 * Return: All strings changed to numbers
 */
char *leet(char *p)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int h = 0;
	int v;

	while (*(p + h) != '\0')
	{
		for (v = 0; v <= 9; v++)
		{
			if (*(p + h) == a[v])
			{
				*(p + h) = n[v];
			}
		}
		h++;
	}
	return (p);
}

