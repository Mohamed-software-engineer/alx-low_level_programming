#include <stdio.h>
/**
 * main - print number of base 10
 * Return: 0 value
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
