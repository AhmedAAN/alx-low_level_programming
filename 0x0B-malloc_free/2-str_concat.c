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
	int i, j, z;
	char *s;

	i = 0;
	j = 0;
	if (s1[0] != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2[0] != NULL)
	{
		while (s2[j])
			j++;
	}
	s = malloc(sizeof(char) * (i + j));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	z = 0;
	for (y = i; y < i + j; y++)
	{
		s[y] = s2[z];
		z++;
	}
	s[i + j] = '\0';

	return (s);
}
