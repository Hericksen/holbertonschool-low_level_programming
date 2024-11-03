#include "main.h"


/**
 * _atoi - convert a string into an int
 * @str: string converted
 * Return: the result of the sign of the number
*/

int _atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str && (*str < '0' || *str > '9'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (result * sign);
}
