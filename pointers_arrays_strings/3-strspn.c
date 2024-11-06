#include "main.h"

/**
 * _strspn -
 * @s:
 * @accept:
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int nb = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				nb++;
				break;
			}
		}
		if (s[i] != accept[j])
			return (nb);
	}

	return (nb);
}