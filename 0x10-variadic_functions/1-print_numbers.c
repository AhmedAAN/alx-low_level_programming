#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
