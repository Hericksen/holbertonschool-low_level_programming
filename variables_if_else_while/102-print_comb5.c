#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
*/

int main(void)
{
	int numb1, numb2;

	for (numb1 = 0; numb1 <=99; numb1++)
	{
		for (numb2 = 0; numb2 <=99; numb2++)
		{
			putchar((numb1 / 10) + '0');
			putchar((numb1 % 10) + '0');
			putchar(' ');
			putchar((numb2 / 10) + '0');
			putchar((numb2 % 10) + '0');

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
