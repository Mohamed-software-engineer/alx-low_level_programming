#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicat string
 * str: array of char
 * Return: point of string or NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0;
	int size = 1;

	while (*str != '\0')
	{
		size++;
	}
	copy = malloc(sizeof(char) * size);
	if (copy == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
