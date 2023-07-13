#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned integer variable
 * @size: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(size * nmemb);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}