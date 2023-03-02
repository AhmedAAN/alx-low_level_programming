#include "main.h"

/**
 * _strncpy - sdfsdfsdf
 * @dest: sdfsdfsdf
 * @src: sdfsdfsdf
 * @n: sdffsd
 * return: sdfsdfsdf
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (dest[i] != '\0' && src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++
	}

	return (dest);
}
