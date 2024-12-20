#include "main.h"

/**
 * _strlen_recursion - returns the length of a string by recursion
 * @s: string tested
 * Return: 0 if end of the string, 1 + recursivity
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
