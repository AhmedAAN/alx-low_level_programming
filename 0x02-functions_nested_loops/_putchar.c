#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints Holberton as a message.
 * @c: The charechter to print
 *
 * Return: Always 0 (Success)
 * on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
