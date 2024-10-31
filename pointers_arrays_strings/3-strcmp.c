#include "main.h"

/**
* _strcmp - compare two strings
* @s1: 1st string
* @s2: 2nd string
* Return: 0 if s1 = s2, negative valur if s1 < s2, positive value otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int compare, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			compare = s1[i] - s2[i];
			break;
		}
		else
			compare = 0;
	}
	return (compare);
}
