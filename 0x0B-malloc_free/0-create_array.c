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
	int i = 0;

	s = malloc(sizeof(*s) * size);
	if (s == NULL)
	{
		return (s);
	}
	for (; *s != '\0'; i++)
	{
		*s = c;
		s++;
	}
	return (s);
}
