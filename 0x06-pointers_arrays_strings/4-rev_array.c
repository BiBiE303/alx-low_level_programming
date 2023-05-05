#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: Array
 * @n: Number of elements in array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int f;
	int g;

	for (f = 0; f < n--; f++)
	{
		g = a[f];
		a[f] = a[n];
		a[n] = g;
	}
}
