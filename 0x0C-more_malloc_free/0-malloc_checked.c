#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
/**
 * malloc_checked - allocation memory
 * @b: integer variable
 * Return: pointer from the type of variable
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
