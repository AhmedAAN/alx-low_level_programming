#include "main.h"

/**
 * _memcpy - function fill the first bytes of the memory area pointed
 * to by  with the constant byt
 *
 * @dest: bytes of the memory area pointed to by @s
 *
 * @src: with the constant byte @b
 *
 * @n: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
