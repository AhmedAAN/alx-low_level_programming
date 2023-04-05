#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node at the end of list
 * @head: a pionter to the list
 * @n: the value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t temp;

	if (head == NULL)
		return (NULL);

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = x;

	return (x);
}
