#include "main.h"

/**
 * _strspn - function copie bytes from memory area 
 * to memory area 
 *
 * @s: function copies
 *
 * @accept: bytes from memory area
 *
 * Return: a pointer to 
 */
unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
