#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copy first file in the second file
 * @argc: number of argument
 * @argv: array of pointer to char
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *file_from = argv[1], *file_to = argv[0];
	char buffer[1024];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664), w, r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w = write(fd_to, buffer, sizeof(r));
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
