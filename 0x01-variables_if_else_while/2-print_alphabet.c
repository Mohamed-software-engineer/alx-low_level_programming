#include <stdio.h>

/**
 * main - print all alphat
 * Return: 0 value
 */
int main(void)
{
	char v = 'a';

	while (v <= 'z')
	{
		putchar(v);
		v++;
	}
	putchar('\n');

	return (0);
}
