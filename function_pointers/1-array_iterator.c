#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a fnc given as a parameter on each element of arr
 * @array: array of integer
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
