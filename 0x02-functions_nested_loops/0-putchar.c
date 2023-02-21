#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m[] = {"_", "p", "u", "t", "c", "h", "a", "r"};
	int n;

	for (n = 0; n <= 7; n++)
	{
		_putchar(m[n]);
	}
	_putchar('\n');

	return (0);
}
