#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum;

	for (i = 0; *b != '\0'; i++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	if (b == NULL)
	{
		return (0);
	}
	while (i > 0)
	{
		i--;
		b--;
	}
	sum = 0;
	i = 0;
	while (*b != '\0')
	{
		sum = (sum * 2) + (*b - '0');
		b++;
		i++;
	}
	return (sum);
}
