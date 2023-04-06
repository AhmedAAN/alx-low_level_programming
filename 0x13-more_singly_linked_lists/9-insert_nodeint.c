#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a position.
 * @head: the list
 * @idx: the position
 * @n: the value of the nude
 * Return:  the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *x;
	listint_t *temp;
	listint_t *before;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;

	while (i < idx)
	{
		if (temp == NULL)
		{
			free(x);
			free(temp);
			return (NULL);
		}
		if (i + 1 == idx)
			before = temp;
		i++;
		temp = temp->next;
	}
	if (idx == 0 && temp->next == NULL)
	{
		x->next = NULL;
		return (x);
	}
	before->next = x;
	x->next = temp;

	return (x);
}
