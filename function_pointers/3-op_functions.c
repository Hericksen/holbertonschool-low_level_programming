#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Addition of 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: Addition of 2 int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction of 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: Substraction of 2 int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplication of 2 int
  * @a: 1st int
  * @b: 2nd int
  * Return: Multiplication of 2 int
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: Division of 2 int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Return\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo of 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: Modulo of 2 int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
