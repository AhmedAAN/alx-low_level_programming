#include "shell.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	int num;

	num = 0;
	current = h;
	while (current)
	{
		printf("%i", current->n);
		current = current->next;
		num++;
	}
	return (num);
}
