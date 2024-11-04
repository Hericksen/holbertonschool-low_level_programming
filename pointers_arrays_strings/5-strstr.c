#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: string were to look
 * @needle: substring to find in the haystack
 * Return: return the pointer to the haystack or NULL if no match
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
