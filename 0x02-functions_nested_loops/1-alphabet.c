#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: 0 value
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
