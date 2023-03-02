#include "main.h"

/**
 * _strcmp - dsgsdgsdfsdg
 * @s1: sdfsdfsdfd
 * @s2: sfsdgsdgsd
 * return: sfsdfsdfsd
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
