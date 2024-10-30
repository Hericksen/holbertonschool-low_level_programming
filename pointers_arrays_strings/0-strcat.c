#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: return the resulting string
*/


char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0') /*Move to the end of dest string*/
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
