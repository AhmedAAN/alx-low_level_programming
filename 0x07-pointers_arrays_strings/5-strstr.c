#include "main.h"

/**
 * _strstr - function that searches a string for any of a set of bytes
 *
 * @haystack: first occurrence in the string
 *
 * @needle: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
				break;
		}
		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (NULL);
}
