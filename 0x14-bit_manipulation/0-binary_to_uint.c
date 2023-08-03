#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: array of char
 *
 * Return: return number after convert
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b != '1' && *b != '0')
			return (0);
		n = (n << 1) | (*b - '0');
	}
	return (n);
}
