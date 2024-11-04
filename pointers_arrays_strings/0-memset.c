#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string check
 * @b: char changed
 * @n: size of byte
 * Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	
	return (s);
}
