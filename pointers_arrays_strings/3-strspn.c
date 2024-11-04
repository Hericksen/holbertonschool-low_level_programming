#include "main.h"

/**
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int nb;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				nb++;
				break;
			}
		}
		if (*p == '\0')
			break;
		s++;
	}

	return (nb);
}
