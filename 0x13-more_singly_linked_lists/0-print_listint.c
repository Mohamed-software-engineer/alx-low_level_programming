#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: parameter of listint_t
 * Return: number of all elements in listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	if (h == NULL)
	{
		Printf("Erorr\n");
		return (1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
