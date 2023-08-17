#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: a pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
