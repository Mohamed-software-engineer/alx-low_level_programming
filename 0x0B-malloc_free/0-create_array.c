#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - creat array and initialize it
 * @size: size of array
 * @c: charchtar to initialize with it
 * Return:array of char or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(*s) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
