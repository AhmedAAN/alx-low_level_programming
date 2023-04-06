#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to int
 * @b: a pointer to the binary number
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	num = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
