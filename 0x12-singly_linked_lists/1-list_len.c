#include "lists.h"
#include <stdio.h>
/**
 * list_len - get number of element of linked list
 * @h: list_t variable
 * Return: number of element of linked list
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		m++;
		h = h->next;
	}
	return (m);
}
