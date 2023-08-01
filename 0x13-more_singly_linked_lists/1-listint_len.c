#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: parameter of listint_t list.
 * Return: number of elements of listint_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	if (h == NULL)
	{
		return (1);
	}
	while (h != NULL)
	{
		m++;
		h = h->next;
	}
	return (m);
}
