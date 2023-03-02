#include "main.h"

/**
 * reverse_array - dsfsdfsdfdsf
 * @a: dsdfsdfsdfsdf
 * @n:dfsdfsdf
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
