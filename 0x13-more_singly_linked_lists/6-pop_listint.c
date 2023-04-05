#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of list
 * @head: a pointerto the list
 * Return: the value of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int data = 0;

	if (*head == NULL)
		return (data);
	data = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;
}
