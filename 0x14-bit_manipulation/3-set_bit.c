#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: a pointer to the decimal number
 * @index: the place to change the bit
 * Return: 1 (success) or 0 (failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	x = 1 << index;
	*n = *n | x;

	return (1);
}
