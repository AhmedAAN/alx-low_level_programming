#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: a pointer to the list
 * @n: the value of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->n = n;

	current = *head;
	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	new->next = current;
	if (current != NULL)
		current->prev = new;
	*head = new;

	return (new);
}
