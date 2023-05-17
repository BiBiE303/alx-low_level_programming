#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argv: Array of arguments
 * @argc: Number of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])

{

	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
