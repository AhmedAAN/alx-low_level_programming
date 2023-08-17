#include "lists.h"

/**
 * sum_dlistint - returs the nth child of a list.
 * @head: a pointer to the list
 * Return: the sum of all elements of the list
 */
int sum_dlistint(dlistint_t *head);
{
	int sum;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
