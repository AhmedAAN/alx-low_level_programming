#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int com = 44;
	int space = 32;

	for (n = 48; n <= 56; n++)
	{
		putchar(n);
		putchar(com);
		putchar(space);
	}
	putchar(57);

	return (0);
}
