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
		putchar(m[n]);
	}
	putchar('\n');

	return (0);
}
