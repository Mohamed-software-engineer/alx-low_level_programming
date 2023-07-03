#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: array of cahr
 * @b: cahr variable
 * @n: intger variable
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		++s;
		i++;
	}
	return (s);
}
