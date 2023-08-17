#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: a pointer to the list
 * @n: the value of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	current = *head;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
	}
	new->prev = current;
	if (current != NULL)
		current->next = new;
	*head = new;

	return (new);
}
