#include "2-strlen.c"

/**
 * _strncat - concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * @n: n bytes uses
 * Return: return a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
