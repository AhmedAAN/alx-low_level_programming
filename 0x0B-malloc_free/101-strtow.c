#include "main.h"
#include <stdlib.h>

/**
 * strtow - sdfsdfsd
 * @str: dfsdfsd
 * Return: sdfsdfsdf
 */
char **strtow(char *str)
{
	int i = 0, count = 0, words = 0, x = 0, count2, n = 0, m, y = 0;
	char *s;
	char *fstr;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				s[words] = str[i];
				i++;
				words++;
			}
			if (str[i] == '\0')
			{
				s[words] = '\0';
				break;
			}
			s[words] = ' ';
			words++;
		}
		i++;
	}
	fstr = malloc(sizeof(char) * count + 1);
	if (fstr == NULL)
		return (NULL);
	for (x = 0; x < i; i++)
	{
		count2 = 0;
		n = y;
		while (s[y] != ' ' || s[y] != '\0')
		{
			count2++;
			y++;
		}
		fstr[x] = malloc(sizeof(char) * count2 + 1);
		if (fstr[x] == NULL)
			return (NULL);
		for (m = 0; m < count2, n < y; m++, n++)
		{
			fstr[x][m] = s[n];
		}
		fstr[x][m] = '\0';
		y++;
	}
	x++;
	fstr[x] = '\0';

	return (fstr);
}
