#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: array of char
 * @src: array of char
 * @n: integer variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}
	while (i < n)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	if (n == sizeof(src))
	{
		*p = '\0';
	}
	return (dest);
}
