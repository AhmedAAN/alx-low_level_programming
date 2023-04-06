#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node of list.
 * @head: the list
 * @index: the index of the node
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *x;

	if (head == NULL)
		return (NULL);
	x = *head;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		x = x->next;
		i++;
	}

	return (x);
