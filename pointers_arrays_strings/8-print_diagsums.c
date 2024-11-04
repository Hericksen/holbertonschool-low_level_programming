#include "main.h"
#include <stdio.h>

/**
 *
*/

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
		sum1 += a[i * size + i];
	for (i = 0; i < size; i++)
		sum2 += a[i * size + (size - i)];
	printf ("%d, %d\n", sum1, sum2);
}
