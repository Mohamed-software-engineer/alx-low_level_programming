#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this function will assign a random number to the variable n
 * Return: 0 value
 */

int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	v = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", &n, &v);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", &n, &v);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", &n, &v);
	}

	return (0);
}
