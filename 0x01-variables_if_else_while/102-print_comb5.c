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
	int n;
	int nn;

	for (ch = 48; ch <= 57; ch++)
	{
		for (cch = 48; cch <= 57; ch++)
		{
			for (n = ch; n <= 57; n++)
			{
				for (nn = cch + 1; nn <= 57; nn++)
				{
					if (ch != n && cch != nn)
					{
						putchar(ch);
						putchar(cch);
						putchar(' ');
						putchar(n);
						putchar(nn);
						if (ch != 57 && cch != 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0)
}
