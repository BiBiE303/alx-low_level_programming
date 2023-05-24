#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name using pointer to function
 * @name: string
 * * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}