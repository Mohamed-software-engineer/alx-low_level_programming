#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: numbers of letters
 *
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdopen = open(filename, O_RDONLY);
	ssize_t fdread;
	size_t fdwrite;
	char *buf;

	buf = malloc(letters);
	fdread = read(fdopen, buf, letters);

	if (fdopen == -1 || fdread == -1)
		return (0);
	if (filename == NULL)
		return (0);
	fdwrite = write(STDOUT_FILENO, buf, letters);
	if (fdwrite != letters)
		return (0);
	return (fdread);
}
