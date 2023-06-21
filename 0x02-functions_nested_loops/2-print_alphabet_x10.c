#include "main.h"
/**
 * print_alphabet_x10 - print lawrcase alphabet 10 times
 * Return: 0 value
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
