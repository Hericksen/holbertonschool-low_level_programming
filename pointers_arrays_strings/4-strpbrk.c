#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - searches a string for any of a set of bytes.
 * @s: string checked
 * @accept: string tested
 * Return: return the string or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
