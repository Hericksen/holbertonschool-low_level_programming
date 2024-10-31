#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: array of int
 * @n: number of elements ine the array
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
