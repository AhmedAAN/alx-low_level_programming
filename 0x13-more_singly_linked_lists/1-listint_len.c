#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in list.
 * @h: the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
