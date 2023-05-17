#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: String
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int t, y = 0;

	if (str == NULL)
		return (NULL);
	t = 0;
	while (str[t] != '\0')
		t++;
	aaa = malloc(sizeof(char) * (t + 1));
	if (aaa == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		aaa[y] = str[y];
	return (aaa);
}
