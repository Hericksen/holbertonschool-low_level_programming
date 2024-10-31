#include "2-strlen.c"
/**
 * _strncpy - copy the string
 * @dest: string destination
 * @src: string source
 * @n: size of string in byte
 * Return: return the string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
