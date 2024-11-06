#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * is_positive_number - check if the number is +
 * @str: string check
 * Return: 0 if not a digit, return 1
*/
int is_positive_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of argument
 * Return: return error and 1 if not + number, return 0 if 0, return 0
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
