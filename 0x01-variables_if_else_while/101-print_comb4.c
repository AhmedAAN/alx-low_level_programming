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
	int ccch;

	for (ch = 48; ch <= 57; ch ++)
	{
		for (cch = ch + 1; cch <= 57; cch++)
		{
			for (ccch = cch + 1; ccch <= 57; ccch++)
			{
				if (ch != cch && ch != ccch && cch != ccch)
				{
					putchar(ch);
					putchar(cch);
					putchar(ccch);
					if (ch != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
