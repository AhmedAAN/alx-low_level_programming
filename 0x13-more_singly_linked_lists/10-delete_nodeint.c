#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: the list
 * @index: the index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *x, *temp, *after;

	if (index == 0)
	{
		x = (*head)->next;
		*head->next = NULL;
		free(*head);
		*head = x;
		return (1);
	}
	x = *head;
	while (i < inedx - 1)
	{
		if (x == NULL)
			return (-1);
		x = x->next;
		i++;
	}
	temp = x->next;
	after = temp->next;
	x->next = after;
	free(temp);
	
	return (1);
}
