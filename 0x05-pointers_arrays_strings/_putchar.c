#include <unistd.h>
/**
 * _putchar - writes character c in stdout
 * @c: char to be printed
 * Return: On Success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
