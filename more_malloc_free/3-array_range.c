#include <stdlib.h>

/**
 * array_range - create an array of int
 * @min: min of array
 * @max: max of array
 * Return: return the array
*/

int *array_range(int min, int max)
{
	int i;
	int range_size = max - min + 1;
	int *array = (int *)malloc(range_size * sizeof(int));

	if (min > max)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < range_size; i++)
		array[i] = min + i;

	return (array);
}
