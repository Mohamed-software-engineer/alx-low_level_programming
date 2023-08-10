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
	int fd = open(filename, O_APPEND);
	int w, len = 0;

	while (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}
	w = write(fd, text_content, len);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL && fd == 1)
	{
		return (1);
	}
	if (text_content == NULL && fd == -1)
	{
		return (-1);
	}
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
