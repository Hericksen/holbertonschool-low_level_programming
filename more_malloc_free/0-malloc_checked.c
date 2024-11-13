#include <stdlib.h>

/**
 * malloc_checked - code check
 * @b: int checked
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
