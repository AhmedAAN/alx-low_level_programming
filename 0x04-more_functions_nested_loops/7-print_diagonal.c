#include "main.h"

/**
 * print_diagonal - sdsds
 * @n: ddssdds
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j ++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
