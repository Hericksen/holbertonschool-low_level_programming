#include <stdlib.h>

/**
 * _strdup - copy a string with a new allocate memory
 * @str: pointer to a string
 * Return: NULL if str NULL, if pointer NULL else return p to str
*/


char *_strdup(char *str)
{
	int size = 0;
	char *p, *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	p = malloc(size + 1);

	if (p == NULL)
		return (NULL);

	duplicate = p;

	while (*str)
		*duplicate++ = *str++;

	*duplicate = '\0';

	return (p);
}
