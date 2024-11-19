#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *
*/

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int num1, num2, result;

	if (argc != 4) /*Check if the number of arg is correct*/
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]); /* Convert the 1st arg to an int */
	num2 = atoi(argv[3]); /* Convert the 3rd arg to an int */
	op = get_op_func(argv[2]); /* Get the hnc corresponding to the op */

	if (!op) /* Check if valid op */
	{
		printf("Error\n");
		return (99);
	}

	/* Check if division/modulo by 0 */
	if ((argv[2][0] == '/' || argv [2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op(num1, num2); /* Do the operation */
	printf("%d\n", result); /* Print the result */

	return (0);
}
