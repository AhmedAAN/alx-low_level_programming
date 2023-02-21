#include "main.h"

#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase.
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
