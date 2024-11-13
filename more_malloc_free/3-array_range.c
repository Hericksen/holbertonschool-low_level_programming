#include <stdlib.h>

/**
 *
*/

int *array_range(int min, int max)
{
	int i;
	int range_size = max - min +1;
	int *array = (int *)malloc(range_size * sizeof(int));

	if (min > max)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < range_size; i++)
		array[i] = min + i;

	return (array);
}
