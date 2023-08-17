#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int counter;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	current = *h;
	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	counter = 0;
	while (current != NULL)
	{
		counter++;
		if (counter == idx)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
	}

	return (NULL);
}
