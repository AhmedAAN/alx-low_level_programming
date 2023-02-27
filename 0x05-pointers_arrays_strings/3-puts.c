#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @str: sgsdgsdgsd
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
