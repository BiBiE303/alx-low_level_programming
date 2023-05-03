#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int pass[100];
	int s, sum, n;

	sum = 0;
	srand(time(NULL));
	for (s = 0; s < 100; s++)
	{
		pass[s] = rand() % 78;
		sum += (pass[s] + '0');
		putchar(pass[s] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
