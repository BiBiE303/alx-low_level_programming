#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @s: a string containing the binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *s)
{
	int l;
	unsigned int dec_val = 0;

	if (!s)
		return (0);
	for (l = 0; s[l]; l++)
	{
		if (s[l] < '0' || s[l] > '1')
			return (0);
		dec_val = 2 * dec_val + (s[l] - '0');
	}
	return (dec_val);
}
