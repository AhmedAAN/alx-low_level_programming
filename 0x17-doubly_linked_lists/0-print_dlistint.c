#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num;

	num = 0;
	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
