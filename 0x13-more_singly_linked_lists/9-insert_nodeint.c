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
	unsigned int i;
	listint_t *x, *temp;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}
	x->next = temp->next;
	temp->next = x;
	return (x);
}
