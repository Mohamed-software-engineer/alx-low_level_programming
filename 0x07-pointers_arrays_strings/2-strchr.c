#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: array of char
 * @c: char variable
 * Return: array of char
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;
	int i = 0;

	while (*ptr != '\0')
	{
		i++;
		if (*ptr == c)
		{
			return (s+(i-1));
		}
		++ptr;
	}
	return (NULL);
}
