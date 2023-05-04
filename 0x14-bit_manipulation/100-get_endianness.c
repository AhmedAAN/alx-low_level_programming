#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 (big endian) or 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *p = &x;

	return (*p);
}
