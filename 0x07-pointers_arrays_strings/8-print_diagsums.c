#include "main.h"

/**
 * print_diagsums - dsfsdfsdfsdf
 *
 * @a: sdfsdfsd
 * @size: sdfsdfdsf
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	int dig1;
	int dig2;

	dig1 = 0;
	dig2 = 0;
	for (x = 0; x < size; x++)
	{
		dig1 += a[i][i];
	}
	for (y = size - 1; y >= 0; y--)
	{
		dig2 += a[i][i];
	}
	printf("%d, %d", dig1, dig2);
}
