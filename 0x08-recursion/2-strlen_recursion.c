#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: parameter
 * Return: intger number
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	if (*s == '\0')
	{
		return (i);
	}
}
