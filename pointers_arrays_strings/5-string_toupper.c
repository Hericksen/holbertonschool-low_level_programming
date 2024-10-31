#include "main.h"

/**
 * string_toupper - changers all lowercase to uppercase
 * @str: string tested
 * Return: return the string uppercase
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
