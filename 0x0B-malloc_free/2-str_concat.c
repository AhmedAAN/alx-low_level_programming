#include "main.h"
#include <stdlib.h>

/**
 * str_concat - sfsfdfs
 * @s1: fdf
 * @s2: dsddsd
 * Return: jkjjnjn
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x, y;
	char *s;

	i = 0;
	j = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	for (y = 0; y < j; y++, i++)
	{
		s[i] = s2[y];
	}
	s[i + j] = '\0';

	return (s);
}
