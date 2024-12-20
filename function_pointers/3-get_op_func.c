#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function to check op
 * @s: operator
 * Return: Proper operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
		i++;

	if (ops[i].op == NULL)
		return (NULL);

	return (ops[i].f);
}
