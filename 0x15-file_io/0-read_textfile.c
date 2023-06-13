#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: text file that is being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t p;
	ssize_t l;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	l = read(fd, buf, letters);
	p = write(STDOUT_FILENO, buf, l);
	free(buf);
	close(fd);
	return (p);
}
