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
	int ch;
	int cch;

	for (ch = 48; ch <= 57; ch++)
	{
		for (cch = ch + 1; cch <= 57; cch++)
		{
			if (ch != cch)
			{
				putchar(ch);
				putchar(cch);
				if (ch != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
