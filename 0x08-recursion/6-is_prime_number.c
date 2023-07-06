#include "main.h"
/**
 * is_prime_helper - help to solve task
 * @n: number check if prime
 * @divisor: intger variable
 * Return: 0 or 1
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	if (divisor == 2)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor - 1));
}
/**
 * is_prime_number - check if number is prime
 * @n: integer variable
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
