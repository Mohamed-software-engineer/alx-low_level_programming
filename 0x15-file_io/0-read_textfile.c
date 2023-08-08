#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file we will read and write from her
 * @letters: length of text
 *
 * Return: actual number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDWR | O_CREAT | O_EXCL);
	char *c = malloc(sizeof(c) * letters);
	ssize_t r, w;

	if (filename == NULL)
	{
		free(c);
		return (0);
	}
	if (fd < 0)
	{
		free(c);
		return (0);
	}
	r = read(fd, c, letters);
	if (r < 0)
	{
		free(c);
		return (0);
	}
	w = write(STDOUT_FILENO, c, read(fd, c, letters));
	if (w < 0 || w != r)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fd);

	return (r);
}
