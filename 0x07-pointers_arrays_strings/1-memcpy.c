#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: array of char
 * @src: array of char
 * @n: integer variable
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
