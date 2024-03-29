#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked list.
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;
	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
