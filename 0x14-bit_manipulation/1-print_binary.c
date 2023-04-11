#include "main.h"

/**
 * print_binary - a function that prints the binary representation
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			flag = 1;
		if (flag == 1)
		{
			if (bit == 1)
				_putchar('1');
			if (bit == 0)
				_putchar('0');
		}
	}
}
