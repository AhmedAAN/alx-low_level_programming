#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node using index
 * @head: a pointer to the list
 * @index: the index
 * Return: 1 (success) or -1 (fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *previous;
	unsigned int count;

	current = *head;
	if (current == NULL)
		return (-1);

	while (current->prev != NULL)
		current = current->prev;
	count = 0;
	while (current != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previous = current->prev;
				previous->next = current->next;
				if (current->next != NULL)
					current->next->prev = previous;
			}
			*head = previous;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
