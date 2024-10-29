#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 * @a: first integers
 * @b: second integers
*/

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
