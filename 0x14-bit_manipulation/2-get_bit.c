#include "main.h"
/**
 * get_bit - get value of index
 * @n: number as parameter
 * @index: the space of value
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 0;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	bit = 1UL << index;

	return ((n & bit) >> index);
}
