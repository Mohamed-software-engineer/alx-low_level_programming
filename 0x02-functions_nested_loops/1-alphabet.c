#include "main.h"
/**
 * main - print alphabet in lowercase
 * Return: 0 value
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

	return (0);
}
