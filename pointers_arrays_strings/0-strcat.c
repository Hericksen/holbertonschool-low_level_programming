#include "main.h"
#include "2-strlen.c"

/**
 *
*/


char *_strcat(char *dest, char *src)
{
	int i,  length = _strlen(src);

	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	_putchar('\n');
	return dest;
}
