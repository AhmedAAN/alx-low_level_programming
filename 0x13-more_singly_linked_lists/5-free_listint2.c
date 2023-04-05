#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	head = NULL;
}
