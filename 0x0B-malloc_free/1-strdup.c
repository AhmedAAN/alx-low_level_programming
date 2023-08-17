#include "main.h"
#include <stdlib.h>

/**
 * _strdup - ddsada
 * @str: sdfsdf
 * Return: safsd
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc((sizeof(char) * len) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';

	return (s);
}
