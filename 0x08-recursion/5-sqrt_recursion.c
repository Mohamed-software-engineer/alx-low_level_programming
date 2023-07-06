#include "main.h"
/**
 * helper - help to get a square root
 * @n: integer number
 * @start: start of search
 * Return: square root
 */
int helper(int n, int start)
{
	if (start * start > n)
	{
		return (-1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (start * start == n)
	{
		return (start);
	}
	return (helper(n, start + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer variable
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 0));
}
