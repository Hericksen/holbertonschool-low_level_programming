#include "main.h"

/**
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int nb;
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				nb++;
				break;
			}
		}
		if (*s != *p)
			return (nb);
		s++;
	}

	return (nb);
}
