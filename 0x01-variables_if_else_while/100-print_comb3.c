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
	char ch;
	char cch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (cch = ch + 1; cch <='9'; cch++)
		{
			if (ch != cch)
			{
				putchar(ch);
				putchar(cch);
				if (ch != '8')
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
