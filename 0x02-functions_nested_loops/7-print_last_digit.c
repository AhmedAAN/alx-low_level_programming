vi 7-print_last_digit.c

#include "main.h"
/**
 * print_last_digit-prints the last digit of an interger.
 * @a:number to compute last digit.
 * Return:last digit.
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
