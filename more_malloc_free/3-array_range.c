#include <stdlib.h>

/**
 * array_range - create an array of int
 * @min: min of array
 * @max: max of array
 * Return: return the array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min) + sizeof(int)));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
		ptr[i++] = min++;

	return (ptr);
}
