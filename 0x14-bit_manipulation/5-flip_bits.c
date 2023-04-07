#include "main.h"

/**
 * flip_bits - get the number of bits you would need to flip
 * @n: the first number
 * @m: the second number
 * Return: the number of bots you need to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int sum = 0;
	unsigned long int x;

	x = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8) - 1; i++)
	{
		if (x & 1)
			sum += 1;
		x >>= 1;
	}
	return (sum);
}
