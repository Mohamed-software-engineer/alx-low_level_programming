#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_file - creat file
 * @filename: The name of the file to create.
 * @text_content: content of file
 *
 * Return: 1 to success or -1 to filar
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	int w;

	w = write(fd, text_content, strlen(text_content));
	if (fd == -1)
	{
		return (-1);
	}
	if (w == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (ftruncate(fd, 0) == -1)
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
