#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - a function that returns the sum of all the data of list
 * @head: the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x;

	if (head == NULL)
		return (sum);
	x = head;
	while (x != NULL)
	{
		sum += x->n;
		x = x->next;
	}

	return (sum);
}
