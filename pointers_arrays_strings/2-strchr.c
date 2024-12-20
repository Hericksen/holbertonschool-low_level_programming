#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string checked
 * @c: character needed to found
 * Return: the string if found, NULL if c not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
