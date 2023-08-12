#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 to success or -1 to failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND);
	if (fd == 1)
	{
		return (1);
	}
	if (fd == -1)
	{
		return (-1);
	}

	while (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}
	w = write(fd, text_content, len);
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
