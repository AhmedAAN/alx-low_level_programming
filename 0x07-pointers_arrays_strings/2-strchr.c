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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
