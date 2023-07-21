#include "variadic_functions.h"
/**
 * sum_them_all - sum unknowen number
 * @n: integer number
 * Return: integer number
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	int sum = 0;

	va_start(arg,n);
	for (; i < n; i++)
	{
		int value = va_arg(arg, int);
		sum += value;
	}
	return (sum);
}
