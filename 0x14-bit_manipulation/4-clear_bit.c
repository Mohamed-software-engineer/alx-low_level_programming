#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number
 * @index: index to number will be changed
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1UL << index;

	if (index >= sizeof(n) * 8)
		return (-1);
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
