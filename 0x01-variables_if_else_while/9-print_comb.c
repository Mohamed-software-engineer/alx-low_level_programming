#include <stdio.h>
/**
 * main - print all single digit
 * Return: 0 value
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');

	return (0);
}
