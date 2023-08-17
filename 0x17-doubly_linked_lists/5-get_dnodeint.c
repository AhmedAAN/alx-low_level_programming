#include "lists.h"

/**
 * get_dnodeint_at_index - returs the nth child of a list.
 * @head: a pointer to the list
 * @index: the index of the node
 * Return: the address of the nth element, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	counter = 0;
	while (head != NULL)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}

	return (NULL);
}
