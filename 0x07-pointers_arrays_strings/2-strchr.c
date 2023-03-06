#include "main.h"

/**
 * _strchr - function copies bytes from memory areac
 * to memory area
 *
 * @s: function copies
 *
 * @c: bytes from m
 *
 * Return: a pointer to @dest
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			char *x;

			x = &s[i];

			return (x);
		}
	}

	return (NULL);
}
