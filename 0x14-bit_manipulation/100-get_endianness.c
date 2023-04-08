#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 (big endian) or 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char*)&x;

	if (*p == 1)
		return (1);
	else if (*p == 0)
		return (0);
	return (2);
}
