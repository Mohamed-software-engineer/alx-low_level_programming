#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add node to head
 * @head: first element in list
 * @str: string
 * Return: address of a new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	if (str == NULL)
		return (NULL);
	first = (list_t *)malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str = strdup(str);
	first->len = strlen(str);
	if (first->str == NULL)
	{
		free(first);
		return (NULL);
	}
	first->next = *head;
	*head = first;

	return (first);
}
