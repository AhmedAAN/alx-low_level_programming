#include "main.h"

/**
 * print_last_digit-prints the last digit of an interger.
 * @x:number to compute last digit.
 * @n:numbaasader to compute last digit.
 * Return:n.
 */
int print_last_digit(int x)
{
	int n;

	n = x % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');

	return (n);
}
