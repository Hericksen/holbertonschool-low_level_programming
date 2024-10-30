#include "main.h"

/**
 * _strcpy - copy a string into another
 * @dest: destination string
 * @src: source string
*/

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest ++;
		src++;
	}

	*dest = '\0';
	return (dest_start);
}
