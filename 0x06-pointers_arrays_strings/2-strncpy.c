#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strncpy - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate.
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
