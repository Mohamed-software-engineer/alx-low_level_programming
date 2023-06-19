#include <stdio.h>
/**
 * main - print hexadecimal
 * Return: 0 value
 */
int main(void)
{
	int a = 0;
	char b = 'a';

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
