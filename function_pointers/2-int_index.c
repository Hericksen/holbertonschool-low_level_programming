#include <stddef.h>

/**
 * int_index - Search an integer in an array
 * @array: Array source
 * @size: Size of array
 * @cmp: Function use to compare in array
 * Return: -1 if false, else return the int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
