#include "main.h"

/**
*
*/

int _strcmp(char *s1, char *s2)
{
	int compare, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[1] != s2[i])
		{
			compare = s1[i] - s2[i];
			break;
		}
		else
			compare = 0;
	}
	return (compare);
}
