#include <stdio.h>
/**
 * main - print alphapet by inverse
 * Return: 0 value
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');

	return (0);
}
