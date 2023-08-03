#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: unsigned long int parameter
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, i;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		unsigned long int bin = (n >> i) & 1;

		if (bin)
			flag = 1;
		if (flag)
			_putchar(bin + '0');
	}
}
