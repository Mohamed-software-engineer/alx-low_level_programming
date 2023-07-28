#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - print all element of list_t
 * @h: list_t variable
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while(h != NULL)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		m++;
		h = h->next;
	}
	return (m);
}
