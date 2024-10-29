#include "main.h"

/**
 * _strlen - calculate the lenght of the string in parameter
 * @s: string tested
 * Return: lenght of the string
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
