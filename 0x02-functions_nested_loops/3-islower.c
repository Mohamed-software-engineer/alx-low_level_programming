#include "main.h"
/**
 * _islower - chack if alphabet is lowercase
 * @c: is c characther to check
 * Return: 1 if true or 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
