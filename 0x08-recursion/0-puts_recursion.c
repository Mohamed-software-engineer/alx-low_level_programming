#include "main.h"
/**
 * _puts_recursion -  prints a string
 * @s: variable string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar ('\n');
	}
}
