#include "main.h"

/**
 *
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

	return (dest_start);
}
