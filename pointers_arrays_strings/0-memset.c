#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: string check
 * @b: char changed
 * @n: size of byte
 * Return: pointer to memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = b;

	return (s);
}
