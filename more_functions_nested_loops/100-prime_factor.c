#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates the largest prime factor of
 * the number 612852475143 and prints it followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
    long number = 612852475143;
    long factor = 2;
    long largest_factor = 0;

    while (number > 1)
    {
        if (number % factor == 0)
        {
            largest_factor = factor;
            number /= factor;
        }
        else
        {
            factor++;
        }
    }

    printf("%ld\n", largest_factor);
    return (0);
}
