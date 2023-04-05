#include "lists.h"

/**
 * free_listint - a function that frees list
 * @head: the list
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
