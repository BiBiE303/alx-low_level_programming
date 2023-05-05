#include "main.h"
/**
 * rot13 -  a function that encodes a string using rot13
 * @t: String
 * Return: Encoded string
 */
char *rot13(char *t)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (t[i] == data1[j])
			{
				t[i] = datarot[j];
				break;
			}
		}
	}
	return (t);
}

