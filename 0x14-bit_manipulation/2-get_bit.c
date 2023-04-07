#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: the number
 * @index: the index
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else if ((n & 1) == 0)
		return (0);
	return (-1);
}
